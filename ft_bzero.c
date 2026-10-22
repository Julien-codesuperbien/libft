/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:30:30 by julasne           #+#    #+#             */
/*   Updated: 2026/10/22 14:07:14 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s2;
	size_t			i;

	i = 0;
	s2 = s;
	while (i < n)
		s2[i++] = '\0';
}

// int main(void)
// {
//     char buffer1[20] = "Hello 42 Cursus!";
//     char buffer2[20] = "Hello 42 Cursus!";

//     // Test avec ft_bzero
//     ft_bzero(buffer1, 1);
//     printf("ft_bzero : %s\n", buffer1);

//     // Test avec la vraie fonction bzero pour comparer
//     bzero(buffer2, 1);
//     printf("Real bzero : %s\n", buffer2);

//     return (0);
// }
