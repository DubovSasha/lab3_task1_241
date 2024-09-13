#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*Написать и отладить программу вычисления дохода по вкладу
(Дано: сумма вклада и процентная ставка);*/

int main()
{
	int sum, proc, result;
	setlocale(LC_ALL, "RUS");
	puts("Введите сумму вклада");
	scanf("%d", &sum);
	system("pause");
	puts("Введите процентную ставку");
	scanf("%d", &proc);
	system("pause");
	result = (sum / 100) * proc;
	
	printf("Ваш доход составил  по вкладу- %d ", result);


}