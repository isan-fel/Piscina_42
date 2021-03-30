/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isan-fel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:14:58 by isan-fel          #+#    #+#             */
/*   Updated: 2021/03/18 11:45:43 by isan-fel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		++n;
	}
	return (n);
}

void	ft_num(int nbr, char *base, int base_len)
{
	if (nbr >= base_len)
		ft_num(nbr / base_len, base, base_len);
	ft_putchar(base[nbr % base_len]);
}

int		ft_base_check(int base_len, char *base)
{
	int n;
	int i;

	n = 0;
	i = 0;
	if (base_len < 2)
		return (-1);
	while (base[n] != '\0')
	{
		if (base[n] == 45 || base[n] == 43)
			return (-1);
		while (base[i] != '\0')
		{
			if (base[i] == base[n])
				return (-1);
			++i;
		}
		++n;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_len;
	int n;
	int aux;

	n = 0;
	base_len = ft_strlen(base);
	aux = ft_base_check(base_len, base);
	if (aux > 0)
	{
		if (nbr < 0)
		{
			nbr = nbr * -1;
			ft_putchar(45);
		}
		if (nbr >= base_len)
			ft_num(nbr, base, base_len);
	}
}
