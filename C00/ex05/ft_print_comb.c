/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isan-fel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 13:11:25 by isan-fel          #+#    #+#             */
/*   Updated: 2021/03/03 11:14:48 by isan-fel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char p)
{
	write(1, &p, 1);
}

void	ft_putchar(char a, char b, char c)
{
	if (a == '7' && b == '8' && c == '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		ft_putchar2(44);
		ft_putchar2(32);
	}
}

void	ft_print_comb(void)
{
	char v1;
	char v2;
	char v3;

	v1 = '0';
	while (v1 <= '9')
	{
		v2 = '1';
		while (v2 <= '9')
		{
			v3 = '1';
			while (v3 <= '9')
			{
				if ((v1 != v2 && v1 != v3 && v2 != v3) && (v1 < v2 && v2 < v3))
					ft_putchar(v1, v2, v3);
				++v3;
			}
			++v2;
		}
		++v1;
	}
}
