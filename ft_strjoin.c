/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 19:01:35 by julasne           #+#    #+#             */
/*   Updated: 2026/10/23 21:07:02 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2);
	new = malloc (size + 1);
	if (!new)
		return NULL;
	new[0] = '\0';
	ft_strlcat(new, s1, size + 1);
	ft_strlcat(new, s2, size + 1);
	return(new);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*result;

// 	printf("--- TEST 1 : Assemblage standard ---\n");
// 	char const *s1 = "Hello, ";
// 	char const *s2 = "world!";
// 	result = ft_strjoin(s1, s2);
// 	printf("s1     : \"%s\"\n", s1);
// 	printf("s2     : \"%s\"\n", s2);
// 	printf("Result : \"%s\"\n", result);
// 	free(result); // Toujours libérer la mémoire allouée
// 	printf("\n");

// 	printf("--- TEST 2 : Première chaîne vide ---\n");
// 	char const *s3 = "";
// 	char const *s4 = "42";
// 	result = ft_strjoin(s3, s4);
// 	printf("s1     : \"%s\"\n", s3);
// 	printf("s2     : \"%s\"\n", s4);
// 	printf("Result : \"%s\"\n", result);
// 	free(result);
// 	printf("\n");

// 	printf("--- TEST 3 : Seconde chaîne vide ---\n");
// 	char const *s5 = "42";
// 	char const *s6 = "";
// 	result = ft_strjoin(s5, s6);
// 	printf("s1     : \"%s\"\n", s5);
// 	printf("s2     : \"%s\"\n", s6);
// 	printf("Result : \"%s\"\n", result);
// 	free(result);
// 	printf("\n");

// 	return (0);
// }
