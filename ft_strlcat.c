/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:40:32 by julasne           #+#    #+#             */
/*   Updated: 2026/10/22 14:10:06 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(dst);
	while ((i < size) && (src[i]))
	{
		dst[i + l] = src[i];
		i++;
	}
	dst[i + l] = '\0';
	return (i);
}

// #include <string.h>
// int main(void)
// {
//     char dest1[30] = "Bonjour ";
//     char const *src1 = "le monde !";
//     size_t ret;

//     // Test de concaténation avec une taille suffisante
//     ret = ft_strlcat(dest1, src1, sizeof(dest1));
//     printf("Chaîne résultat : '%s'\n", dest1);
//     printf("Longueur totale tentée : %zu\n\n", ret);

//     char dest2[10] = "Hello";
//     char const *src2 = " World!";
//     // Test de troncature (taille du buffer destination limitée)
//     ret = ft_strlcat(dest2, src2, sizeof(dest2));
//     printf("Chaîne résultat (tronquée) : '%s'\n", dest2);
//     printf("Longueur totale tentée : %zu\n", ret);

//     return (0);
// }
