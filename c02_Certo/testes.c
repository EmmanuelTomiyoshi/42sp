/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etomiyos <etomiyos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:33:13 by etomiyos          #+#    #+#             */
/*   Updated: 2022/02/18 15:22:14 by etomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ex00
int main()
{
	char	a[] = "12345";
	char	b[] = "543213";

	printf("%s É:", ft_strcpy(b, a));
}

//ex01
int main()
{
	char	a[] = "123456";
	char	b[] = "455690";

	printf("É: %s", ft_strncpy(a, b, -1));
}
gcc -Wall -Werror -Wextra
#include <stdio.h>
//ex02
int main()
{
    char str[] = "ZAaztes*te";
    char str2[] = "ZAazteste";
    char str3[] = "";

    printf("Caracteres %d \n", ft_str_is_alpha(str));
    printf("Letras %d \n", ft_str_is_alpha(str2));
    printf("Vazio %d \n", ft_str_is_alpha(str3));
    return 0;
}

//ex03
int main ()
{
	char	a[] = "sasfsadf";

	printf("Resultado é: %d", ft_str_is_numeric(a));
}

//ex04
int main()
{
	char	a[] = "";

	printf("Resultado: %d", ft_str_is_lowercase(a));
}

#include<stdio.h>

//ex05

int main()
{
	char	banana[] = "";

	printf("Resultado: %d", ft_str_is_uppercase(banana));
}

//ex06

int main()
{
	char	c[] = "dfgse56tw4";

	printf("Resultado: %d", ft_str_is_printable(c));
}

//ex07

int main()
{
	char	a[] = "aBCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("Resultado: %s", ft_strupcase(a));
}

//ex08

int main ()
{
	char	t[] = "ASPARGOS";

	printf("Resultado: %s", ft_strlowcase(t));
}

//ex09

int main()
{
    char str[] = "Geladeira Codigo RECOMPENSA oi, tudo bEm? 42palavras quarenta-e-duas; cinquenta+e+um";
    printf("%s \n", ft_strcapitalize(str));
    return 0;
}