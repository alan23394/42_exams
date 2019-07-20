/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 18:15:20 by exam              #+#    #+#             */
/*   Updated: 2019/07/20 04:33:29 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Notes from the future:
** This only failed because it doesn't have a newline at the end. It's also
** needlessly complex, because it's only asking me to print a string.
** How I'd do it now:
** write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
** How I'd do it without just writing a string:
** int	main()
** {
** 	int	alpha;
**
** 	alpha = 122;
** 	while (alpha >= 97)
** 	{
** 		if (alpha % 2 == 0)
** 		{
** 			write(1, &alpha, 1);
** 		}
** 		else
** 		{
** 			write(1, &(alpha - 32), 1);
** 		}
** 		--alpha;
** 	}
** 	write(1, "\n", 1);
** 	return (0);
** }
*/

int main()
{
	int lletter;
	int uletter;

	lletter = 122;
	uletter = 90;
	while (lletter >= 97)
	{
		if (lletter % 2 != 0)
		{
			write(1,&uletter,1); 
		}
		else
		{
			write(1,&lletter,1);
		}
		lletter--;
		uletter--;
	}
	return 0;
}
