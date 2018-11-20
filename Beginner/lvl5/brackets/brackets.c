/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 10:59:44 by exam              #+#    #+#             */
/*   Updated: 2018/07/31 11:14:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int lol(char *s)
{
	char stack[65536];
	int index = 0;
	int i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == '(' || s[i] == '[' || s[i] == '{')
		{
			stack[index] = s[i];
			index++;
		}
		if(s[i] == ')')
		{
			if(stack[index - 1] != '(')
			{
				return -1;
			}
			else
			{
				stack[index - 1] = ' ';
				index --;
			}
		}
		if(s[i] == ']')
		{
			if(stack[index - 1] != '[')
			{
				return -1;
			}
			else
			{
				stack[index - 1] = ' ';
				index --;
			}
		}
		if(s[i] == '}')
		{
			if(stack[index - 1] != '{')
			{
				return -1;
			}
			else
			{
				stack[index - 1] = ' ';
				index --;
			}
		}
		i++;
	}
	if (index != 0)
		return -1;
	else
		return 1;
}

int main (int argc, char ** argv)
{
	if (argc < 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	int i = 1;
	while (i < argc)
	{
		if((lol(argv[i]) == 1))
			write(1, "OK\n", 3);
		else
			write(1, "Error\n", 6);
		i++;
	}

}
