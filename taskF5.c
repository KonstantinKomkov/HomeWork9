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

int find_max_array (int size, int a[]) // Поиск максимального элемента массива
{
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}

int main (void)
{
	int array[100], n, *pa;
	pa = array;
	setlocale(LC_ALL, "ru_RU.UTF-8");
	puts("Введите целые числа через пробел, в конце символ Z и нажмите Enter");
	printf("Данные на входе: ");
	n = input_array (pa);
	printf("Данные на выходе: %d", find_max_array(n, pa));
	return 0;
}