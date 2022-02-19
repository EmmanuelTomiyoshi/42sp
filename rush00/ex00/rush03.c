/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etomiyos <etomiyos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:38:23 by etomiyos          #+#    #+#             */
/*   Updated: 2022/02/06 20:33:56 by etomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int x, char i, char m, char f);

void	rush(int x, int y)
{
	int	col;

	col = 0;
	if (y > 0)
		ft_putchar(x, 'A', 'B', 'C');
	if (y > 2)
	{
		while (col < (y -2))
		{
			ft_putchar(x, 'B', ' ', 'B');
			col++;
		}
	}
	if (y > 1)
		ft_putchar(x, 'A', 'B', 'C');
}
