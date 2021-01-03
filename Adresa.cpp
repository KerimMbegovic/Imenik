#include "Adresa.h"
#include <string>
#include <iostream>
using std::cin;
using std::cout;
Adresa::Adresa()
{
	strcpy_s(this->ulica, "Ulica");
	strcpy_s(this->broj, "bb");
	strcpy_s(this->grad, "Zenica");
}

void Adresa::setulica()
{
	cout << "Unesite naziv ulice: ";
	cin.getline(this->ulica, 100);
}

void Adresa::setbroj()
{
	cout << "Unesite broj ulice: ";
	cin.getline(this->broj, 5);
}

void Adresa::setgrad()
{
	cout << "Unesite naziv grada: ";
	cin.getline(this->grad, 50);
}

char* Adresa::getulica()
{
	return this->ulica;
}

char* Adresa::getbroj()
{
	return this->broj;
}

char* Adresa::getgrad()
{
	return this->grad;
}

void Adresa::unesiAdresu()
{
	this->setulica();
	this->setbroj();
	this->setgrad();
}

bool Adresa::pretragaPoUlici(char* u)
{
	return _strcmpi(this->ulica, u) == 0;
}

Adresa::~Adresa()
{
}
