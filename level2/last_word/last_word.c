/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 12:50:58 by biswbara          #+#    #+#             */
/*   Updated: 2019/02/24 12:59:13 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_last_word(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if(str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 127)
			j = i + 1;
		i++;
	}
	while (str[j] >= 33 && str[j] <= 127)
	{
		write(1, &str[j], 1 );
		j++;
	}
	return (str);
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		ft_last_word(av[1]);
		write(1, "\n", 1);
	}
		else
		write(1, "\n", 1);
	return (0);
}
