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

void min_sum (int size, int a[]) // Поиск минимальной суммы 2-ух элементов массива
{
	int sum = 0, a_min_sum[2] = {0};
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j >= 0; j--)
		{
			if(a[i] == a[j])
			{
				continue;
			}
			if ((a[i] + a[j] < sum) || (i == 0))
			{
				sum = a[i] + a[j];
				a_min_sum[0] = a[i];
				a_min_sum[1] = a[j];
			}
		}
	}
	printf("%d %d", a_min_sum[0], a_min_sum[1]);
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
	min_sum(n, pa);
	return 0;
}