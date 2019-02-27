/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biswbara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 13:36:29 by biswbara          #+#    #+#             */
/*   Updated: 2019/02/24 14:21:21 by biswbara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int print_bits(unsigned char octet)
{
	int oct;
	int div;

	div = 128;
	oct = octet;
	while(div != 0)
	{
		if(div <= oct)
		{
			write(1, "1", 1);
			oct = oct % div;
		}
		else 
			write(1, "0", 1);
		div = div / 2;
	}
	return (1);
}

int main()
{
	//int a;

	//a = print_bits(4);
	printf("%d", print_bits(4));
	return(0);
}
