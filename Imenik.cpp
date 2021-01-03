#include "Imenik.h"
#include <iostream>
using std::cin;
using std::cout;
Imenik::Imenik()
{
}

void Imenik::setadrese()
{
	Adresa* temp = new Adresa();
	temp->unesiAdresu();
	this->getAdrese().push_back(*temp);
	delete temp;
}

void Imenik::setkorisnici()
{
	Korisnik* temp = new Korisnik();
	temp->unesiKorisnika();
	this->getKorisnici().push_back(*temp);
	delete temp;
}

std::vector<Adresa>& Imenik::getAdrese()
{
	return this->adrese;
}

std::vector<Korisnik>& Imenik::getKorisnici()
{
	return this->korisnici;
}

void Imenik::ispisImenika()
{
	cout << "R.br.\tPrezime\t\tIme\t\tBroj\t\tAdresa\t\tGrad";
	cout << "\n-------------------------------------------------------------------\n";
	if (this->getAdrese().size() == 0) {
		cout << "Imenik je prazan!\n";
	}
	else {
		Korisnik* k = new Korisnik();
		Adresa* a = new Adresa();

		for (int i = 0; i < this->getAdrese().size(); i++) {
			*k = this->getKorisnici()[i];
			*a = this->getAdrese()[i];
			cout << i + 1 << ".\t";
			cout << k->getprezime() << "\t\t";
			cout << k->getime() << "\t\t";
			cout << k->getbroj() << "\t";
			cout << a->getulica() << " " << a->getbroj() << "\t";
			cout << a->getgrad() << "\n";
		}
		delete a;
		delete k;
	}
}

void Imenik::pretragaPoImenu()
{
	char imeP[30];

	cout << "Unesite ime za pretragu: ";
	cin.getline(imeP, 30);
	
	if (this->getAdrese().size() == 0) {
		cout << "Imenik je prazan!\n";
	}
	else {
		Imenik* temp = new Imenik();
		for (int i = 0; i < this->getAdrese().size(); i++) {
			if (_strcmpi(this->getKorisnici()[i].getime(), imeP) == 0) {
				temp->getAdrese().push_back(this->getAdrese()[i]);
				temp->getKorisnici().push_back(this->getKorisnici()[i]);

			}
		}
		if (temp->getAdrese().size() == 0) {
			cout << "Ne postoje korisnici sa imenom " << imeP<<"!\n";
		}
		else {
			temp->ispisImenika();
		}
		delete temp;
	}
}

void Imenik::pretragaPoPrezimenu()
{
	char prezimeP[30];

	cout << "Unesite prezime za pretragu: ";
	cin.getline(prezimeP, 30);
	
	if (this->getAdrese().size() == 0) {
		cout << "Imenik je prazan!\n";
	}
	else {
		Imenik* temp = new Imenik();
		for (int i = 0; i < this->getAdrese().size(); i++) {
			if (_strcmpi(this->getKorisnici()[i].getprezime(), prezimeP) == 0) {
				temp->getAdrese().push_back(this->getAdrese()[i]);
				temp->getKorisnici().push_back(this->getKorisnici()[i]);

			}
		}
		if (temp->getAdrese().size() == 0) {
			cout << "Ne postoje korisnici sa prezimenom " << prezimeP << "!\n";
		}
		else {
			temp->ispisImenika();
		}
		delete temp;
	}
}

void Imenik::pretragaPoGradu()
{
	char gradP[30];

	cout << "Unesite grad za pretragu: ";
	cin.getline(gradP, 30);
	
	if (this->getAdrese().size() == 0) {
		cout << "Imenik je prazan!\n";
	}
	else {
		Imenik* temp = new Imenik();
		for (int i = 0; i < this->getAdrese().size(); i++) {
			if (_strcmpi(this->getAdrese()[i].getgrad(), gradP) == 0) {
				temp->getAdrese().push_back(this->getAdrese()[i]);
				temp->getKorisnici().push_back(this->getKorisnici()[i]);

			}
		}
		if (temp->getAdrese().size() == 0) {
			cout << "Ne postoje korisnici u gradu " << gradP << "!\n";
		}
		else {
			temp->ispisImenika();
		}
		delete temp;
	}
}

Imenik::~Imenik()
{
}
