#include <stdio.h>
#include <locale.h>

void input_array (int n, int m, int array[n][m]) // Считывание матрицы
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
}

void matrix_print (int n, int m, int array[n][m]) // Печать матрицы
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (j == m - 1)
			{
				printf("%d \n", array[i][j]);
			}
			else
			{
				printf("%d ", array[i][j]);
			}
		}
	}
}

void max_count (int n, int m, int array[n][m]) // Количество положительных элементов больших среднего арифметичсекого главной диагонали
{
	int sum_diagonal = 0, counter = 0, j = 0;
	for (int i = 0; i < n; i++)
	{
		sum_diagonal += array[i][j];
		j++;
		if (i == n - 1)
		{
			sum_diagonal /= n;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (array[i][j] > sum_diagonal)
			{
				counter++;
			}
		}
	}
	printf("Среднее арифметическое диагонали - %d, количество элементов больше среднего - %d", sum_diagonal, counter);
}

int main (void)
{
	int array[5][5];
	setlocale(LC_ALL, "ru_RU.UTF-8");
	puts("Введите 5 строк по 5 целых чисел через пробел");
	printf("Данные на входе: ");
	input_array(5, 5, array);
	printf("Данные на выходе:\n");
	matrix_print(5, 5, array);
	max_count(5, 5, array);
	return 0;
}