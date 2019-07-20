/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 18:15:20 by exam              #+#    #+#             */
/*   Updated: 2019/07/20 04:41:00 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Notes from the future:
** See maff_revalpha, it's basically the same problem. This one passed and that
** one failed because I remembered the newline for this one, and for that one I
** did not.
*/

int main()
{
	int lletter;
	int uletter;
	char newl;

	lletter = 97;
	uletter = 65;
	newl = '\n';
	while (lletter <= 122)
	{
		if (lletter % 2 == 0)
		{
			write(1,&uletter,1); 
		}
		else
		{
			write(1,&lletter,1);
		}
		lletter++;
		uletter++;
	}
	write(1,&newl,1);
	return 0;
}
