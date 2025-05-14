/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:59:29 by tidos-sa          #+#    #+#             */
/*   Updated: 2024/10/20 19:14:36 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void) {
    char buffer[10]; // Define um array de 10 bytes

    // Usa a função personalizada para preencher o array com o valor 65 ('A')
    ft_memset(buffer, 65, sizeof(buffer));

    // Verifica se o array foi preenchido corretamente
    unsigned int i = 0;
    while (i < sizeof(buffer)) {
        printf("%c ", buffer[i]); // Deve imprimir 'A' para cada posição
        i++;
    }

    return (0);
}
*/
