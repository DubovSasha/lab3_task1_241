#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*�������� � �������� ��������� ���������� ������ �� ������
(����: ����� ������ � ���������� ������);*/

int main()
{
	int sum, proc, result;
	setlocale(LC_ALL, "RUS");
	puts("������� ����� ������");
	scanf("%d", &sum);
	system("pause");
	puts("������� ���������� ������");
	scanf("%d", &proc);
	system("pause");
	result = (sum / 100) * proc;
	
	printf("��� ����� ��������  �� ������- %d ", result);


}