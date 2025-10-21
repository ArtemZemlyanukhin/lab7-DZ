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
		printf("Введите номер дня k\n");
		scanf("%d", &k);
		printf("Введите день недели 1 января\n");
		scanf("%d", &jan1);
		day_year = (jan1 + k - 1) % 7;
		switch (day_year)
		{
		case 0:
			printf("%d день в году-воскресенье\n", k);
			break;
		case 1:
			printf("%d день в году-понедельник\n", k);
			break;
		case 2:
			printf("%d день в году-вторник\n", k);
			break;
		case 3:
			printf("%d день в году-среда\n", k);
			break;
		case 4:
			printf("%d день в году-четверг\n", k);
			break;
		case 5:
			printf("%d день в году-пятница\n", k);
			break;
		case 6:
			printf("%d день в году-суббота\n", k);
			break;

		}
	
}

