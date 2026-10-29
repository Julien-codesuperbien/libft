/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:02:48 by julasne           #+#    #+#             */
/*   Updated: 2026/10/28 15:28:52 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while(lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	t_list	node1;
// 	t_list	node2;
// 	t_list	node3;

// 	// Liens directs sur la pile (pas besoin de malloc/free)
// 	node1.next = &node2;
// 	node2.next = &node3;
// 	node3.next = NULL;

// 	// Test de la taille
// 	printf("Taille : %d\n", ft_lstsize(&node1));

// 	return (0);
// }