/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 21:01:15 by biswbara          #+#    #+#             */
/*   Updated: 2019/02/20 16:41:12 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strrev(char *str)
{
	int i;
	int l;
	char buff;

	i = 0;
	while (str[i] != '\0')
		i++;
	l = 0;
	while (l < i)
	{
		buff = str[i - 1];
		str[i - 1] = str[l];
		str[l] = buff;
		l++;
		i--;
	}
	return(str);
}
int main()
{
	char a[] = "AAFD";
	printf("%s", ft_strrev(a));
	return (0);
}
