/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isan-fel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 16:26:11 by isan-fel          #+#    #+#             */
/*   Updated: 2021/03/16 11:11:27 by isan-fel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;
	int i;

	fact = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 && nb == 1)
		return (fact);
	while (i <= nb)
	{
		fact = fact * i;
		++i;
	}
	return (fact);
}
