/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:07:33 by julasne           #+#    #+#             */
/*   Updated: 2026/10/28 17:31:59 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return;
	del(lst->content);
	free(lst);
}

// #include <stdlib.h>
// #include <string.h>

// int main(void)
// {
//     t_list *node = malloc(sizeof(t_list));
//     node->content = strdup("42");
//     node->next = NULL;

//     ft_lstdelone(node, free);
//     return (0);
// }
