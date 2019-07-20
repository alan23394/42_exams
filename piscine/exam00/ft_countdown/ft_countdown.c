/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 18:11:13 by exam              #+#    #+#             */
/*   Updated: 2019/07/20 04:17:39 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Notes from the future:
** Just like with only_a, we don't actually need to programmatically write
** characters. You can just write a string.
** Remember that the third argument is the number of characters to write.
** write(1, "9876543210\n", 11);
**
** Also, always do a pre-increment if you don't actually need to use a
** post-increment. Pre-increments are faster by 1 small operation. They are
** different in that a pre-increment will return the result of the increment,
** and a post-increment will return the original number, and then change it. If
** you don't actually need that behavior, might as well just use a
** pre-increment.
**
** Also also, remember to return (0) from the main. It is an int function.
*/

int	main()
{
	char num;
	char newl;

	num = 57;
	newl = '\n';
	while (num >= 48)
	{
		write(1,&num,1);
		num--;
	}
	write(1,&newl,1);
}
