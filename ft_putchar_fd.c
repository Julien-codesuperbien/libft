/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:50:10 by julasne           #+#    #+#             */
/*   Updated: 2026/10/27 16:14:30 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main(void)
// {
//     // Affiche le caractère 'A' sur la sortie standard (file descriptor 1)
//     ft_putchar_fd('A', 1);
    
//     // Affiche un retour à la ligne
//     ft_putchar_fd('\n', 1);

//     return (0);
// }
