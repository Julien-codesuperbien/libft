/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:15:48 by julasne           #+#    #+#             */
/*   Updated: 2026/10/28 15:28:51 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;
	int	n;

	i = 0;
	n = ft_lstsize(lst);
	while(i < n - 1)
	{
		lst = lst->next;
		i++;
	}
	return(lst);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     t_list *elem1;
//     t_list *elem2;
//     t_list *elem3;
//     t_list *last;

//     // Création de 3 maillons
//     elem1 = ft_lstnew("Premier");
//     elem2 = ft_lstnew("Deuxième");
//     elem3 = ft_lstnew("Troisième");

//     // Chaînage des maillons : elem1 -> elem2 -> elem3
//     elem1->next = elem2;
//     elem2->next = elem3;
//     elem3->next = NULL;

//     // Appel de ft_lstlast
//     last = ft_lstlast(elem1);

//     if (last)
//         printf("Dernier maillon content : %s\n", (char *)last->content);
//     else
//         printf("La liste est vide.\n");

//     // Libération de la mémoire
//     free(elem1);
//     free(elem2);
//     free(elem3);

//     return (0);
// }
