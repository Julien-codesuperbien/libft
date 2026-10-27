/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:15:45 by julasne           #+#    #+#             */
/*   Updated: 2026/10/27 16:20:19 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

// int main(void)
// {
//     // Affiche la chaîne suivie d'un retour à la ligne automatique sur la sortie standard (1)
//     ft_putendl_fd("Hello, World!", 1);

//     // Exemple sur la sortie d'erreur (2)
//     ft_putendl_fd("Ceci est un message d'erreur avec retour à la ligne.", 2);

//     return (0);
// }
