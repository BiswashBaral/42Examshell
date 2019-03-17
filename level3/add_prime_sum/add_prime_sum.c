/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 22:18:53 by biswbara          #+#    #+#             */
/*   Updated: 2019/03/17 09:51:10 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

int ft_atoi(char *s)
{
	int i;
	int num;
	int neg;

	i = 0;
	num =0;
	neg = 0;
	while((s[i] >= 0 && s[i] <= 32) || s[i] == 127)
		i++;
	if(s[i] == '-')
		neg = 1;
	while(s[i] == '-' || s[i] == '+')
		i++;
	while(s[i] && s[i] <= '9' && s[i] >= '0')
	{
		num = num * 10;
		num = num + (int)s[i] - '0';
		i++;
	}
	if(neg == 1)
		return(-num);
	else
		return(num);
}

int ft_is_prime(int num)
{
	int i;

	i = 2;
	while(i < num)
	{
		if(num % i == 0)
			return (0);
		i++;
	}
	return(1);
}

int add_prime_sum(int nbr)
{
	int		tot;

	tot = 0;
	if(nbr < 2)
		return(0);
	if (nbr == 2)
		return (2);
	while (nbr > 1)
	{
		if (ft_is_prime(nbr) == 1)
			tot += nbr;
		nbr--;
	}
	return (tot);
}

void ft_putnbr(n)
{
	if(n < 0)
	{
		ft_putchar('-');
		n = -1 * n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int main(int ac, char **av)
{
	if(ac == 2)
	{ 
		ft_putnbr(add_prime_sum(ft_atoi(av[1])));
	}
	else
	{
		ft_putchar(0);
		ft_putchar('\n');
	}
	return(0);
}

