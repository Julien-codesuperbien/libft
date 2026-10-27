/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:26:38 by julasne           #+#    #+#             */
/*   Updated: 2026/10/25 14:51:23 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while ((i + j) < len && big[i + j] && big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

// #include <string.h>

// int main(void)
// {
//     const char *haystack = "Hello 42 School";
//     const char *needle = "42";
//     char *result;

//     // Test 1: recherche normale
//     result = ft_strnstr(haystack, needle, 12);
//     printf("Test 1: %s\n", result ? result : "NULL");

//     // Test 2: needle vide
//     result = ft_strnstr(haystack, "", 10);
//     printf("Test 2: %s\n", result ? result : "NULL");

//     // Test 3: len trop court
//     result = ft_strnstr(haystack, needle, 5);
//     printf("Test 3: %s\n", result ? result : "NULL");

//     return (0);
// }