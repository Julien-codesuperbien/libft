/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:30:58 by julasne           #+#    #+#             */
/*   Updated: 2026/10/27 14:32:29 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_neg(int n)
{
	return(n < 0);
}

static int	nb_int(int n)
{
	long int	nb;
	long	n1;

	nb = 0;
	n1 = (long)n;
	if (n1 == 0)
		return(1);
	if (n1 < 0)
		n1 = -n1;
	while(n1 > 0)
	{
		nb++;
		n1 = n1 / 10;
	}
	return(nb);
}

char	*ft_itoa(int n)
{
	int		length;
	int		variable;
	long	n1;
	char	*ascii;

	variable = 0;
	length = nb_int(n);
	n1 = (long)n;
	if (is_neg(n))
	{
		variable = 1;
		n1 = -n1;
	}
	ascii = malloc (length + variable + 1);
	if(!ascii)
		return (NULL);
	if (variable == 1)
		ascii[0] = '-';
	ascii[length + variable] = '\0';
	if (n1 == 0)
		ascii[0] = '0';
	while (n1 > 0)
	{
		length--;
		ascii[length + variable] = n1 % 10 + '0';
		n1 = n1 / 10;
	}
	return(ascii);
}

// #include <stdio.h>

// int main()
// {
// 	int a = 123;
// 	int b = -2147483648;
// 	int c = 0;

// 	printf("Test 123 : %s\n", ft_itoa(a));
// 	printf("Test INT_MIN : %s\n", ft_itoa(b));
// 	printf("Test 0 : %s\n", ft_itoa(c));
// }