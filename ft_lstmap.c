/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:38:24 by julasne           #+#    #+#             */
/*   Updated: 2026/10/29 14:53:06 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	int		size;
	void	*content;

	if(!lst || !f)
		return NULL;
	size = ft_lstsize(lst);
	new_lst = NULL;
	while(size > 0)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if(!new_node)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return(NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
		size--;
	}
	return (new_lst);
}

// #include <stdio.h>
// #include <stdlib.h>

// void	*f_test(void *content) { return (content); }

// int	main(void)
// {
// 	t_list	*origin = ft_lstnew("42");
// 	t_list	*new_lst = ft_lstmap(origin, f_test, free);

// 	if (new_lst)
// 		printf("Succès : %s\n", (char *)new_lst->content); // Affiche 42

// 	free(origin);
// 	free(new_lst);
// 	return (0);
// }
// // cc -Wall -Wextra -Werror ft_lstmap.c ft_lstadd_back.c ft_lstnew.c ft_lstclear.c  ft_lstsize.c ft_lstlast.c ft_lstdelone.c 