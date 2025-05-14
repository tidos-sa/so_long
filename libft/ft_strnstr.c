/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:42:24 by tidos-sa          #+#    #+#             */
/*   Updated: 2024/10/21 01:07:35 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] && (i + j) < len && big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
// int main(void)
// {
//     const char *big;
//     const char *little;
//     char *result;

//     big = "hello meus amigos";
//     little = "meus";
//     result = ft_strnstr(big, little, ft_strlen(big)); // Use strlen aqui
//     if (result)
//     {
//         printf("%s\n", result);
//     }
//     else
//     {
//         printf("Substring not found\n");
//     }
//     return (0);
// }
