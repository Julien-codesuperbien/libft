/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 20:42:52 by julasne           #+#    #+#             */
/*   Updated: 2026/10/24 00:24:56 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while(set[i])
	{
		if(set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while(s1[i] && in_set(s1[i], set))
		i++;
	while(j > i && in_set(s1[j - 1], set))
		j--;
	return (ft_substr(s1, i, j - i));
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*res;

// 	printf("--- Tests pour ft_strtrim ---\n\n");

// 	// Test 1 : Cas classique (espaces au début et à la fin)
// 	char const *s1_1 = "   \t  Hello World!   \n  ";
// 	char const *set_1 = " \t\n";
// 	res = ft_strtrim(s1_1, set_1);
// 	printf("Test 1 (Standard) :\n");
// 	printf("  Original : \"%s\"\n", s1_1);
// 	printf("  Set      : \"%s\"\n", set_1);
// 	printf("  Résultat : \"%s\"\n\n", res);
// 	free(res); // Toujours libérer la mémoire allouée par ft_strtrim

// 	// Test 2 : Caractères spécifiques multiples
// 	char const *s1_2 = "xxx---42 École---xxx";
// 	char const *set_2 = "x-";
// 	res = ft_strtrim(s1_2, set_2);
// 	printf("Test 2 (Caractères spécifiques) :\n");
// 	printf("  Original : \"%s\"\n", s1_2);
// 	printf("  Set      : \"%s\"\n", set_2);
// 	printf("  Résultat : \"%s\"\n\n", res);
// 	free(res);

// 	// Test 3 : Aucun caractère du 'set' n'est présent
// 	char const *s1_3 = "Pas de changement";
// 	char const *set_3 = "xyz";
// 	res = ft_strtrim(s1_3, set_3);
// 	printf("Test 3 (Aucune correspondance) :\n");
// 	printf("  Original : \"%s\"\n", s1_3);
// 	printf("  Résultat : \"%s\"\n\n", res);
// 	free(res);

// 	// Test 4 : La chaîne entière doit être supprimée (que des caractères du set)
// 	char const *s1_4 = "aaaaaaa";
// 	char const *set_4 = "a";
// 	res = ft_strtrim(s1_4, set_4);
// 	printf("Test 4 (Chaîne entièrement vidée) :\n");
// 	printf("  Original : \"%s\"\n", s1_4);
// 	printf("  Résultat : \"%s\" (Doit être une chaîne vide allouée)\n\n", res);
// 	free(res);

// 	// Test 5 : Chaîne d'origine déjà vide
// 	char const *s1_5 = "";
// 	char const *set_5 = " \t";
// 	res = ft_strtrim(s1_5, set_5);
// 	printf("Test 5 (Chaîne d'origine vide) :\n");
// 	printf("  Original : \"%s\"\n", s1_5);
// 	printf("  Résultat : \"%s\"\n\n", res);
// 	free(res);

// 	return (0);
// }
