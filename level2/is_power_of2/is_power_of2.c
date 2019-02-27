/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 01:06:30 by biswbara          #+#    #+#             */
/*   Updated: 2019/02/24 01:27:18 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	while(n % 2 == 0)
		{
			n = n / 2;
			if (n == 1)
			return (1);
		}
		return(0);
}

int main()
{
	printf("%d",is_power_of_2(0));
	printf("%d",is_power_of_2(1));
	printf("%d",is_power_of_2(2));
	printf("%d",is_power_of_2(3));
	printf("%d",is_power_of_2(8));
}
