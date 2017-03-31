#include <stdio.h>
#include <stdlib.h>


void pytaO_Liczby(int *wskaznikNaPierwszaLiczbe, int *wskaznikNaDrugaLiczbe);
void oblicza(int *wskaznikNaPierwszaLiczbe, int *wskaznikNaDrugaLiczbe,int *wskaznikNaWynikMnozenia);
void wyswietla(int *wskaznikNaPierwszaLiczbe, int *wskaznikNaDrugaLiczbe, int *wskaznikNaWynikMnozenia);
void pytaO_Wynik(int *pPodanyWynik);
int porownuje(int *pPodanyWynik,int *wskaznikNaWynikMnozenia);

int main(int argc, char *argv[]) {
	
	int pierwszaWartosc = 0;
	int drugaWartosc = 0;
	int wynikMnozenia = 0;
	int wynikPodany = 0;
	int wynikPorownania = 0;
	
	int *pPierwszaWartosc = &pierwszaWartosc;
	int *pDrugaWartosc = &drugaWartosc;
	int *pWynikMnozenia = &wynikMnozenia;
	int *pPodanyWynik = &wynikPodany;
	int *pWynikPorownania = &wynikPorownania;
	
	pytaO_Liczby(pPierwszaWartosc,pDrugaWartosc);
	oblicza(pPierwszaWartosc,pDrugaWartosc,pWynikMnozenia);
	pytaO_Wynik(pPodanyWynik);
	*pWynikPorownania = porownuje(pPodanyWynik,pWynikMnozenia);
	wyswietla(pPierwszaWartosc,pDrugaWartosc,pWynikPorownania);
	
	return 0;
}

void pytaO_Liczby(int *wskaznikNaPierwszaLiczbe, int *wskaznikNaDrugaLiczbe)
{
	printf("Hej uzytkowniku podaj dwie liczby: \n");
	scanf("%d",wskaznikNaPierwszaLiczbe);
	scanf("%d",wskaznikNaDrugaLiczbe);
}

void oblicza(int *wskaznikNaPierwszaLiczbe, int *wskaznikNaDrugaLiczbe, int *wskaznikNaWynikMnozenia)
{
	*wskaznikNaWynikMnozenia = *wskaznikNaPierwszaLiczbe * (*wskaznikNaDrugaLiczbe);
}

void wyswietla(int *wskaznikNaPierwszaLiczbe, int *wskaznikNaDrugaLiczbe, int *wskaznikNaWynikMnozenia)
{
	printf("Pierwsza Liczba : %d\nDruga Liczba : %d\n",*wskaznikNaPierwszaLiczbe, *wskaznikNaDrugaLiczbe);
	if(*wskaznikNaWynikMnozenia == 1) 
	{
		printf("Twoj wynik zgadza sie z obliczonym\n");
	}
	else
	{
		printf("Twoj wynik nie zgadza sie z obliczonym\n");
	}
}

void pytaO_Wynik(int *pPodanyWynik)
{
	printf("Uzytkowniku Podaj Wynik Mnozenia: ");
	scanf("%d",pPodanyWynik);
}

int porownuje(int *pPodanyWynik,int *wskaznikNaWynikMnozenia)
{
	if(*pPodanyWynik == *wskaznikNaWynikMnozenia)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
