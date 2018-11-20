/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 09:56:04 by exam              #+#    #+#             */
/*   Updated: 2018/07/17 10:05:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char    *ft_strdup(char *src)
{
	char *out;
	int i = 0;

	while(src[i] != '\0')
	{
		i++;
	}
	out = (char*)malloc(sizeof(*out) * (i + 1));
	if (!out)
		return NULL;
	i = 0;
	while(src[i] != '\0')
	{
		out[i] = src[i];
		i++;
	}
	out[i] = '\0';
	return out;
}
