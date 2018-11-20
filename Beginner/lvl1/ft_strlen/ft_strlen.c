/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 09:11:19 by exam              #+#    #+#             */
/*   Updated: 2018/08/07 09:16:03 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}


/*
#include <stdio.h>
int main(int argc, char** argv)
{
	(void) argc;
	printf("strlen = %i\n", ft_strlen(argv[1]));
	return 0;
}
*/
