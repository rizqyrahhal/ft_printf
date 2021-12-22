#include "ft_printf.h"
#include <stdio.h>

// # define PRINT(format, args...) FUNC(format, ##args);
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
void check(int a, int b)
{
	a == b ? printf(GRN "OK.\e[0m (%d | Vrai: %d)\n\n", a, b) : printf(RED "KO.\e[0m(%d |Vrai: %d)\n\n", a, b);
}

int	main()
{
	// char *xx = "hakam";
	// PRINT("|%s|\n", "string")
	// PRINT("|%d|\n", 123)
	// PRINT("|%i|\n", 45)
	// PRINT("|%u|\n", -45)
	// PRINT("|%%|\n")
	// PRINT("|%c|\n", 'B')
	// PRINT("|%x|\n", 123354545)
	// PRINT("|%p|\n", xx)

	// return (0);
	
	char name = 'r';
	ft_printf("this is test :\n My name is %c\n", name);
	ft_printf("test 2 pour print str[] : \n My name is %s\n", "mohhammed");
	ft_printf("test 3 pour %% \n");
	ft_printf("TEST 4 pour number : %d\n", -88875);
	ft_printf("TEST 5 pour integer : %i\n", 579875);
	ft_printf("TEST 6 pour integer : %i\n", 0);
	ft_printf("TEST 7 pour unsigned : %u\n", -544521);
	printf("TEST 8 pour unsigned : %u\n", -544521);
	ft_printf("TEST 9 pour unsigned : %u\n", 0);


	// ft_printf("this test pour le reture de My ft_printf :\n%d\n", ft_printf("this is test :\n My name is %c\n", name));
	ft_printf("------------------------\n");
	// ft_printf("%X\n", 15);
	ft_printf("%x\n", 3125864);
	ft_printf(">>%x<<\n", 16);
	printf(">>%x<<\n", 16);
	ft_printf("-0-0-0-0-0-0-0-0-0-0-0-0-0-0-\n");
	ft_printf(">>%x<<\n", 0);
	printf(">>%x<<\n", 0);
	ft_printf("-0-0-0-0-0-0-0-0-0-0-0-0-0-0-\n");



	// ft_printf("%x\n", 4500488105);
	// printf("%x\n", 4500488105);

	// ft_printf("|%d|\n", ft_printf("%x\n", 3125864));
	// ft_printf("|%d|\n", ft_printf("%X\n", 30));
	// ft_printf("|%d|\n", ft_printf("%X\n", 0));

	printf("\n------PPP****PPPPP-----------------\n");

	ft_printf("\n%d\n", ft_printf("%X", 3125864));
	void	*value = "jksf";
	ft_printf("%p\n", &value);
	printf("%p\n", &value);
	ft_printf("%p\n", value);
	printf("%p\n", value);
	printf("\n-------PPP*****PPPP-----------------\n");

	printf("\n-------testr-----------------\n");
	// void	*testr = "-1";
	ft_printf("%p\n", "-1");
	printf("%p\n", "-1");

	printf("\n------------------------\n");

	printf("\n------------------------\n");
	printf("+%d+\n", ft_printf("%p\n", value));
	ft_printf("+%d+\n", ft_printf("%p\n", value));
	printf("\n------------------------\n");

	// printf("\n------TTTT------------------\n");
	// char *phrase;
	// phrase = "phrase";
	// int count_printf = printf("|%d|\n", ft_printf("Tests d'une longue %s (adresse : %p) de %c lignes pour \ntester les %d flags %% (ou est-ce %i?), sachant que 42 fait %x (%X)\n\n", phrase, &phrase, 'x', 9, 10, 42, 42));
	// printf("\n************************\n");
	// int vrai_printf = printf("|%d|\n", printf("Tests d'une longue %s (adresse : %p) de %c lignes pour \ntester les %d flags %% (ou est-ce %i?), sachant que 42 fait %x (%X)\n\n", phrase, &phrase, 'x', 9, 10, 42, 42));
	// printf("Compteur de la vraie : %d\n", vrai_printf);
	// printf("Compteur de la vraie : %d\n", count_printf);
	// printf("\n--------TTTT----------------\n");
	
	printf("\n-------pppppp-----------------\n");
	// char *ptr_test = NULL;
	// ft_printf("Test NULL address |%p|\n", ptr_test);
	// printf("Test NULL address |%p|\n", ptr_test);
	// printf("\n```````````````````````\n");
	// char *test2 = "Test123*";
	// char *ptr_test2 = test2;
	// int p2 = ft_printf("Test str address |%p|\n", ptr_test2);
	// int p2_true = printf("Test str address |%p|\n", ptr_test2);
	// check(p2, p2_true);
	printf("\n```````````````````````\n");
	printf("|%d|\n", ft_printf("This %p is even stranger\n\n", (void *)17));
	printf("|%d|\n", printf("This %p is even stranger\n\n", (void *)17));
	printf("\n-------pppppp-----------------\n");

	printf("\n-----------CHARCHARCHAR-------------\n");
	ft_printf("\n%c\n", '4');
	printf("\n%c\n", '4');
	printf("\n-----------CHARCHARCHAR-------------\n");
	return 0;
}
/*
*n = ['h','e','l']
*n -> h
*(n+1) -> e
...
**m = *n
n = 0x7ffed8df743f


*/

/*
// int	add(int n, ...)
// {
// 	va_list	list;
// 	int t;

// 	t = 0;
// 	va_start(list, n);
// 	for (int i=0; i < n; i++)
// 		t = t + va_arg(list, int);
// 	va_end(list);
// 	return t;
// }
// void print_ints(int num, ...)
// {
// 	va_list	list;

// 	va_start(list, num);

// 	for (int i=0; i < num; i++)
// 	{
// 		int value = va_arg(list, int);
// 		printf("%d: %d\n", i, value);
// 	}

// 	va_end(list);

// }

int	main()
{
	// printf("total = %d\n", add(4, 5, 9, 6, 3));
	// print_ints(4, 7, 8, -7, 9);
	// print_ints(8, 2, 5, 8, 9, 4, 1, 6, 3);
	
	return 0;
}*/