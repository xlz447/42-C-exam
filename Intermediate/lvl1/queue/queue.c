/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 09:12:18 by exam              #+#    #+#             */
/*   Updated: 2018/11/27 10:00:36 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

struct s_node {
	void *content;
	struct s_node *next;
};

struct s_queue {
	struct s_node *first;
	struct s_node *last;
};

struct s_queue *init(void)
{
	struct s_queue * out = (struct s_queue *) malloc(sizeof(struct s_queue));
	if (out == NULL)
		return NULL;
	out->first = NULL;
	out->last = NULL;
	return out;
}

void enqueue(struct s_queue *queue, void *content)
{
	struct s_node * tmp = (struct s_node*) malloc(sizeof(struct s_node));
	if (tmp == NULL)
		return ;
	tmp->content = content;
	tmp->next = NULL;

	if (queue == NULL)
		queue = init();
	if (queue == NULL)
		return ;
	if (queue->last == NULL)
	{
		queue->first = tmp;
		queue->last = tmp;
	}
	else
	{
		queue->last->next = tmp;
		queue->last = tmp;
	}
}

void *dequeue(struct s_queue *queue)
{
	if (queue == NULL || queue->first == NULL || queue->last == NULL)
		return NULL;
	void * out = queue->first->content;
	struct s_node * tmp = queue->first;
	queue->first = queue->first->next;
	if (queue->first == NULL)
		queue->last = NULL;
	free(tmp);
	return out;
}

void *peek(struct s_queue *queue)
{
	if (queue == NULL || queue->first == NULL || queue->last == NULL)
		return NULL;
	return queue->first->content;
}

int isEmpty(struct s_queue *queue)
{
	if (queue == NULL || queue->first == NULL || queue->last == NULL)
		return 1;
	return 0;
}
/*
#include <stdio.h>
int main(void)
{
	struct s_queue queue;
	queue.first = NULL;
	queue.last = NULL;
	enqueue(&queue, (void*)"a");
	enqueue(&queue, (void*)"b");
	printf("|%s|%s|\n", (char*)dequeue(&queue), (char*)dequeue(&queue));
	return 0;
}
*/
