/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:14:47 by julasne           #+#    #+#             */
/*   Updated: 2026/10/22 14:16:43 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (unsigned char)c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)&s[i]);
}

// #include <string.h>

// int	main(void)
// {
// 	const char	*str = "Bonjour tout le monde";
// 	char		*result_ft;
// 	char		*result_libc;

// 	// Test 1 : recherche d'un caractère présent ('o')
// 	result_ft = ft_strchr(str, 'o');
// 	result_libc = strchr(str, 'o');
// 	printf("Test 'o' :\n");
// 	printf("  ft_strchr : %s\n", result_ft);
// 	printf("  strchr    : %s\n\n", result_libc);

// 	// Test 2 : recherche d'un caractère absent ('z')
// 	result_ft = ft_strchr(str, 'z');
// 	result_libc = strchr(str, 'z');
// 	printf("Test 'z' :\n");
// 	printf("  ft_strchr : %p\n", (void *)result_ft);
// 	printf("  strchr    : %p\n\n", (void *)result_libc);

// 	// Test 3 : recherche du caractère nul '\\0' (très important dans ft_strchr)
// 	result_ft = ft_strchr(str, '\0');
//result_libc = strchr(str, '\0');
//printf("Test '\\0' :\n");
//printf("  ft_strchr : %p;
//printf("  strchr    : %p;

// 	return (0);
// }
