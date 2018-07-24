/**Перевод температуры из градусов по Фаренгейту в градусы по Цельсию*/
#include <stdio.h>

#define LOWER 0 // нижний предел температуры
#define UPPER 300 // верхний предел температуры
#define STEP 20 // шаг изменения температуры

void convert();

int main()
{
	printf("Temperature convert\n");
	printf("-------------------\n");
	printf("%2c %5c\n", 'F', 'C');
	printf("-------------------\n");
	convert();
}

void convert() { // расчет температуры и вывод на экран
	for(int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
		printf("%3d %6.2f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
	}
}
