#include "DATA.h"
#include <iostream>

Zezwolenie::Dane::Dane()
{
	Dzien = (0),
		Miesiac = (0),
		Rok = (1900),
		Dokument_wywozowy = (0),
		Ilosc_colli = (0);
	std::string Podpis = {};
}

void Zezwolenie::Wprowadzanie_danych(Dane* Dane)
{
	std::cout << "Witam, prosz© podac dzieä miesi¥ca" << std::endl;
	std::cin >> Dane->Dzien;
	//while(std::cin)
	std::cout << "Sukces" << std::endl;
}

void Zezwolenie::Wyswietlanie_zezwolenia(Dane* Dane)
{
	std::cout << "########################################" << std::endl;
	std::cout << "############### JANTRANS ###############" << std::endl;
	std::cout << "########################################" << std::endl;
	std::cout << "Dzieñ miesi¹ca: " << Dane->Dzien << std::endl;
}