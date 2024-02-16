#include <stdio.h>
#include <locale.h>

int input_array (int array[]) // Считывание массива
{
	int i = 0;
	while ((scanf ("%d", &array[i]) == 1) && i < 99)
	{
		i++;
	}
	return i;
}

void swap_negmax_last (int size, int a[]) // Меняем местами наибольший из отрицательных элементов с последним элементом массива
{
	int negmax = 0, number;
	for (int i = 0; i < size; i++)
	{
		if ((a[i] < 0 && (a[i] > negmax || negmax >= 0)))
		{
			negmax = a[i];
			number = i;
		}
	}
	a[number] = a[size-1];
	a[size-1] = negmax;
	for (int i = 0; i < size; i++) // Печатаем массив
	{
		printf("%d ", a[i]);
	}
}

int main (void)
{
	int array[100], n, *pa;
	pa = array;
	setlocale(LC_ALL, "ru_RU.UTF-8");
	puts("Введите целые числа через пробел, в конце символ Z и нажмите Enter");
	printf("Данные на входе: ");
	n = input_array (pa);
	printf("Данные на выходе: ");
	swap_negmax_last(n, pa);
	return 0;
}