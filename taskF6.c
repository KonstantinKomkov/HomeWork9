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

int is_two_same (int size, int a[]) // Поиск одинаковых элементов в массиве
{
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		counter = 0;
		for (int j = size - 1; j >= 0; j--)
		{
			if (a[i] == a[j])
			{
				counter++;
			}
			if (counter > 1) //Если встретили несколько раз число
			{
				return 1;
			}
		}
	}
	return 0;
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
	is_two_same(n, pa) ? printf("YES") : printf("NO");
	return 0;
}