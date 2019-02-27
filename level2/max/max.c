/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 13:00:46 by biswbara          #+#    #+#             */
/*   Updated: 2019/02/24 13:21:00 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int max(int *tab, unsigned int len)
{
	int i;
	int max;

	i = 0;
	max = tab[i];
	while(i < len)
	{
		if(tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int main()
{
	int a[] = {1, 2, 45, 0, 2342, -324};
	int j = max(a, 6);
	printf("%d", j);
	return (0);
}
