#include <stdio.h>

void incrementHEapVariable(void) 
{
	int *p = (int *)malloc(sizeof(int));
	printf("Введите число ");
	scanf_s("%d", p);
	printf("Адрес переменной: %p Значение: %d.\n", p, *p);
	++*p;
	printf("После увеличения на 1 - %d\n", *p);
	free(p);
}