#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	const float Doroga = 390;
	const float gallon_RR = 15;
	const float gallon_FE = 36;
	int gallon_cost = 5;

	float price_RR = Doroga / gallon_RR * gallon_cost;
	float price_FE = Doroga / gallon_FE * gallon_cost;
	float raznitsa = price_RR - price_FE;

	printf("РАСЧЕТ СТОИМОСТИ БЕНЗИНА\n");
	printf("================================\n\n");
	printf("УСЛОВИЯ:\n");
	printf("- Стоимость одного галлона %d фунтов.\n", gallon_cost);
	printf("- Расход 1 галлона на 'Роллс Ройс' - %2.0f миль.\n", gallon_RR);
	printf("- Расход 1 галлона на 'Форд Эскорт' - %2.0f миль.\n", gallon_FE);

	printf("РАСЧЕТ:\n");
	printf("- Стоимость поездки в Эдинбург на 'Роллс Ройс': %2.0f км / %2.0f миль на галлон * %d фунтов = %2.0f.\n", Doroga, gallon_RR, gallon_cost, price_RR);
	printf("- Стоимость поездки в Эдинбург на 'Форд Эскорт': %2.0f км / %2.0f миль на галлон * %d фунтов = %f.\n", Doroga, gallon_FE, gallon_cost, price_FE);
	printf("================================\n");
	printf("При поездке в Эдинбург на 'Форд Эскорт' человек сэкономит %2.0f - %f = %f фунтов.\n", price_RR, price_FE, raznitsa);
}