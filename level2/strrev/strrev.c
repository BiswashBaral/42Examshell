/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 00:50:39 by biswbara          #+#    #+#             */
/*   Updated: 2019/02/24 00:56:10 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *strrev(char *str)
{
	int i;
	int j;
	char tem;

	j = 0;
	i = 0;
	while (str[i])
	{
		i++;
	}
	while (j < i)
	{
		tem = str[i - 1];
		str[i - 1] = str[j];
		str[j] = tem;
		i--;
		j++;
	}
	return(str);
}

int main()
{
	char a[] = "ABcdef";
	printf("%s",strrev(a));
	return (1);
}
