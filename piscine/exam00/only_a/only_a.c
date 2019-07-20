/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 18:07:12 by exam              #+#    #+#             */
/*   Updated: 2019/07/20 04:01:41 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Notes from the future:
** Instead of writing the address of a char, you can write strings directly.
** write(1, "a", 1);
*/

int	main()
{
	char a;
	a = 'a';
	write(1,&a,1);
	return 0;
}
