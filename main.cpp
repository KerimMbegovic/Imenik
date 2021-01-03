#include <iostream>
#include "Imenik.h"
using std::cout;
using std::cin;

int main() {
	int izbor;
	Imenik imenik;
	do {
		system("cls");
		cout << "1. Unesi stavku\n";
		cout << "2. Ispis imenika\n";
		cout << "3. Pretraga\n";
		cout << "4. Kraj\n";
		cout << "Izbor: ";
		cin >> izbor;
		cin.ignore();
		
		if (izbor == 1) {
			imenik.setkorisnici();
			imenik.setadrese();
			cout << "\nUnos zavrsen!\n";
			system("pause");
		}
		else if (izbor == 2) {
			imenik.ispisImenika();
			cout << "\nIspis zavrsen!\n";
			system("pause");
		}
		else if (izbor == 3) {
			int izbor2;
			do {
				cout << "Pretraga kosinika:\n";
				cout << "\t1. Pretraga po imenu\n";
				cout << "\t2. Pretraga po prezimenu\n";
				cout << "\t3. Pretraga po gradu\n";
				cout << "\t4. Vrati se\n";
				cout << "Izbor: ";
				cin >> izbor2;
				cin.ignore();
				if (izbor2 == 1) {
					imenik.pretragaPoImenu();
					cout << "\nPretraga zavrsena!\n";
					system("pause");
					system("cls");
				}
				else if (izbor2 == 2) {
					imenik.pretragaPoPrezimenu();
					cout << "\nPretraga zavrsena!\n";
					system("pause");
					system("cls");
				}
				else if (izbor2 == 3) {
					imenik.pretragaPoGradu();
					cout << "\nPretraga zavrsena!\n";
					system("pause");
					system("cls");
				}
			} while (izbor2 != 4);
		}
	} while (izbor != 4);
	

	

	return 0;
}