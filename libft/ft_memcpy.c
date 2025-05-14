/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:42:33 by tidos-sa          #+#    #+#             */
/*   Updated: 2024/10/26 19:41:06 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*ptr_str1;
	unsigned char			*ptr_str2;
	unsigned int			i;

	ptr_str1 = (unsigned char *)src;
	ptr_str2 = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		ptr_str2[i] = ptr_str1[i];
		i++;
	}
	return (dest);
}
/*int main(void)
{
	char dest[10];
	char *src = "hellomanos";

	ft_memcpy(dest,src,10);

	printf("%s",dest);

	return (0);
}*/
