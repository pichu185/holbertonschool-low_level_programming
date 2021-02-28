#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: abc
 * @argv: def
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	long int aux = 0, suma = 0, cantidad_monedas = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	aux = atoi(argv[1]);
	while (suma + 25 <= aux)
	{
		suma = suma + 25;
		cantidad_monedas = cantidad_monedas + 1;
	}
	while (suma + 10 <= aux)
	{
		suma = suma + 10;
		cantidad_monedas = cantidad_monedas + 1;
	}
	while (suma + 5 <= aux)
	{
		suma = suma + 5;
		cantidad_monedas = cantidad_monedas + 1;
	}
	while (suma + 2 <= aux)
	{
		suma = suma + 2;
		cantidad_monedas = cantidad_monedas + 1;
	}
	while (suma + 1 <= aux)
	{
		suma = suma + 1;
		cantidad_monedas = cantidad_monedas + 1;
	}
	printf("%ld\n", cantidad_monedas);
	return (0);
}
