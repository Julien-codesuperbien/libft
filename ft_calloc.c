/* ** /
/                                                                            /
/                                                        :::      ::::::::   /
/   ft_calloc.c                                        :+:      :+:    :+:   /
/                                                    +:+ +:+         +:+     /
/   By: julasne julasne@student.42.fr            +#+  +:+       +#+        /
/                                                +#+#+#+#+#+   +#+           /
/   Created: 2026/10/21 16:59:34 by julasne           #+#    #+#             /
/   Updated: 2026/10/22 19:00:31 by julasne          ###   ########.fr       /
/                                                                            /
/ ** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;

    if (nmemb > 0 && size > SIZE_MAX / nmemb)
        return NULL;
    ptr = malloc(nmemb * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, nmemb * size);
    return (ptr);
}

// int main(void)
// {s
//     int arr;
//     size_t count = 5;
//     size_t size = sizeof(int);
//     size_t i = 0;

//     // Allocation avec ft_calloc
//     arr = (int)ft_calloc(count, size);

//     if (arr == NULL)
//     {
//         printf("Échec de l'allocation mémoire.\n");
//         return (1);
//     }

//     // Vérification que la mémoire est bien initialisée à zéro
//     while (i < count)
//     {
//         printf("arr[%zu] = %d\n", i, arr[i]);
//         i++;
//     }

//     // Libération de la mémoire
//     free(arr);

//     return (0);
// }