/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 20:07:51 by biswbara          #+#    #+#             */
/*   Updated: 2019/02/14 20:27:37 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while(s2[i] != '\0' && s1[i] != '\0' && s2[i] == s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char *a = "adfa";
	char *b = "ad";

	printf("%d \n",ft_strcmp(a, b));
	printf("%d", strcmp(a, b));
	return (0);
}
