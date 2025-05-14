/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:52:33 by tidos-sa          #+#    #+#             */
/*   Updated: 2024/10/22 20:23:59 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long int	nn;

	nn = (long int)n;
	if (nn < 0)
	{
		ft_putstr_fd("-", fd);
		nn = -nn;
	}
	if (nn >= 10)
	{
		ft_putnbr_fd(nn / 10, fd);
	}
	c = (nn % 10) + '0';
	write(fd, &c, 1);
}
/*
int	main(void) {
    ft_putnbr_fd(1234567890, 1);
    ft_putnbr_fd(-9, 1);
    return (0);
}
*/