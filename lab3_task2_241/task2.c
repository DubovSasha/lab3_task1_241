#include <locale.h>
#include <stdio.h>
#define D  2.54
#define Spanish 2.32166
#define Star_lit 2.7076
#define Mors_mil 1.852
#define SUx_mil 1.609
#define Rim_mil 1475
#define St_rus 7.468
#define Geo_mil 7412.6


int main()
{
	setlocale(LC_ALL, "RUS");
	int dym,mil;
	float r1, r2, r3,r4,r5,r6,r7,r8;
	puts("Введите сколько  дюймов надо перевести в сантиметры");
	scanf("%d", &dym);
	r1 = D * dym;
	printf("%d английских дюймов - это %.2f см\n", dym, r1);
	r2 = Spanish * dym;
	printf("%d испанских дюймов - это %.2f см\n", dym, r2);
	r3 = Star_lit * dym;
	printf("%d старолитовских дюймов - это %.2f см\n", dym, r3);

	printf("__________________________________________________\n");
	/* АЛЬТЕРНАТИВНОЕ ЗАДАНИЕ К ЗАДАНИЮ 2*/
	puts("Введите сколько миль надо перевести в километры");
	scanf("%d", &mil);
	r4 = (Mors_mil * mil)/1000;
	printf(" %d  морских миль - это %.2f километров\n", mil, r4);
	r5 = SUx_mil * mil;
	printf(" %d  сухопутных миль - это %.2f километров\n", mil, r5);
	r6 = (Rim_mil * mil)/1000;
	printf(" %d  римских миль - это %.2f километров\n", mil, r6);
	r7 = St_rus * mil;
	printf(" %d  старорусских миль - это %.2f километров\n", mil, r7);
	r8 = Geo_mil * mil;
	printf(" %d  географических миль - это %.2f километров\n", mil, r8);




}
