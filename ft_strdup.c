/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:00:34 by julasne           #+#    #+#             */
/*   Updated: 2026/10/23 15:22:35 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*ptr;

	ptr = (char *)malloc (ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, ft_strlen(s) + 1);
	return (ptr);
}

// int main(void)
// {
// 	char *original = "Bonjour 42 !";
// 	char *copie;

// 	copie = ft_strdup(original);

// 	if (copie == NULL)
// 	{
// 		printf("Erreur d'allocation mémoire.\n");
// 		return (1);
// 	}

// 	printf("Original : %s\n", original);
// 	printf("Copie    : %s\n", copie);

// 	free(copie); // Toujours libérer la mémoire allouée par malloc
// 	return (0);
// }