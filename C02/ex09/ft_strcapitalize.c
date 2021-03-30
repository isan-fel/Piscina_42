/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isan-fel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 14:19:00 by isan-fel          #+#    #+#             */
/*   Updated: 2021/03/10 16:20:42 by isan-fel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 65 && str[n] <= 90)
			str[n] = str[n] + 32;
		++n;
	}
	n = 0;
	if (str[n] >= 97 && str[n] <= 122)
		str[n] = str[n] - 32;
	while (str[n] != '\0')
	{
		if (str[n - 1] < 48 || str[n - 1] > 57)
			if (str[n - 1] < 65 || str[n - 1] > 90)
				if (str[n - 1] < 97 || str[n - 1] > 122)
					if (str[n] >= 97 && str[n] <= 122)
						str[n] = str[n] - 32;
		++n;
	}
	return (str);
}
