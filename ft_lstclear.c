/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:01:02 by julasne           #+#    #+#             */
/*   Updated: 2026/10/29 13:36:45 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (!lst || !del)
		return;
	
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int	main(void)
// {
// 	t_list *liste;

// 	// On donne une vraie donnée allouée (strdup) à notre maillon
// 	liste = ft_lstnew(strdup("42")); 
	
// 	printf("Avant : %p\n", (void *)liste);
	
// 	// On passe free pour libérer la mémoire du strdup
// 	ft_lstclear(&liste, free); 
	
// 	printf("Après : %p\n", (void *)liste);
// 	return (0);
// }
