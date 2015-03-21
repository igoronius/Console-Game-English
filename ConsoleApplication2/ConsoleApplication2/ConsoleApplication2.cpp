// ConsoleApplication15.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>

int pruf(int *nachricht);
#define maxanz 100
#define genkons 6
int _tmain(int argc, _TCHAR* argv[])
{
	int nachricht[100], anzahl = maxanz, x, y, z, rest[maxanz], generator[genkons];
	for (x = 0; x < 100; x++)
	{
		nachricht[x] = 0;
	}
	printf("Wie viele Bit ist ihre Nachricht lang? :3 mindestens 7 zeichen max %d zeichen\n", maxanz - 5); //benutzer gibt an wie viele bit seine nachricht lang ist
	scanf("%d", &anzahl);
	for (x = 0; x < anzahl; x++)	//eingabe nachricht
	{
		printf("geben sie den %d. bit ein: ", x + 1);
		scanf("%d", &nachricht[x]);
	}
	printf("Erster Bit es Generators ist standartmaessig 1\n");
	for (x = 1; x < genkons; x++)
	{
		generator[0] = 1; //erster Generatorbit auf 1 gesetzt
		printf("geben sie den %d. bit ein des Generators: ", x + 1);
		scanf("%d", &generator[x]);	//eingabe übriger generatorbits
	}
	for (x = 0; x < ; x++)
	{

	}
	system("pause");
	return 0;
}