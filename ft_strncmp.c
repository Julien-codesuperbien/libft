/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:49:30 by julasne           #+#    #+#             */
/*   Updated: 2026/10/22 14:50:26 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	while ((i < n - 1) && s1[i] && (s1[i] == s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main(void)
// {
//     const char *s1 = "Hello world";
//     const char *s2 = "Hello 42";
//     size_t n = 5;

//     // Test 1 : les 5 premiers caractères sont identiques ("Hello")
//     printf("Test 1 (attendu: 0) -> Résultat : %d\n", ft_strncmp(s1, s2, n));

//     // Test 2 : comparaison sur plus de caractères (le 'w' et le '4')
//     n = 8;
//     printf("Test 2 (attendu 67) -> Résultat : %d\n", ft_strncmp(s1, s2, n));

//     // Test 3 : chaînes identiques avec n = 11
//     printf("Test 3 (attendu0) -> Résultat : %d\n", ft_strncmp("t", "t", 4));

//     return (0);
// }
