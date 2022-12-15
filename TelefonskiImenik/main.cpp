#include <iostream>
#include "Imenik.h"

int glavniMeni() {
	system("cls");
	cout << "1. Unesi stavku\n";
	cout << "2. Ispis imenika\n";
	cout << "3. Pretraga\n";
	cout << "4. Kraj\n";
	int izbor;
	do {
		cout << "Izbor: ";
		cin >> izbor;
	} while (izbor < 1 || izbor>4);
	cin.ignore();
	return izbor;
}

int pretragaMeni() {
	system("cls");
	cout << "1. Pretraga po imenu\n";
	cout << "2. Pretraga po prezimenu\n";
	cout << "3. Pretraga po gradu\n";
	cout << "4. Vrati se\n";
	int izbor;
	do {
		cout << "Izbor: ";
		cin >> izbor;
	} while (izbor < 1 || izbor>4);
	cin.ignore();
	return izbor;
}

int main() {
	Imenik imenik;
	int izbor;
	do {
		izbor = glavniMeni();
		switch (izbor) {
		case 1:
			imenik.setKorisnici();
			imenik.setAdrese();
			cout << "Unos zavrsen!\n";
			break;
		case 2:
			imenik.ispisImenika();
			break;
		case 3:
			int izbor2;
			do {
				izbor2 = pretragaMeni();
				switch (izbor2) {
				case 1:
					imenik.pretragaPoImenu();
					break;
				case 2:
					imenik.pretragaPoPrezimenu();
					break;
				case 3:
					imenik.pretragaPoGradu();
					break;
				case 4:
					break;
				}
			} while (izbor2 != 4);
			break;
		case 4:
			break;
		}
	} while (izbor != 4);

	return 0;
}