/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 20:49:41 by biswbara          #+#    #+#             */
/*   Updated: 2019/02/24 01:05:31 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *src)
{
	int i;
	char *str;
	int j;

	j = 0;
	i = 0;
	while (src[i] != '\0')
		i++;
	str = (char*)malloc(sizeof(char) * i + 1);
	if(src == NULL)
		return (NULL);
	while(src[j] != '\0')
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	free(str);
}

int main()
{
	char *a = "asdfjlj";
	printf("%s\n", ft_strdup(a));
	printf("%s", strdup(a));

}
