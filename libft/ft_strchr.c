/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:25:26 by tidos-sa          #+#    #+#             */
/*   Updated: 2024/10/21 00:37:31 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *c, int to_find)
{
	size_t	i;

	i = 0;
	to_find = (unsigned char)to_find;
	while (c[i])
	{
		if (c[i] == to_find)
		{
			return ((char *)&c[i]);
		}
		i++;
	}
	if (to_find == '\0')
	{
		return ((char *)&c[i]);
	}
	return (NULL);
}
// #include <string.h>
// int	main(void) {
//     const char *texto = "Hello, world!";
//     char *resultado = ft_strchr(texto, 'o' + 256);

//     if (resultado) {
//         printf("Encontrado: %c\n", *resultado);
//     }
// 	// else {
//     //     printf("Caractere não encontrado.\n");
//     // }

//     return (0);
// }
