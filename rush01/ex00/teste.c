/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etomiyos <etomiyos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 00:16:10 by etomiyos          #+#    #+#             */
/*   Updated: 2022/02/18 16:35:59 by etomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	pt_view(char *argv, char *argv2)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (argv[size] != '\0')
		size++;
	if (size != 31)
		return (0);
	while (argv[i] != '\0')
	{
		if (i % 2 == 1 && argv[i] != ' ')
			return (0);
		else if (i % 2 == 0)
		{
			if (argv[i] < 1 || argv[i] > 4)
				return (0);
			else
				argv2[i / 2] = argv[i];
		}
	i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int		cont;
	char	argv2[17];

	pt_view(argv[1], argv2);
	printf("%s", argv[1]);
	cont = 0;
	while (cont < argc)
	{
		cont ++;
	}
	return (cont);
}
