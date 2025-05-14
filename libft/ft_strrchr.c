/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:23:05 by tidos-sa          #+#    #+#             */
/*   Updated: 2024/10/21 00:48:11 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*find;

	i = 0;
	find = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			find = ((char *)&s[i]);
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (find);
}
/*
int	main(void)
{
	const char	*str;
	char		c;
	char		*result;

	str = "Hello, world!";
	c = 'H';
	result = ft_strrchr(str, c);
	if (result)
	{
		printf("O último '%c' encontrado em \"%s\" está na posição: %ld\n", c,
				str, result - str);
	}
	else
	{
		printf("Caractere '%c' não encontrado em \"%s\"\n", c, str);
	}
	// Testando com um caractere que não está na string
	c = 'd';
	result = ft_strrchr(str, c);
	if (result)
	{
		printf("O último '%c' encontrado em \"%s\" está na posição: %ld\n", c,
				str, result - str);
	}
	else
	{
		printf("Caractere '%c' não encontrado em \"%s\"\n", c, str);
	}
	return (0);
}*/
