#pragma once

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


struct pojemnik
{
	int jednostka;
	double pojemonosc;
	double zajete;
};

double Dodaj(struct pojemnik* struktura, double dodawanaZawartosc);
double Odbierz(struct pojemnik* struktura, double odejmowanaZawartosc);
void Wypisz(struct pojemnik struktura);

//// zad 2

class Pojemnik
{
	string nazwa;
	int jednostka;
	double pojemnosc;
	double zajete;

public:
	Pojemnik(); // konstruktor bezparametrowy
	Pojemnik(string nazwa, int jednostka, double pojemnosc, double zajete); // konstruktor z parametrami

	//metody
	double Dodaj(double dodawanaZawartosc); 
	void Wypisz();

	// konstrutkor kopiujacy
	Pojemnik(const Pojemnik& copy);
};
