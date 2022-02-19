/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etomiyos <etomiyos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:29:06 by etomiyos          #+#    #+#             */
/*   Updated: 2022/02/13 19:49:37 by etomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main()
{
	char	*string01;
	string01 = "def";

	char	string02[] = "bananinha";

	int resultado01 = ft_strlen(string01);
	int resultado02 = ft_strlen(string02);

	printf("%d\n", resultado01);
	printf("%d\n", resultado02);
}