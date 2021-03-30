/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isan-fel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 17:45:33 by isan-fel          #+#    #+#             */
/*   Updated: 2021/03/03 11:48:57 by isan-fel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char c)
{
	write(1, &c, 1);
}

void	ft_putchar(char n1, char n2, char n3, char n4)
{
	if (n1 == '9' && n2 == '8' && n3 == '9' && n4 == '9')
	{
		write(1, &n1, 1);
		write(1, &n2, 1);
		ft_putchar2(32);
		write(1, &n3, 1);
		write(1, &n4, 1);
	}
	else
	{
		write(1, &n1, 1);
		write(1, &n2, 1);
		ft_putchar2(32);
		write(1, &n3, 1);
		write(1, &n4, 1);
		ft_putchar2(44);
		ft_putchar2(32);
	}
}

void	ft_last_while(char n1, char n2, char n3, char n4)
{
	while (n4 <= '9')
	{
		if (n1 < n3 || (n1 == n3 && n2 < n4))
		{
			ft_putchar(n1, n2, n3, n4);
			++n4;
		}
		else
			++n4;
	}
}

void	ft_print_comb2(void)
{
	char num[4];

	num[0] = '0';
	num[1] = '0';
	num[2] = '0';
	num[3] = '1';
	while (num[0] <= '9')
	{
		while (num[1] <= '9')
		{
			while (num[2] <= '9')
			{
				ft_last_while(num[0], num[1], num[2], num[3]);
				++num[2];
				num[3] = '0';
			}
			++num[1];
			num[2] = '0';
			num[3] = num[1] + 1;
		}
		++num[0];
		num[1] = '0';
	}
}
