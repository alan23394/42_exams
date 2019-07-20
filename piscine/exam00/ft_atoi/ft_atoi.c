/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 19:06:03 by exam              #+#    #+#             */
/*   Updated: 2019/07/20 07:02:46 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Notes from the future:
**
** This isn't a very good atoi, it doesn't consider a positive sign, or leading
** space, or stop at non-digits. That's why it fails; they tested it with a
** string somewhat like "12211abc", and mine calculated those characters like
** numbers, while system atoi stopped.
*/

int	ft_atoi(const char *str)
{
	int cursor;
	int value;
	int neg;

	cursor = 0;
	value = 0;
	neg = 1;

	if (str[0] == '-')
	{
		neg = -1;
		++cursor;
	}

	while (str[cursor])
	{
		value *= 10;
		value += (str[cursor] - '0');
		++cursor;
	}

	return value * neg;
}
