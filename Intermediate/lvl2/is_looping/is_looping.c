/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_looping.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 09:45:27 by exam              #+#    #+#             */
/*   Updated: 2019/01/22 09:55:43 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_node {
	int value;
	struct s_node *next;
};

int	is_looping(struct s_node *node)
{
	struct s_node *tmp1 = node;
	struct s_node *tmp2 = node;
	
	while (tmp1 && tmp2)
	{
		tmp1 = tmp1->next;
		if (!tmp1)
			return 0;
		tmp2 = tmp2->next;
		if (!tmp2)
			return 0;
		tmp2 = tmp2->next;
		if (!tmp2)
			return 0;
		if (tmp1 == tmp2)
			return 1;
	}
	return 0;
}
/*
#include <stdio.h>
int main(void)
{
	struct s_node a;
    struct s_node b;
    struct s_node c;
    struct s_node d;
    struct s_node e;
    struct s_node f;
	
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = &e;
	e.next = &f;
	f.next = &e;
	return (printf("|%i|\n", is_looping(&a)));
}
*/
