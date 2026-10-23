/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:26:37 by julasne           #+#    #+#             */
/*   Updated: 2026/10/23 12:42:38 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>?
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int main()
// {
//     printf("%d", ft_strlen("je mange des patates"));
// }