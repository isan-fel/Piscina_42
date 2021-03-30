/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isan-fel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:50:40 by isan-fel          #+#    #+#             */
/*   Updated: 2021/03/09 14:03:35 by isan-fel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 97 && str[n] <= 122)
		{
			str[n] = str[n] - 32;
		}
		++n;
	}
	return (str);
}