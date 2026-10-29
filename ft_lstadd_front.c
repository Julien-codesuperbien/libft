/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:54:01 by julasne           #+#    #+#             */
/*   Updated: 2026/10/28 15:28:49 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     t_list *head = NULL;
    
//     // Création rapide de 2 nœuds sur la pile (pas besoin de malloc/free pour un test rapide)
//     t_list elem1 = {"Deuxieme", NULL};
//     t_list elem2 = {"Premier", NULL};

//     // Ajout des éléments
//     ft_lstadd_front(&head, &elem1);
//     ft_lstadd_front(&head, &elem2);

//     // Affichage du résultat
//     printf("%s -> %s -> %p\n", (char *)head->content, (char *)head->next->content, head->next->next);
    
//     return (0);
// }
