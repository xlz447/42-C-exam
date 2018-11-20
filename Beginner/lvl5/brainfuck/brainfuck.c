/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:37:22 by exam              #+#    #+#             */
/*   Updated: 2018/06/08 14:57:41 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void mypc(char c)
{
	write(1, &c, 1);
}

typedef struct	s_stack
{
	struct s_stack* next;
	int data;
}				t_stack;

t_stack *newnode (int data)
{
	t_stack *out = (t_stack*)malloc(sizeof(t_stack));
	out->next = NULL;
	out->data = data;
	return (out);
}

void pushnode (t_stack **head, int data)
{
	t_stack * temp;

	if (head == NULL)
	{
		*head = newnode(data);
	}
	else
	{
		temp = newnode(data);
		temp->next = *head;
		*head = temp;
	}
}

int peeknode (t_stack *head)
{
	return (head->data);
}

int popnode(t_stack **head)
{
	int out = (*head)->data;
	*head = (*head)->next;
	return (out);
}



int main(int argc, char ** argv)
{
	if (argc < 2)
	{
		mypc('\n');
		return (0);
	}

	t_stack *head;
	char *bf = (char*)malloc(sizeof(char) * 4096);
	int i = 0;
	int j = 0;

	while (i < 4096)
		{
			bf[i] = 0;
		i++;
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == '>')
			j++;
		if (argv[1][i] == '<')
            j--;
		if (argv[1][i] == '+')
            (bf[j])++;
		if (argv[1][i] == '-')
            (bf[j])--;
		if (argv[1][i] == '.')
            mypc(bf[j]);
		if (argv[1][i] == '[')
		{
			if (bf[j] == 0)
			{
				int flag = 1;
				while (flag > 0)
				{
					i++;
					if(argv[1][i] == '[')
						flag++;
					if(argv[1][i] == ']')
						flag--;
				}
			}
			else
			{
				pushnode(&head, i);
			}
		}
		else if (argv[1][i] == ']')
		{
			if (bf[j] != 0)
			{
				i = peeknode(head);
			}
			else
			{
				popnode(&head);
			}
		}
		i++;
	}
	return (0);


























}
