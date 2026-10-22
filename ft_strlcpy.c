/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:16:33 by julasne           #+#    #+#             */
/*   Updated: 2026/10/22 16:03:46 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return(ft_strlen(src));
	while ((i < size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
//     char src[] = "Bonjour 42";
//     char dest[20];
//     size_t a;

//     a = ft_strlcpy(dest, src, sizeof(dest));

//     printf("Source : %s\n", src);
//     printf("Destination : %s\n", dest);
//     printf("Longueur de src : %zu\n", a);

//     return (0);
// }
