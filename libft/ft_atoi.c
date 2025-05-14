/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:43:58 by tidos-sa          #+#    #+#             */
/*   Updated: 2024/10/21 17:17:39 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;
	int	digit;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		digit = str[i] - '0';
		result = result * 10 + digit;
		i++;
	}
	return (result * sign);
}
/*
int	main(void) {
    printf("%d\n", ft_atoi("   -12345"));  // Saída: -12345
    printf("%d\n", ft_atoi("1234aasswsw5"));      // Saída: 12345
    printf("%d\n", ft_atoi("   +42abc")); 
	// Saída: 42 (para quando encontra 'a', para a conversão)

    return (0);
}
*/
