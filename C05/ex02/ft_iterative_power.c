/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isan-fel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:03:21 by isan-fel          #+#    #+#             */
/*   Updated: 2021/03/16 19:04:16 by isan-fel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int pot;

	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	pot = nb;
	while (i < power)
	{
		pot = pot * nb;
		++i;
	}
	return (pot);
}
