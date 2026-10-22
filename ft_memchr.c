/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:39:27 by julasne           #+#    #+#             */
/*   Updated: 2026/10/21 17:35:30 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *)s;
	while (i < n)
	{
		if (s2[i] == (unsigned char)c)
			return ((void *) &s[i]);
		i++;
	}
	return (NULL);
}

// #include <string.h>

// int	main(void)
// {
// 	// ==========================================
// 	// TEST 1 : Caractère présent au milieu
// 	// ==========================================
// 	const char	s1[] = "Hello, 42 Paris!";
// 	void		*ret_ft1;
// 	void		*ret_std1;

// 	ret_ft1 = ft_memchr(s1, '4', 15);
// 	ret_std1 = memchr(s1, '4', 15);
// 	printf("--- TEST 1 (Recherche de '4') ---\n");
// 	printf("  Adresse de départ : %p\n", (void *)s1);
// 	printf("  ft_memchr         : %p\n", ret_ft1);
// 	printf("  memchr            : %p\n\n", ret_std1);

// 	// ==========================================
// 	// TEST 2 : Caractère absent
// 	// ==========================================
// 	void		*ret_ft2;
// 	void		*ret_std2;

// 	ret_ft2 = ft_memchr(s1, 'z', 15);
// 	ret_std2 = memchr(s1, 'z', 15);
// 	printf("--- TEST 2 (Recherche de 'z' - absent) ---\n");
// 	printf("  ft_memchr         : %p (doit etre nil/0x0)\n", ret_ft2);
// 	printf("  memchr            : %p (doit etre nil/0x0)\n\n", ret_std2);

// 	// ==========================================
// 	// TEST 3 : Données binaires contenant des '\\0'
// 	// ==========================================
// 	// memchr ne doit pas s'arrêter au premier 0x00
// 	char	data[] = {0x00, 0x11, 0x22, 0x00, 0x44};
// 	void	*ret_ft3;
// 	void	*ret_std3;

// 	ret_ft3 = ft_memchr(data, 0x44, 5);
// 	ret_std3 = memchr(data, 0x44, 5);
// 	printf("--- TEST 3 (Donnees binaires - Recherche de 0x44) ---\n");
// 	printf("  Adresse de départ : %p\n", (void *)data);
// 	printf("  ft_memchr         : %p\n", ret_ft3);
// 	printf("  memchr            : %p\n\n", ret_std3);

// 	// ==========================================
// 	// TEST 4 : Limite stricte de n (Recherche hors borne)
// 	// ==========================================
// 	// Le caractère 'P' est présent, mais après la limite n = 5
// 	void	*ret_ft4;
// 	void	*ret_std4;

// 	ret_ft4 = ft_memchr(s1, 'P', 5);
// 	ret_std4 = memchr(s1, 'P', 5);
// 	printf("--- TEST 4 (Limite n = 5 - Recherche de 'P') ---\n");
// 	printf("  ft_memchr : %p (doit bloquer renvoyer 0x0)\n", ret_ft4);
// 	printf("  memchr    : %p (doit bloquer renvoyer 0x0)\n", ret_std4);

// 	return (0);
// }
