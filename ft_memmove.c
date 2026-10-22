/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:28:06 by julasne           #+#    #+#             */
/*   Updated: 2026/10/22 14:07:33 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	// Test 1 : Copie standard sans aucun chevauchement
// 	char	src1[] = "Hello World!";
// 	char	dest1[20];

// 	ft_memmove(dest1, src1, 13);
// 	printf("--- Test 1 (Copie normale) ---\n");
// 	printf("Source : %s\n", src1);
// 	printf("Dest   : %s\n\n", dest1);
// 	// Test 2 : Chevauchement (Destination APRES la Source)
// 	char	str2[] = "abcdefgh";
// 	// On déplace "abcde" (5 octets) de deux cases vers la droite
// 	// Attendu : "ababcdgh"
// 	ft_memmove(str2 + 2, str2, 5);
// 	printf("--- Test 2 (Overlap : dest > src) ---\n");
// 	printf("Résultat : %s (Attendu: ababcdgh)\n\n", str2);
// 	// Test 3 : Chevauchement (Destination AVANT la Source)
// 	char	str3[] = "abcdefgh";
// 	// On déplace "cdefg" (5 octets) de deux cases vers la gauche
// 	// Attendu : "cdefgffh" ou "cdefgfeh" selon l'implémentation standard
// 	ft_memmove(str3, str3 + 2, 5);
// 	printf("--- Test 3 (Overlap : dest < src) ---\n");
// 	printf("Résultat : %s (Attendu: cdefgffh)\n", str3);
// 	return (0);
// }
