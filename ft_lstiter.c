/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:24:15 by julasne           #+#    #+#             */
/*   Updated: 2026/10/29 13:37:52 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*next;

	if(!lst || !f)
		return;
	while (lst)
	{
		next = (lst)->next;
		f(lst->content);
		lst = next;
	}
}
// #include <stdio.h>
// #include <stdlib.h>

// // Une fonction f toute simple qui modifie le contenu
// void	transformer_en_42(void *content)
// {
// 	int *nb = (int *)content;
// 	*nb = 42;
// }

// int	main(void)
// {
// 	t_list *liste;
// 	int data = 10;

// 	// 1. On crée un maillon avec la valeur 10
// 	liste = ft_lstnew(&data);
	
// 	// 2. On affiche avant
// 	printf("Avant lstiter : %d\n", *(int *)liste->content);
	
// 	// 3. On applique ft_lstiter
// 	ft_lstiter(liste, transformer_en_42);
	
// 	// 4. On affiche après pour voir si la fonction f a bien été appliquée
// 	printf("Après lstiter : %d\n", *(int *)liste->content); // Doit afficher 42
	
// 	free(liste);
// 	return (0);
// }
