/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:53:50 by julasne           #+#    #+#             */
/*   Updated: 2026/10/27 16:13:53 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

// int main(void)
// {
//     // Affiche la chaîne de caractères sur la sortie standard (file descriptor 1)
//     ft_putstr_fd("Hello, World!", 1);
    
//     // Affiche un retour à la ligne pour la propreté du terminal
//     ft_putchar_fd('\n', 1);

//     // Exemple sur la sortie d'erreur (file descriptor 2)
//     ft_putstr_fd("Ceci est un message d'erreur.\n", 2);

//     return (0);
// }
