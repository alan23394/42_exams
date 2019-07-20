/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 18:37:30 by exam              #+#    #+#             */
/*   Updated: 2019/07/20 06:42:43 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Notes from the future:
**
** I totally misunderstood this question. Instead of totalling up the ascii
** values of the strings and returning the difference, I need to iterate
** through both strings at the same time, comparing their characters against
** eachother. As soon as the character in one string isn't the same as the
** other string, return the difference in their ascii values (or 0 if the
** strings are the same).
*/

int		ft_strcmp(char *s1, char *s2)
{
	int cursor;
	int value1;
	int value2;

	cursor = 0;
	value1 = 0;
	value2 = 0;
	while (s1[cursor])
	{
		value1 += s1[cursor];
		cursor++;
	}
	cursor = 0;
	while (s2[cursor])
	{
		value2 += s2[cursor];
		cursor++;
	}

	return (value1 - value2);
}
