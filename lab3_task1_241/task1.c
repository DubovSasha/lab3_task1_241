#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int num1, num2;
	puts("������� ������ �����");
	scanf("%d", &num1);
	printf("������� ����� %d\n", num1);
	puts("�������  ������ �����");
	scanf("%d", &num2);
	printf("������� ����� %d\n", num2);
	/*�������� �����, ��������, ������������, ������� � ������� �� ������� ������� ����� �� ������.*/
	printf("%d %d %d %d %d ", num1 + num2, num2 - num1, num1 * num2, num2 / num1, num2%num1);

}
