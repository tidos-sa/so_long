/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:56:07 by tidos-sa          #+#    #+#             */
/*   Updated: 2024/10/21 18:37:01 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char		*str;
	size_t		full_size;
	size_t		i;

	i = 0;
	full_size = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (full_size / nmemb != size)
		return (NULL);
	str = malloc(full_size);
	if (!str)
		return (NULL);
	while (i < full_size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void) {
    int *arr;
    size_t n = 5;

    // Aloca memória para um array de 5 inteiros e inicializa com 0
    arr = (int *)ft_calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Erro ao alocar memória\n");
        return (1);
    }

    // Exibe o conteúdo do array (todos os elementos devem ser 0)
    for (size_t i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Saída: 0 0 0 0 0
    }

    // Libera a memória alocada
    free(arr);

    return (0);
}
*/