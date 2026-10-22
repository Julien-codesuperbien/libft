/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:35:34 by julasne           #+#    #+#             */
/*   Updated: 2026/10/22 14:07:53 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s2;
	size_t			i;

	s2 = s;
	i = 0;
	while (i < n)
	{
		s2[i] = c;
		i++;
	}
	return (s);
}

// int main(void)
// {
//     char buffer1[20] = "Hello 42 Cursus!";
//     char buffer2[20] = "Hello 42 Cursus!";

//     // Test avec ft_memset
//     ft_memset(buffer1, 'a', 5);
//     printf("ft_memset : %s\n", buffer1);

//     // Test avec la vraie fonction memset de <string.h> pour comparer
//     memset(buffer2, 'a', 5);
//     printf("Real memset : %s\n", buffer2);
// }