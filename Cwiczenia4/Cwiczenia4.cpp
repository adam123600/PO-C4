#include "zad1.h"


int main()
{
	Pojemnik* Box1 = new Pojemnik("Pudelko1", 10, 500, 0);
	Box1->Wypisz();

	printf("\n\n");

	// utworzenie obiektu Box2 ktory pobiera cechy Box1
	Pojemnik* Box2 = new Pojemnik(*Box1);
	Box2->Wypisz();

	
	
	delete(Box1);
	delete(Box2);

	system("pause");
	return 0;
}