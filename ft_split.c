/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:42:01 by julasne           #+#    #+#             */
/*   Updated: 2026/10/26 16:53:18 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	nb;
	int		in_word;

	in_word = 0;
	nb = 0;
	i = 0;
	while(s[i])
	{
		if (!in_word && s[i] != c)
		{
			nb++;
			in_word = 1;
		}
		else if (in_word && s[i] == c)
			in_word = 0;
		i++;
	}
	return(nb);
}

static void	free_box(char **splout, size_t i)
{
	while(i > 0)
	{
		i--;
		free(splout[i]);
	}
	free(splout);
}

static int	fill_array(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	length;
	char	*chain;

	i = 0;
	
	chain = (char *) s;
	while (*chain)
	{
		length = 0;
		while (*chain == c)
			chain++;
		if (!*chain)
			break ;
		while (chain[length] && chain[length] != c)
			length++;
		tab[i] = ft_substr(chain, 0, length);
		if (!tab[i])
		{
			free_box(tab, i);
			return (1);
		}
		chain += length;
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**splout;
	size_t	nb_words;
	
	nb_words = count_words(s, c);
	splout = malloc(sizeof(char *) * (nb_words + 1));
	if (!splout)
		return (NULL);
	if (fill_array(s, c, splout) == 1)
		return (NULL);
	splout[nb_words] = NULL;
	return(splout);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char ch[100] = "  Hello World   ";
// 	char **tab;
// 	int	i = 0;

// 	tab = ft_split("  tripouille  42  ", 32);
// 	while (tab[i])
// 	{
// 		printf("%s\n", tab[i]);
// 		free(tab[i]);
// 		i++;
// 	}
// 	free(tab);
// }