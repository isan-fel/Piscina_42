/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isan-fel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 19:08:57 by isan-fel          #+#    #+#             */
/*   Updated: 2021/03/11 14:29:34 by isan-fel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int unsigned n;
	int unsigned i;

	i = 0;
	while (src[i] != '\0')
	{
		++i;
	}
	n = 0;
	if (size != '\0')
	{
		while (src[n] != '\0' && n < (size - 1))
		{
			dest[n] = src[n];
			++n;
		}
		dest[n] = '\0';
	}
	return (i);
}
