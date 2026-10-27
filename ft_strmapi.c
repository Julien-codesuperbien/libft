/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:46:27 by julasne           #+#    #+#             */
/*   Updated: 2026/10/27 14:57:08 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *chain;
	int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	chain = malloc (ft_strlen(s) + 1);
	if (!chain)
		return (NULL);
	while (s[i])
	{
		chain[i] = f(i, s[i]);
		i++;
	}
	chain[i] = '\0';
	return (chain);
}

// #include <stdio.h>
// #include <stdlib.h>

// // Une fonction de test à passer en paramètre à ft_strmapi
// // Elle met en majuscule si l'index est pair, en minuscule si impair
// char modifier_char(unsigned int i, char c)
// {
//     if (c >= 'a' && c <= 'z' && (i % 2 == 0))
//     {
//         return (c - 32); // Convertit en majuscule
//     }
//     else if (c >= 'A' && c <= 'Z' && (i % 2 != 0))
//     {
//         return (c + 32); // Convertit en minuscule
//     }
//     return (c); // Reste inchangé si ce n'est pas une lettre
// }

// int main(void)
// {
//     char const *chaine_depart = "hello world!";
//     char *chaine_resultat;

//     printf("Chaîne d'origine : %s\n", chaine_depart);

//     // Appel de ft_strmapi
//     chaine_resultat = ft_strmapi(chaine_depart, &modifier_char);

//     // Vérification du résultat et de l'allocation
//     if (chaine_resultat == NULL)
//     {
//         printf("Erreur : l'allocation mémoire a échoué.\n");
//         return (1);
//     }

//     printf("Chaîne modifiée  : %s\n", chaine_resultat);

//     // Très important : libérer la mémoire allouée par ft_strmapi
//     free(chaine_resultat);

//     return (0);
// }
