/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 18:26:07 by exam              #+#    #+#             */
/*   Updated: 2019/07/20 06:32:51 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Notes from the future:
**
** Why bother prototyping? Just define the ft_strlen above ft_strrev.
**
** This fails for a couple reasons. I didn't know how to malloc strings at the
** time of this exam, so I wasn't sure how to test this with a string that
** could be changed. It has a timeout because the strlen
** doesn't check the characters properly, I should have checked if str existed,
** and then indexed it with len to check for the null terminator. This strlen
** doesn't really do anything, all it does is increase len for as long as the
** string passed exists (so, forever). Even if strlen worked, I don't move the
** cursor in the strrev while loop, so it
** would get stuck in there anyway.
**
** If I fixed those problems, it still wouldn't work. Imagine sending a
** two-character string into this function. The strlen would return 2, and then
** I'd subtract 1 and set length to 1. Why? Because I was silly, and wanted to
** ignore single character strings. Then when comparing cursor to (len / 2),
** it would check if 0 is less than (1 / 2), which turns into 0. That would
** fail, and it wouldn't swap the two characters.
**
** What I could have done:
** Set len to the regular strlen, and returned the str if it was equal to 0.
** This would have ignored empty strings.
** Then, in the while condition, when cursor has to be less than (len / 2), we
** would have this (with a single character string):
** 0 < (1 / 2)
** 0 < 0 (because int math rounds 0.5 down to 0)
** The check would have failed, and it wouldn't have done anything with a
** single character string (what we want to happen).
** If it was a two character string, we would have this:
** 0 < (2 / 2)
** 0 < 1
** It would have worked for the first character, but not the second. This is
** what we want, because the first iteration would swap both characters. This
** also means it will skip the middle character, if it existed. Excellent!
** Then, in the while loop, the indexes would have to change slightly.
** We can no longer get the swap character with str[len - cursor], because len
** isn't a valid index anymore (we have to consider that, because if cursor is
** 0, len has to be addressable). It would change to str[(len - 1) - cursor],
** or str[len - cursor - 1].
**
** Also, don't use a post-increment if you can use a pre-increment instead,
** since pre-increments are less operations.
*/

int		ft_strlen(char *str);

char	*ft_strrev(char *str)
{
	int len;
	int cursor;
	char tmp;

	len = ft_strlen(str) - 1;
	if (len == 0)
		return str;

	cursor = 0;
	while (cursor < len / 2)
	{
		tmp = str[cursor];
		str[cursor] = str[len - cursor];
		str[len - cursor] = tmp;
	}
	return str;
}

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str)
		len++;

	return len;
}
