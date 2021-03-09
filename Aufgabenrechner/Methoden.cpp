//int dkinematik_zwei_steine = 0;
#include <stdio.h>
#include <math.h>



float Nummer_6()
{
	int exponent = 2;
	int endlos = 1;
	double tges = 0;
	double Schallgeschwindigkeit = 0;
	double t1 = 0;
	double t2 = 0;
	double basis = 0;
	double hoehe = 0;
	printf("Nach wie vielen SEKUNDEN HOERT man den Stein:  ");
	scanf_s("%lf", &tges);
	printf("Bitte geben Sie Ihre SCHALLGESCHWINDIGKEIT in m/s an: ");
	scanf_s("%lf", &Schallgeschwindigkeit);
	//printf("%lf \t %lf \t", tges, Schallgeschwindigkeit);
	basis = pow((2 * Schallgeschwindigkeit / 9.81), exponent) / 4;    //das ist die P/2² innerhalb der Wurzel
	t1 = ((-2 * Schallgeschwindigkeit / 9.81) / 2) + sqrt(basis + (2 * Schallgeschwindigkeit * tges / 9.81)); // +  (2 * Schallgeschwindigkeit * tges / 9.81);
	t2 = tges - t1;
	printf("\n%.6lf Zeit t1: \n", t1);
	printf("%.6lf Zeit t2: \n", t2);
	hoehe = 0.5 * 9.81 * pow((t1), exponent);
	printf("%.6lf Der Turm hat eine Hoehe (in Meter) von: \n ", hoehe);
	return 0;

}