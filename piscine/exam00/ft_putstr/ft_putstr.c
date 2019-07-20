/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 18:59:20 by exam              #+#    #+#             */
/*   Updated: 2019/07/20 06:49:59 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Notes from the future:
**
** This is bad, because calls to write are very slow.
**
** What I should have done:
** Counted the length of the string, and used one call to write to print that
** whole thing.
** len = ft_strlen(str);
** write(1, str, len);
**
** To be fair, at this time I still didn't know that you could write multiple
** characters at once, or how to write anything other than the address of a
** character.
*/

void	ft_putstr(char *str)
{
	int cursor;

	cursor = 0;
	while (str[cursor])
	{
		write(1,&str[cursor],1);
		++cursor;
	}
}	
