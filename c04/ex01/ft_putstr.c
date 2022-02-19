/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etomiyos <etomiyos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 00:49:33 by etomiyos          #+#    #+#             */
/*   Updated: 2022/02/19 01:00:01 by etomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	char	y;
	int 	count;

	count = 0;
	while(str[count] != '\0')
	{
		y = str[count];
		write(1, &y, 1);
		count++;
	}
}

int main()
{
	char	a[] = "Abecedario";

	ft_putstr(a);
}
