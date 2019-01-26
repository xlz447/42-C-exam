/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   can_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 11:07:14 by exam              #+#    #+#             */
/*   Updated: 2018/12/04 11:36:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
struct s_node
{
	int value;
	struct s_node *left;
	struct s_node *right;
};

int cnt_node(struct s_node *n)
{
	if(!n)
		return 0;
	return (cnt_node(n->left) + cnt_node(n->right) + 1);
}

int check(struct s_node *n, int x)
{
	if(!n)
		return 0;
	int tmp = cnt_node(n);
	if (tmp == x - tmp)
		return 1;
	return (check(n->left, x) || check(n->right, x));
}

int	can_split(struct s_node *n)
{
	int x = cnt_node(n);
	if(x % 2 == 1)
		return 0;
	return check(n, x);
}

/*
#include <stdio.h>
int main()
{
	struct s_node a;
	a.value = 28;
    struct s_node b;
	b.value = 51;
    struct s_node c;
	c.value = 26;
    struct s_node d;
	d.value = 48;
    struct s_node e;
	e.value = 76;
    struct s_node f;
	f.value = 13;
    //struct s_node g;
    //struct s_node h;
	
	a.left = &b;
	a.right = 0;
	b.left = &c;
	b.right = &d;
	c.left = &e;
	c.right = 0;
	d.left = 0;
	d.right = 0;
	e.left = 0;
	e.right = 0;
	f.left = 0;
	f.right = 0;

	printf("%i\n", can_split(&a));
}
*/
