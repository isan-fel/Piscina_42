/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isan-fel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:09:36 by isan-fel          #+#    #+#             */
/*   Updated: 2021/03/17 13:06:21 by isan-fel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n < nb)
	{
		if (nb % n != 0)
			++n;
		else
			return (0);
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int n;

	n = 2;
	if (nb < 2)
		return (2);
	if (nb > 2147483647)
		return (0);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
