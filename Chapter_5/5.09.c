#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include <limits.h>
#include <time.h>

float ras4et (float);

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int i;
	float vremya, vod1, vod2, vod3;

	for (i = 1; i <= 3; i++) {
		printf ("Введите время парковки %d водителя: ", i);
		scanf ("%f", &vremya);

		switch (i) {
			case 1:
				vod1 = vremya;
				break;
			case 2:
				vod2 = vremya;
				break;
			case 3:
				vod3 = vremya;
				break;
			default:
				break;
		}
	}

	printf ("\nВодитель\tЧасы\tОплата\n");
	printf ("%-8d\t%.2f\t%.2f\n", 1, vod1, ras4et (vod1));
	printf ("%-8d\t%.2f\t%.2f\n", 2, vod2, ras4et (vod2));
	printf ("%-8d\t%.2f\t%.2f\n", 3, vod3, ras4et (vod3));
	printf ("%-8s\t%.2f\t%.2f", "Сумма", vod1 + vod2 + vod3, ras4et (vod1) + ras4et (vod2) + ras4et (vod3));

	_getch ();
	return 0;
}

float ras4et (float vod) { //Функция для расчёта стоимости парковки
	if (ceil (vod) <= 3)
		return 2.00;
	else
		if (ceil (vod) < 24)
			return 2.00 + (ceil (vod) - 3) * 0.5;
		else
			return 10.00;
}
