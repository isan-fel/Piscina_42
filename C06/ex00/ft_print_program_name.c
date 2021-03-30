/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isan-fel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:42:25 by isan-fel          #+#    #+#             */
/*   Updated: 2021/03/18 13:03:25 by isan-fel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		main(int argc, char *argv[])
{
	int n;

	n = 0;
	while (argv[0][n] != '\0')
	{
		write(1, &argv[0][n], 1);
		++n;
	}
	write(1, "\n", 1);
	n = argc;
}
