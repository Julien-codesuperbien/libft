/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:25:28 by julasne           #+#    #+#             */
/*   Updated: 2026/10/27 16:56:57 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = (long)n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	ft_putchar_fd((nb % 10) + '0', fd);
}


// int main(void)
// {
//     // Test 1: Positive number to standard output (fd = 1)
//     ft_putnbr_fd(42, 1);
//     write(1, "\n", 1);

//     // Test 2: Negative number to standard output (fd = 1)
//     ft_putnbr_fd(-12345aison, 1); // use -12345
//     write(1, "\n", 1);

//     // Test 3: Zero
//     ft_putnbr_fd(0, 1);
//     write(1, "\n", 1);

//     // Test 4: Minimum integer value (INT_MIN / -2147483648)
//     ft_putnbr_fd(-2147483648, 1);
//     write(1, "\n", 1);

//     // Test 5: Maximum integer value (INT_MAX / 2147483647)
//     ft_putnbr_fd(2147483647, 1);
//     write(1, "\n", 1);

//     return (0);
// }
