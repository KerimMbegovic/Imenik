#pragma once
class Adresa
{
private:
	char ulica[100], broj[5], grad[50];

public:
	Adresa();
	void setulica();
	void setbroj();
	void setgrad();
	char* getulica();
	char* getbroj();
	char* getgrad();
	void unesiAdresu();
	bool pretragaPoUlici(char* u);

	~Adresa();
};

