/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isan-fel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 10:59:26 by isan-fel          #+#    #+#             */
/*   Updated: 2021/03/11 11:44:55 by isan-fel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_aux_hex(unsigned char str2)
{
	char *hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[str2 / 16]);
	ft_putchar(hex[str2 % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] > 31 && str[n] < 127)
			ft_putchar(str[n]);
		else
		{
			ft_putchar('\\');
			ft_aux_hex(str[n]);
		}
		++n;
	}
}
