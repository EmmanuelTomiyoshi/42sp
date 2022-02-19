// Exercício ft_ft.c

// int	main()
// {
// 	int n;

// 	n = 26;
// 	printf("n: %d \n", n);
// 	printf("&n %p \n", &n);
// 	ft_ft(&n);
// 	printf("ft_ft n: %d \n", n);
// 	printf("ft_ft &n %p \n", &n);
// 	return 0;
// }

// Exercício ft_ultimate_ft.c

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int a = 50;

	int *ptr0 = &a;
	int	**ptr1 = &ptr0;
	int ***ptr2 = &ptr1;
	int	****ptr3 = &ptr2;
	int	*****ptr4 = &ptr3;
	int	******ptr5 = &ptr4;
	int	*******ptr6 = &ptr5;
	int	********ptr7 = &ptr6;
	int	*********ptr8 = &ptr7;
	
	printf("antes: %d\n", a);

	ft_ultimate_ft(ptr8);

	printf("depois: %d\n ", a);

	//Acessar o valor de ptr0 pelo ptr8
	//Mudo o valor de a por isso ^
}

//2a tentativa

void	ft_ultimate_ft(int ***nbr)
{
	***nbr = 42;
}

int main ()
{
	int z;

	z = 50;
	int *ponteiro1 = &z;
	int **ponteiro2 = &ponteiro1;
	int ***ponteiro3 = &ponteiro2;
	printf("Antes: %d ", ***ponteiro3);
	ft_ultimate_ft(ponteiro3);
	printf("Agora: %d ", ***ponteiro3);
		
}

//Exercício ft_swap

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c, d; 

	c = *a;
	d = *b;
	*a = d;
	*b = c;
	printf("Depois A: %d ", *a);
	printf("Depois B: %d", *b);

}

int main()
{
	int a, b;
	
	a = 42;
	b = 40;
	int *pa = &a;
	int *pb = &b;
	printf("Antes A: %d ", a);
	printf("Antes B: %d ", b);
	printf("\n");
	ft_swap(pa, pb);
	// printf("A: %d ", a);
	// printf("B: %d", b);
	printf("\n");
}

//Exercício ft_div_mod

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>

int main()
{
	int a, b, resultado, resto;

	a = 20;
	b = 11;

	ft_div_mod(a, b, &resultado, &resto);
	printf("O resultado é: %d \\ resto é = %d", resultado, resto);
	
}

//1A QUESTÃO DO TESTE

#include <unistd.h>

void funcao_p(char *str)
{
	int i;
	
	i = 0;
	
	while(str[i] != '\0')
	{
		if(str[i] == 'p')
		{
			write(1, "p", 1);
			write(1, "\n", 1);
			break;
		i++;
		}
	}
} 

int main()
{
	char str[] = "temppo";
	funcao_p(str);
	return 0;
}

// Exercício ft_ultimate_div_mod.c


int main()
{
	int a, b;

	a = 20;
	b = 10;

	ft_ultimate_div_mod(&a, &b);
	printf("O resultado é: %d \\ resto é = %d", a, b);
	
}

// & endereço 
// * valor 

//Exercício ft_putstr.c

#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int main()
{
	//1
	char a[7] = "3ji452";
	
	//2
	char b[7] = {'3', 'j', 'i', '4', '5', '2', '\0'};
	
	ft_putstr(a);
	
	// printf("O resultado é: %s", a);
	
}

//Exercício ft_strlen.c

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int	i; 

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

