/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:17:54 by tidos-sa          #+#    #+#             */
/*   Updated: 2024/10/21 18:28:04 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ttoupper(unsigned int c, char *str)
{
	size_t	i;

	if (str[c] >= 'a' && str[c] <= 'z')
	{
		str[c] -= 32;
		write(1, &str[c], 1);
	}
	else
	{
		write(1, &str[c], 1);
	}
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s || !f)
	{
		return ;
	}
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	s[];

	s[] = "opaaa bb";
	ft_striteri(s, ttoupper);
}*/
