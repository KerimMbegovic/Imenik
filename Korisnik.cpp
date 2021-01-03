#include "Korisnik.h"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
Korisnik::Korisnik()
{
	strcpy_s(this->ime, "Niko");
	strcpy_s(this->prezime, "Nikic");
	strcpy_s(this->broj, "061123456");
}

void Korisnik::setime()
{
	cout << "Unesite ime: ";
	cin.getline(this->ime, 30);
}

void Korisnik::setprezime()
{
	cout << "Unesite prezime: ";
	cin.getline(this->prezime, 40);
}

void Korisnik::setbroj()
{
	cout << "Unesite broj: ";
	cin.getline(this->broj,20);
}

char* Korisnik::getime()
{
	return this->ime;
}

char* Korisnik::getprezime()
{
	return this->prezime;
}

char* Korisnik::getbroj()
{
	return this->broj;
}

void Korisnik::unesiKorisnika()
{
	this->setime();
	this->setprezime();
	this->setbroj();
}

Korisnik::~Korisnik()
{
}
