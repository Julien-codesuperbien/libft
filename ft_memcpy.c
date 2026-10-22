/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:15:02 by julasne           #+#    #+#             */
/*   Updated: 2026/10/22 14:07:25 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char src[50] = "Bonjour la 42 !";
//     char dest[50];

//     // Utilisation de ft_memcpy
//     ft_memcpy(dest, src, 15);

//     // Affichage du résultat
//     printf("Source : %s\n", src);
//     printf("Destination : %s\n", dest);

//     return (0);
// }
