#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int num1, num2;
	puts("Введите первое число");
	scanf("%d", &num1);
	printf("Введено число %d\n", num1);
	puts("Введите  второе число");
	scanf("%d", &num2);
	printf("Введено число %d\n", num2);
	/*Выведите сумму, разность, произведение, частное и остаток от деления второго числа на первое.*/
	printf("%d %d %d %d %d ", num1 + num2, num2 - num1, num1 * num2, num2 / num1, num2%num1);

}
