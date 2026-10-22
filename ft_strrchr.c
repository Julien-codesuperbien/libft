/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:32:11 by julasne           #+#    #+#             */
/*   Updated: 2026/10/22 14:36:12 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	temp;

	i = 0;
	temp = -1;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			temp = i;
		i++;
	}
	if (c == 0)
		return((char *)&s[i]);
	if (temp == -1)
		return (NULL);
	return ((char *)&s[temp]);
}

// int	main(void)
// {
// 	const char	*str = "Bonjour tout le monde";
// 	char		*res;

// 	// Test 1 : recherche d'un caractère présent plusieurs fois ('o')
// 	res = ft_strrchr(str, 'o');
// 	if (res)
// 		printf("Dernier 'o' trouvé : %s\n", res);
// 	else
// 		printf("Caractère non trouvé\n");

// 	// Test 2 : recherche du caractère nul ('\0')
// 	res = ft_strrchr(str, '\0');
// 	if (res)
// 		printf("Caractère nul trouvé à la fin (pointeur valide)\n");

// 	// Test 3 : recherche d'un caractère absent ('z')
// 	res = ft_strrchr(str, 'z');
// 	if (res)
// 		printf("Trouvé : %s\n", res);
// 	else
// 		printf("'z' non trouvé (comportement attendu : NULL)\n");

// 	return (0);
// }
