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

void sort_even_odd (int array[], int n) // Сортировка сначала четных потом нечетных элементов массива
{
	int even_array[n], odd_array[n];
	int even_count = 0, odd_count = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i]%2 == 0)
		{
			even_array[even_count] = array[i];
			even_count++;
		}
		else 
		{
			odd_array[odd_count] = array[i];
			odd_count++;
		}
	}
	for (int i = 0; i < even_count; i++) // Возваращаем в исходный массив четные числа
	{
		array[i] = even_array[i];
	}
	for (int i = 0; i < odd_count; i++) // Возваращаем в исходный массив нечетные числа
	{
		array[i + even_count] = odd_array[i];
	}
	for (int i = 0; i < n; i++) // Печатаем массив
	{
		printf("%d ", array[i]);
	}
}

int main (void)
{
	int array[100], n;
	setlocale(LC_ALL, "ru_RU.UTF-8");
	puts("Введите целые числа через пробел, в конце символ Z и нажмите Enter");
	printf("Данные на входе: ");
	n = input_array (array);
	printf("Данные на выходе: ");
	sort_even_odd(array, n);
	return 0;
}