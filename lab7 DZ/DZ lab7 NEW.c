#include <stdio.h>
#include <locale.h>
task();
main()
{
	setlocale(LC_CTYPE, "RUS");
	task();
}
 task()
{
		int k, jan1, day_year;
		char* name_of_day="";
		printf("Введите номер дня k\n");
		scanf("%d", &k);
		printf("Введите день недели 1 января\n");
		scanf("%d", &jan1);
		day_year = (jan1 + k - 1) % 7;
		switch (day_year)
		{
		case 0:
			name_of_day = "воскресенье";
			break;
		case 1:
			name_of_day="понедельник";
			break;
		case 2:
			name_of_day = "вторник";
			break;
		case 3:
			name_of_day = "среда";
			break;
		case 4:
			name_of_day = "четверг";
			break;
		case 5:
			name_of_day = "пятница";
			break;
		case 6:
			name_of_day = "суббота";
			break;

		}
		printf("%d день в году - %s", k, name_of_day);
}
