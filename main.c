#include "includes/ft_printf.h"

int	main()
{
	char name = 'r';
	ft_printf("this is test :\n My name is %c\n", name);
	ft_printf("test 2 pour print str[] : \n My name is %s\n", "mohhammed");
	ft_printf("test 3 pour %% \n");
	ft_printf("TEST 4 pour number : %d\n", -88875);
	ft_printf("TEST 5 pour integer : %i\n", 579875);
	ft_printf("TEST 6 pour unsigned : %u\n", -544521);
	// ft_printf("this test pour le reture de My ft_printf :\n%d\n", ft_printf("this is test :\n My name is %c\n", name));
	ft_printf("------------------------\n");
	// ft_printf("%X\n", 15);
	ft_printf("%x\n", 3125864);
	ft_printf("%X\n", 30);

	// ft_printf("\n%d\n", ft_printf("%x", 3125864));

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