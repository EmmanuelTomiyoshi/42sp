/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etomiyos <etomiyos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:38:34 by etomiyos          #+#    #+#             */
/*   Updated: 2022/02/06 15:43:35 by etomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, char i, char m, char f)
{
	int	lin;

	lin = 0;
	if (x > 0)
		write(1, &i, 1);
	if (x > 2)
	{
		while (lin < (x -2))
		{
			write(1, &m, 1);
			lin++;
		}
	}
	if (x > 1)
		write(1, &f, 1);
	if (x > 0)
		write(1, "\n", 1);
}
