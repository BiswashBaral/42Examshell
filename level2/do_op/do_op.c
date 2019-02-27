/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 19:21:44 by biswbara          #+#    #+#             */
/*   Updated: 2019/02/14 19:37:56 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_str(char *a, char b, char *c)
{
	int aa;
	int cc;
	int res;

	aa = atoi(a);
	cc = atoi(c);

	if (b == '+')
		res = aa + cc;

	if (b == '-')
 		res = aa - cc;

	if (b == '*')
       res = aa * cc;

	if (b == '/')
          res = aa / cc;

	if (b == '%')
        res = aa % cc;
	return (res);
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("%d", ft_str(av[1], av[2][0] , av[3]));
	}
	else
	{
		write(1, "\n", 1);
	}
	return (1);
}
