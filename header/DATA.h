#ifndef DATA_H
#define DATA_H

#include <string>

class Zezwolenie
{
public:

	struct Dane
	{
		Dane();

		int Dzien;
		int Miesiac;
		int Rok;
		int Dokument_wywozowy;
		int Ilosc_colli;
		std::string Podpis;
	};

	void Wprowadzanie_danych(Dane* Dane);
	void Wyswietlanie_zezwolenia(Dane* Dane);
};

#endif // DATA_H
