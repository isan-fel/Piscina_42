/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isan-fel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 14:12:03 by isan-fel          #+#    #+#             */
/*   Updated: 2021/03/18 11:30:04 by isan-fel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *result;
	int n;

	n = 0;
	/*if (min >= max)
	{
		result = 0;
		return (result);
	}*/
	result = (int *)malloc(sizeof(int) * ((min - max)*(-1)));
	while (min < max)
	{
		result[n] = min;
		++min;
		++n;
	}
	return (result);
}

int main ()
{
	int min;
	int max;
	int *result;
	int n;

	min = -2;
	max = 6;
	n = 0;
	result = ft_range(min, max);
	while (result[n] != '\0')
	{
		printf("%d", result[n]);
		++n;
	}
}
