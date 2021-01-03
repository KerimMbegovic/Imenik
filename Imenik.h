#pragma once
#include <vector>
#include "Adresa.h";
#include "Korisnik.h";
class Imenik
{
private:
	std::vector<Adresa> adrese;
	std::vector<Korisnik> korisnici;
public:
	Imenik();
	void setadrese();
	void setkorisnici();
	std::vector<Adresa>& getAdrese();
	std::vector<Korisnik>& getKorisnici();
	void ispisImenika();
	void pretragaPoImenu();
	void pretragaPoPrezimenu();
	void pretragaPoGradu();
	~Imenik();
};

