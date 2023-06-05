#include "DATA.h"

int main()
{
	Zezwolenie* Przepustka = new Zezwolenie();
	Zezwolenie::Dane* Pobranie_danych = new Zezwolenie::Dane;
	Przepustka->Wprowadzanie_danych(Pobranie_danych);
	Przepustka->Wyswietlanie_zezwolenia(Pobranie_danych);
	delete Przepustka;
	Przepustka = nullptr;
	delete Pobranie_danych;
	Pobranie_danych = nullptr;
}