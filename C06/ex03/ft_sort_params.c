/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isan-fel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:15:15 by isan-fel          #+#    #+#             */
/*   Updated: 2021/03/18 17:04:45 by isan-fel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int n;

	n = 0;
	if (s1[n] == '\0' && s2[n] == '\0')
		return (0);
	while (s1[n] != '\0')
	{
		if (s1[n] < s2[n])
			return (s1[n] - s2[n]);
		if (s1[n] > s2[n])
			return (s1[n] - s2[n]);
		++n;
	}
	if (s2[n] != '\0')
		return (s1[n] - s2[n]);
	return (0);
}

void	ft_putargv(char *argv)
{
	int i;

	i = 0;
	while (argv[i] != '\0')
	{
		write(1, &argv[i], 1);
		++i;
	}
	write(1, "\n", 1);
}

int		main(int argc, char *argv[])
{
	int		n;
	char	*aux;
	int		diff;
	int		i;

	n = 1;
	i = 1;
	while (n < argc)
	{
		i = n + 1;
		while (i < argc)
		{
			diff = ft_strcmp(argv[n], argv[i]);
			if (diff > 0)
			{
				aux = argv[i];
				argv[i] = argv[n];
				argv[n] = aux;
			}
			++i;
		}
		ft_putargv(argv[n]);
		++n;
	}
}
