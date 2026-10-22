/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:07:41 by julasne           #+#    #+#             */
/*   Updated: 2026/10/21 15:25:57 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ts1;
	unsigned char	*ts2;
	size_t			i;

	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	i = 0;
	while ((i < n))
	{
		if (ts1[i] != ts2[i])
			return (ts1[i] - ts2[i]);
		i++;
	}
	return (0);
}

// #include <string.h>

// void	tester_memcmp(const void *s1, const void *s2, size_t n, int test_num)
// {
// 	int res_std = memcmp(s1, s2, n);
// 	int res_ft  = ft_memcmp(s1, s2, n);

// 	printf("--- Test %d (n = %zu) ---\n", test_num, n);
// 	if ((res_std == 0 && res_ft == 0) || 
// 		(res_std < 0 && res_ft < 0) || 
// 		(res_std > 0 && res_ft > 0))
// 	{
// 		printf("✅ SUCCESS\n");
// 	}
// 	else
// 	{
// 		printf("❌ FAIL | Attendu (signe): %d, Obtenu: %d\n", res_std, res_ft);
// 	}
// 	printf("Détails -> Standard: %d | ft_memcmp: %d\n\n", res_std, res_ft);
// }

// int	main(void)
// {
// 	printf("=== LANCEMENT DES TESTS POUR FT_MEMCMP ===\n\n");

// 	// Test 1 : Chaînes strictement identiques
// 	tester_memcmp("abcdef", "abcdef", 6, 1);

// 	// Test 2 : Différence au milieu (s1 < s2)
// 	tester_memcmp("abcZef", "abcdef", 6, 2);

// 	// Test 3 : Différence au milieu (s1 > s2)
// 	tester_memcmp("abcdef", "abcZef", 6, 3);

// 	// Test 4 : Comparaison sur 0 octet (doit renvoyer 0)
// 	tester_memcmp("abcdef", "xyz", 0, 4);

// 	/* 
// 	** Test 5 : Différence APRÈS un caractère nul '\0'.
// 	** ft_strcmp s'arrêterait au '\0' et renverrait 0.
// 	** ft_memcmp doit continuer et détecter la différence à la fin.
// 	*/
// 	char t5_s1[] = "abc\0def";
// 	char t5_s2[] = "abc\0dZf";
// 	tester_memcmp(t5_s1, t5_s2, 7, 5);

// 	// Test 6 : Gestion des valeurs non-signées (unsigned char)
// 	// '\xff' vaut -1 en char signé, mais 255 en unsigned char.
// 	char t6_s1[] = "\xff\x00";
// 	char t6_s2[] = "\xaa\x00";
// 	tester_memcmp(t6_s1, t6_s2, 2, 6);

// 	return (0);
// }
