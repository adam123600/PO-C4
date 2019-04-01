#include "zad1.h"


double Dodaj(struct pojemnik* struktura, double dodawanaZawartosc)
{
	if ((struktura->pojemonosc - struktura->zajete) < dodawanaZawartosc)
	{
		double aktualnyStan = struktura->pojemonosc - struktura->zajete;
		struktura->zajete += aktualnyStan;
		return dodawanaZawartosc - aktualnyStan;
	}
	struktura->zajete += dodawanaZawartosc;
	return 0;
}

double Odbierz(struct pojemnik* struktura, double odejmowanaZawartosc)
{
	if (struktura->zajete < odejmowanaZawartosc)
	{
		double odejmowana = struktura->zajete;
		struktura->zajete -= odejmowana;
		return odejmowana;
	}

	struktura->zajete -= odejmowanaZawartosc;
	return odejmowanaZawartosc;
}

void Wypisz(struct pojemnik struktura)
{
	printf("Wykladnik 10^: %d\n", struktura.jednostka);
	printf("Pojemnosc:     %.2lf\n", struktura.pojemonosc);
	printf("Zajete:        %.2lf\n", struktura.zajete);
}


//////////////////////////////////////////
////////////////////////////////////////////
//// ZAD2


Pojemnik::Pojemnik()
{
	nazwa = "Pojemnik";
	jednostka = 10;
	pojemnosc = 10;
	zajete = 0;
}

Pojemnik::Pojemnik(string nazwa, int jednostka, double pojemnosc, double zajete)
{
	this->nazwa = nazwa;
	this->jednostka = jednostka;
	this->pojemnosc = pojemnosc;
	this->zajete = zajete;
}

double Pojemnik::Dodaj(double dodawanaZawartosc)
{
	if ((pojemnosc - zajete) < dodawanaZawartosc)
	{
		double aktualnyStan = pojemnosc - zajete;
		zajete += aktualnyStan;
		return dodawanaZawartosc - aktualnyStan;
	}
	zajete += dodawanaZawartosc;
	return dodawanaZawartosc;
}

void Pojemnik::Wypisz()
{
	cout << "Nazwa:         " << nazwa << endl;
	cout << "Wykladnik 10^: " << jednostka << endl;
	cout << "Pojemnosc:     " << pojemnosc << endl;
	cout << "Zajete:        " << zajete << endl;
}

Pojemnik::Pojemnik(Pojemnik& copy)
{
	nazwa = copy.nazwa;
	jednostka = copy.jednostka;
	pojemnosc = copy.pojemnosc;
	zajete = copy.zajete;
}

///////////////////////////////////////////
//////////////////////////////////////////