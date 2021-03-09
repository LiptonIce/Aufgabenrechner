#include <stdio.h>
#include <math.h>
#define PI 3.141592654

int exponent = 2;
int endlos = 1;

float Nummer_6()
{
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
	basis = pow((2 * Schallgeschwindigkeit / 9.81), exponent) /4;    //das ist die P/2² innerhalb der Wurzel
	t1 = ((-2 * Schallgeschwindigkeit / 9.81) / 2) + sqrt(basis + (2 * Schallgeschwindigkeit * tges / 9.81)); // +  (2 * Schallgeschwindigkeit * tges / 9.81);
	t2 = tges - t1;
	printf("\n%.6lf Zeit t1: \n", t1);
	printf("%.6lf Zeit t2: \n", t2);
	hoehe = 0.5 * 9.81 * pow((t1), exponent);
	printf("%.6lf Der Turm hat eine Hoehe (in Meter) von: \n ", hoehe);
	return 0;

}

float Nummer_7()
{
	double zeitLater = 0;
	double anfangsV0 = 0;
	double basis = 0;
	double tges = 0;
	double hoehe = 0;
	double t1 = 0;
	double V1 = 0;
	double V2 = 0;
	printf("Wie viele SEKUNDEN SPAETER wird der zweite Stein geworfen: ");
	scanf_s("%lf", &zeitLater);
	printf("Welche ANFANGSGESCHWINDIGKEIT hat der zweite Stein:  ");
	scanf_s("%lf", &anfangsV0);
	t1 = (-anfangsV0 * zeitLater + 0.5 * 9.81 * pow((zeitLater), exponent)) / (-anfangsV0 + 9.81 * zeitLater);
	printf("\nZeit aehh %.6lf\n", t1);
	hoehe = 0.5 * 9.81 * pow((t1), exponent);
	printf("Höhe des Turms %.6lf\n\n", hoehe);
	printf("Geschwindigkeiten\n");
	V1 = -9.81 * t1;
	V2 = -anfangsV0 - 9.81 * (t1-zeitLater);
	printf("Geschwindigkeit erster Stein OHNE V0 = -g*t = %.6lf m/s\n", V1);
	printf("Geschwindigkeit zweiter Stein MIT V0 = -V0-g*t = %.6lf m/s\n", V2);

	return 0;
}

float weitwurf()
{
	double winkel = 0;
	double V0 = 0;
	double h1 = 0;
	double vx = 0;
	double vy = 0;
	double thoch = 0;
	double maxflughoehe = 0;
	double flughoeheball = 0;
	double trunter = 0;
	double tges = 0;
	double flugWeite = 0;
	printf("Welche HOEHE h=... wird abgeworfen (in meter):   ");
	scanf_s("%lf", &h1);
	printf("Welche ANFANGSGESCHWINDIGKEIT hat das Objekt (in m/s):   ");
	scanf_s("%lf", &V0);
	printf("Wie gross ist der WINKEL (in Grad):    ");
	scanf_s("%lf", &winkel);
	vx = cos(winkel * PI /180) * V0;
	vy = sin(winkel * PI / 180) * V0;
	printf("\nGeschwindigkeit in X-Richtung:  %.6lf m/s\nin Y-Richtung %.3lf m/s\n", vx, vy);
	thoch = vy / 9.81;
	maxflughoehe = (0.5 * 9.81 * pow((thoch), exponent)) + h1;
	flughoeheball = maxflughoehe - h1;
	printf("Zeit bis zum HOCHPUNKT:  %.3lf sekunden\n", thoch);
	printf("Maximale FLUGHOEHE ueber Grund:  %.6lf m\n", maxflughoehe);
	printf("Maximale FLUGHOEHE vom STARTPUNKT:  %.6lf m\n", flughoeheball);
	trunter = sqrt((maxflughoehe) / (0.5 * 9.81));
	tges = thoch + trunter;
	printf("Zeit von Hochpunkt bis Grund  %.6lf sekunden\n", trunter);
	printf("GESAMTZEIT in LUFT  %.6lf sekunden\n", tges);
	flugWeite = vx * tges;
	printf("FLUGWEITE:  %.6lf m\n", flugWeite);

	return 0;
}

float Winkelbeschleunigung_Plattenspieler()
{
	double drehzahl = 0;
	double tges = 0;
	double omega = 0;
	double beschleunigung = 0;
	double Umdrehungen = 0;
	printf("Konstante Winkelbeschleunigung\n");
	printf("Bitte DREHZAHL in Umdrehung PRO SEC. eigeben:   ");
	scanf_s("%lf", &drehzahl);
	printf("\nBitte ZEIT in SEC. eigeben:   ");
	scanf_s("%lf", &tges);
	omega = 2 * PI * drehzahl;
	beschleunigung = omega / tges;
	Umdrehungen =  0.5 * beschleunigung * (pow((tges), exponent)); 
	Umdrehungen = (Umdrehungen / (2 * PI));
	printf("\nWinkelgeschwindigkeit Omega = %.6lf\n", omega); 
	printf("\nBeschleunigung a = %.6lf  achten ob diese negativ oder positiv sein soll, weil Bremsen\n", beschleunigung); 
	printf("\nUmdrehungen  %.6lf\n", Umdrehungen);
	
	/*
	// 0.5 * beschleunigung *
	//Umdrehungen = (Umdrehungen / (2 * PI));
	printf("\nWinkelgeschwindigkeit Omega = \n", omega); //2*Pie*f  = %.6lf  rad/sec
	printf("\nBeschleunigung a = \n", beschleunigung); // Omega:tges  = %.6lf m/s^2
	printf("\nUmdrehungen  \n", Umdrehungen); // s = 0,5 * a * t^2 = %.6lf  Umdrehungen
	*/

	return 0;
}


int main()
{
	do
	{
		int wiederholen = 0;
		int aufgabe = 0;
		printf("\n\n------------------------------------------------------");
		printf("\nWillkommen\n\n");
		printf("Stein faellt mit SCHALLGESCHWINDIGKEIT '1':   \nZWEI OBJEKTE - EIN Stein mit V0 - '2':   \n");
		printf("Schraeger Wurf  '3':   \n");
		printf("Winkelbeschleunigung  '4':   \n");
		printf("Ihre Eingabe:    ");
		scanf_s("%d", &aufgabe);
		printf("------------------------------------------------------\n");
		if (aufgabe < 1 || aufgabe > 20)
		{
			printf("Falsche Werte Eingabe LOOOOL \n ");
			return 0;
		}
		switch (aufgabe)
		{
		case 1:
		{
			printf("Steinfaellt - Schallgeschwindigkeit zurueck\n\n");
			Nummer_6();
			break;
		}
		case 2:
		{
			printf("Zwei Steine fallen - Einer mit Anfangsgeschwindigkeit\n\n");
			Nummer_7();
			break;
		}

		case 3:
		{
			printf("Weitwurf - Schraeger Wurf\n\n");
			weitwurf();
			break;
		}

		case 4:
		{
			printf("Plattenspieler - Winkelbeschleunigung\n\n");
			Winkelbeschleunigung_Plattenspieler();
			break;
		}

		return 0;
		}

	} while(endlos = 1);
	
}


	

	

