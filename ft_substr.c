/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 15:29:23 by julasne           #+#    #+#             */
/*   Updated: 2026/10/23 18:58:50 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start > len_s)
		start = len_s;
	if (len > len_s - start)
		len = len_s - start;
	ptr = malloc(len + 1);
	if (!ptr)
		return NULL;
	ft_strlcpy(ptr, &s[start], len + 1);
	return (ptr);
}


// int	main(void)
// {
// 	char	*str = "Bonjour tout le monde !";
// 	char	*res;

// 	printf("Chaîne d'origine : \"%s\"\n\n", str);

// 	// --- TEST 1 : Cas classique ---
// 	// Extrait "tout" (index 8, longueur 4)
// 	res = ft_substr(str, 8, 4);
// 	printf("Test 1 (Cas classique)   : \"%s\" (Attendu: \"tout\")\n", res);
// 	free(res);

// 	// --- TEST 2 : len plus grand que la chaîne ---
// 	// Demande 50 caractères à partir de l'index 16
// 	res = ft_substr(str, 16, 50);
// 	printf("Test 2 (len trop grand)  : \"%s\" (Attendu: \"monde !\")\n", res);
// 	free(res);

// 	// --- TEST 3 : start hors limites ---
// 	// L'index 42 est bien au-delà de la taille de la chaîne
// 	res = ft_substr(str, 42, 5);
// 	printf("Test 3 (start > taille)  : \"%s\" (Attendu: \"\")\n", res);
// 	free(res);

// 	// --- TEST 4 : len vaut 0 ---
// 	res = ft_substr(str, 5, 0);
// 	printf("Test 4 (len = 0)         : \"%s\" (Attendu: \"\")\n", res);
// 	free(res);

// 	return (0);
// }
