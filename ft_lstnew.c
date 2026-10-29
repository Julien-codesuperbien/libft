/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 11:49:05 by julasne           #+#    #+#             */
/*   Updated: 2026/10/28 15:28:51 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return(new);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	t_list	*elem;
// 	char	*str;

// 	str = "Bonjour, bienvenue à 42 !";
	
// 	// 1. Appel de la fonction avec la chaîne de caractères
// 	elem = ft_lstnew(str);

// 	// 2. Vérification de la création de l'élément (sécurité)
// 	if (elem == NULL)
// 	{
// 		printf("Erreur : L'allocation mémoire a échoué.\n");
// 		return (1);
// 	}

// 	// 3. Affichage et vérification des valeurs de la structure
// 	printf("--- Test de ft_lstnew ---\n");
// 	printf("Adresse de l'élément créé : %p\n", (void *)elem);
	
// 	// On doit cast le content en (char *) pour l'afficher correctement avec %s
// 	printf("Contenu stocké (content)  : %s\n", (char *)elem->content);
	
// 	// Le pointeur next doit obligatoirement être égal à NULL
// 	printf("Pointeur suivant (next)   : %p\n", (void *)elem->next);

// 	// 4. Libération de la mémoire allouée par le malloc de ft_lstnew
// 	free(elem);

// 	return (0);
// }
