#pragma once
class Korisnik
{
private:
	char ime[30], prezime[40], broj[20];
public:
	Korisnik();
	void setime();
	void setprezime();
	void setbroj();
	char* getime();
	char* getprezime();
	char* getbroj();
	void unesiKorisnika();
	~Korisnik();

};

