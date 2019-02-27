/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 19:39:59 by biswbara          #+#    #+#             */
/*   Updated: 2019/02/14 20:03:43 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{

	int i;
	int nb;
	int neg;

	i = 0;
	neg = 0;
	nb = 0;

	while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = nb * 10;
		nb = nb + (int)str[i] - '0';
		i++;	
	}
	if (neg == 1)
		return (-nb);
	else
		return (nb);
}

int main()
{
	char *b = "  -43253";
		printf("%d", ft_atoi(b));
	return (1);
}
