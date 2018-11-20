/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 09:17:28 by exam              #+#    #+#             */
/*   Updated: 2018/09/04 09:24:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main (int c, char ** v)
{
	if (c != 4)
	{
		printf("\n");
		return -1;
	}
	int nb1 = atoi(v[1]);
	int nb2 = atoi(v[3]);
	int out = 0;
	if (v[2][0] == '+')
		out = nb1 + nb2;
	else if (v[2][0] == '-')
		out = nb1 - nb2;
    else if (v[2][0] == '*')
        out = nb1 * nb2;
    else if (v[2][0] == '/')
        out = nb1 / nb2;
    else if (v[2][0] == '%')
        out = nb1 % nb2;
	printf("%i\n", out);
	return 1;
}
