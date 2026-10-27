/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julasne <julasne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:27:53 by julasne           #+#    #+#             */
/*   Updated: 2026/10/27 15:44:50 by julasne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	int	i;

	i = 0;
	while(s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// #include "libft.h"

// // Example function to modify characters (e.g., convert to uppercase or shift)
// void my_toupper_index(unsigned int i, char *c)
// {
//     (void)i; // Unused parameter warning fix if needed
//     if (*c >= 'a' && *c <= 'z')
//         *c -= 32;
// }

// int main(void)
// {
//     char str[] = "hello world 42";

//     printf("Before: %s\n", str);
    
//     // Apply my_toupper_index to each character with its index
//     ft_striteri(str, my_toupper_index);
    
//     printf("After:  %s\n", str);

//     return (0);
// }