#include <stdio.h>
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE 
void task();
int main()
{
	setlocale(LC_CTYPE, "RUS");
	task();
}
void task()
{
	int k, jan1, day_year;
	char* day="";
	printf("Введите номер дня k\n");
	scanf("%d", &k);
	printf("Введите день недели 1 января\n");
	scanf("%d", &jan1);
	day_year = (jan1 + k - 1) % 7;
	switch (day_year)
	{
	case 0:
		day = "Воскресенье";
		break;
	case 1:
		day = "Понедельник";
		break;
	case 2:
		day = "Вторник";
		break;
	case 3:
		day = "Среда";
		break;
	case 4:
		day = "Четверг";
		break;
	case 5:
		day = "Пятница";
		break;
	case 6:
		day = "Суббота";
		break;

	}
	printf("%d день в году - %s\n", k, day);

}