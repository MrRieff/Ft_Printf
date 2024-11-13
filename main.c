/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lualbuqu <lualbuqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:58:13 by lualbuqu          #+#    #+#             */
/*   Updated: 2024/06/01 00:13:58 by lualbuqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* int	main(void)
{
	char	*ptr;

	ptr = "THIS IS A PRINTF TEST!";
	int hexa_number = 255;     // 0xFF
	int hexa_number2 = 123456; // 0x1E240
	ft_printf("FT_PRINTF POINTER: %p\n", ptr);
	printf("PRINTF POINTER: %p\n", ptr);
	printf("\n");
	ft_printf("FT_PRINTF POINTER: %p\n", NULL);
	printf("PRINTF POINTER: %p\n", NULL);
	ft_printf("\n");
	ft_printf("FT_PRINTF INTERGER: %i\n", 10);
	printf("PRINTF INTERGER: %i\n", 10);
	printf("\n");
	ft_printf("FT_PRINTF DECIMAL: %d\n", 10);
	printf("PRINTF DECIMAL: %d\n", 10);
	ft_printf("\n");
	ft_printf("FT_PRINTF STRING: %s\n", ptr);
	printf("PRINTF STRING: %s\n", ptr);
	printf("\n");
	ft_printf("FT_PRINTF HEXADECIMAL 1:\nNumber: %i\nConversion: %X\n",
		hexa_number, hexa_number);
	printf("PRINTF HEXADECIMAL 1:\nNumber: %i\nConversion: %X\n", hexa_number,
		hexa_number);
	ft_printf("FT_PRINTF HEXADECIMAL 2:\nNumber: %i\nConversion: %x\n",
		hexa_number2, hexa_number2);
	printf("PRINTF HEXADECIMAL 1:\nNumber: %i\nConversion: %x\n", hexa_number2,
		hexa_number2);
	ft_printf("\n");
	ft_printf("FT_PRINTF CHARACTER: %c\n", 'c');
	printf("PRINTF CHARACTER: %c\n", 'c');
	printf("\n");
	// ft_printf("%%%\n");
	// printf("%%%\n");
	ft_printf("ALL TESTS FINISHED\n");
	return (0);
} */

/* int main()
{
  int *ptr = 42;

  ft_printf("FT_PRINTF: Lets test my printf function\n");
  printf("PRINTF: Lets test my printf function\n");

  ft_printf("FT_PRINTF: Let's test numbers: %i\n %d\n", 10, 12.5);
  printf("PRINTF: Let's test numbers: %i\n %d\n", 10, 12.5);

  ft_printf("FT_PRINTF: Let's test a string out: %s\n", "This is a string");
  printf("PRINTF: Let's test a string out: %s\n", "This is a string");

  ft_printf("FT_PRINTF: Unsigned number: %u\n", 10);
  printf("PRINTF: Unsigned number: %u\n", 10);

  ft_printf("FT_PRINTF: Let's test the pointer: %p\n", ptr);
  printf("PRINTF: Let's test the pointer: %p\n", ptr);
  return (0);
} */
int	main(void)
{
	ft_printf("%d \n", ft_printf("ola%%%"));
	//printf("%d \n", printf("ola%%%"));

	int teste = printf("hello world\n");
	printf("imprimiu: %d\n", teste);
	int teste2 = ft_printf("hello world\n");
	ft_printf("imprimiu: %d\n", teste2);
	printf("\n");
	int x = 42;
	int x2 = 34;
	void *ptrx2 = &x2;
	void *ptr = &x;

	int len;
	len = ft_printf("HELLO\n");
	printf("LEN: %i\n", len);
	ft_printf("%d \n", ft_printf(""));
	len = ft_printf("%d \n", ft_printf(NULL));
	printf("LEN: %i\n", len);
	len = ft_printf("CHARACTERS: %c %c\n", 'a', 'b');
		printf("LEN: %i\n", len);
	ft_printf("STRINGS: %s %s\n", "Good", "bye");
	ft_printf("DECIMAL: %i %d\n", 42, 123);
	len = ft_printf ("DECIMALS: %d %d\n", 1977, 650000L);
	printf("LEN: %i\n", len);
	len = ft_printf("POINTER NULO: %p \n", NULL );
		printf("LEN: %i\n", len);
	ft_printf("POINTER DE x é: %p\n", ptr);
	ft_printf("POINTER 0: %p %p \n", (void *)0, (void *)0);
	len = ft_printf ("DECIMAL e HEXADECIMAL: %d %x %X \n", 255, 255, 255);
	printf("LEN: %i\n", len);
	ft_printf ("HEXADECIMAL 0: %x %X\n", 0, 0);
	len = ft_printf ("Unsigned int: %u %u\n",  2147483647, UINT_MAX);
		printf("LEN: %i\n", len);
	ft_printf ("Unsigned int: %u \n", UINT_MAX);
	//len = ft_printf ("Mix: %c, %s, %p, %d, %i, %x, %X, %u, %%, all mixed\n", 'A',
		//"Mix", ptrx2, 34, 34, 255, 255, UINT_MAX);
	//printf("LEN: %i\n", len);


	ft_printf("\n");

	len = printf("Hello\n");
	printf("LEN: %i\n", len);
	printf("%d \n", printf(""));
	len = printf("%d \n", printf(NULL));
	printf("LEN: %i\n", len);
	len = printf("Characters: %c %c\n", 'a', 'b');
		printf("LEN: %i\n", len);
	printf("Strings: %s %s\n", "Good", "bye");
	printf("Decimal: %d %d\n", 42, 123);
	len = printf ("Decimals: %d %ld\n", 1977, 650000L);
	printf("LEN: %i\n", len);
	len = printf("Pointer nulo: %p \n", NULL );
		printf("LEN: %i\n", len);
	printf("Pointer de x é: %p\n", ptr);
	printf("Pointer 0: %p %p \n", (void *)0, (void *)0);
	len = printf ("Decimal e hexadecimal: %d %x %X \n", 255, 255, 255);
	printf("LEN: %i\n", len);
	printf (" Hexadecimal 0: %x %X\n", 0, 0);
	len = printf ("Unsigned int: %u %u\n", 2147483647, UINT_MAX);
		printf("LEN: %i\n", len);
	printf ("Unsigned int: %u \n", UINT_MAX);
	len = printf ("Mix: %c, %s, %p, %d, %i, %x, %X, %u, %%, all mixed\n", 'A',
		"Mix", ptrx2, 34, 34, 255, 255, UINT_MAX);
	printf("LEN: %i\n", len);
	return (0);
}
