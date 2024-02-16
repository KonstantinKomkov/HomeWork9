#include <stdio.h>
#include <locale.h>

void input_value (char array[]) // Считывание поля доски
{
	int i = 0;
	while ((scanf ("%c", &array[i]) == 1) && i < 2)
	{
		i++;
	}
}

int color_chess (char array[]) // Цвет шахматной клетки
{
	int n = array[0] - 'A' + 1;
	int m = array[1] - '0';
	int number = 0;
	for (int i = 1; i < 9; i++)
	{
		for (int j = 1; j < 9; j++)
		{
			number = !number;
			if (i == n && j == m && i%2 == 0)
			{
				return number ? printf("WHITE\n") : printf("BLACK\n");
			}
			if (i == n && j == m && i%2 != 0)
			{
				return number ? printf("BLACK\n") : printf("WHITE\n");
			}
		}
	}
	return 0;
}

int main (void)
{
	char array[2] = {0};
	setlocale(LC_ALL, "ru_RU.UTF-8");
	puts("Введите координату клетки на шахматной доске: всего два символа – буква и цифра (без пробелов).");
	printf("Данные на входе: ");
	input_value(array);
	printf("Данные на выходе: ");
	color_chess(array);
	return 0;
}