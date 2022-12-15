#include <memory>
#include <iostream>
#include "Imenik.h"

Imenik::Imenik() {

}

void Imenik::setAdrese() {
	Adresa* temp = new Adresa();
	temp->unesiAdresu();
	this->getAdrese().push_back(*temp);
	delete temp;
}

void Imenik::setKorisnici() {
	shared_ptr<Korisnik>temp = make_shared<Korisnik>();
	temp->unesiKorisnika();
	this->getKorisnici().push_back(*temp);
}

vector<Adresa>& Imenik::getAdrese() {
	return this->adrese;
}

vector<Korisnik>& Imenik::getKorisnici() {
	return this->korisnici;
}

void Imenik::ispisImenika() {
	cout << "R. br.\tPrezime\t\tIme\t\tBroj\t\tAdresa\t\t\tGrad\n";
	cout << "-----------------------------------------------------\n";
	if (this->imenikPrazan()) {
		cout << "Imenik je prazan!\n";
	}
	else {
		for (int i = 0; i < this->getAdrese().size(); i++) {
			cout << i + 1 << ".\t";
			cout << this->getKorisnici()[i].getPrezime() << "\t\t";
			cout << this->getKorisnici()[i].getIme() << "\t\t";
			cout << this->getKorisnici()[i].getBroj() << "\t";
			cout << this->getKorisnici()[i].getUlica() << " ";
			cout << this->getKorisnici()[i].getBroj() << "\t";
			cout << this->getKorisnici()[i].getGrad() << "\n";
		}
	}
	cout << "---------------------------------------------------\n";
}

void Imenik::pretragaPoImenu() {
	if (this->imenikPrazan()) {
		cout << "Imenik je prazan!\n";
	}
	else {
		char imePretraga[30];
		cout << "Unesite ime za pretragu: ";
		cin.getline(imePretraga, 30);
		shared_ptr<Imenik>temp = make_shared<Imenik>();
		for (int i = 0; i < this->getAdrese().size(); i++) {
			if (this->getKorisnici()[i].pretragaPoUlici(imePretraga)) {
				temp->getAdrese().push_back(this->getAdrese()[i]);
				temp->getKorisnici().push_back(this->getKorisnici()[i]);
			}
		}
		if (temp->imenikPrazan()) {
			cout << "Ne postoje korisnici sa imenom: " << imePretraga << "!\n";
		}
		else {
			temp->ispisImenika();
		}
	}
}
void Imenik::pretragaPoPrezimenu() {
		if (this->imenikPrazan()) {
			cout << "Imenik je prazan!\n";
		}
		else {
			char prezimePretraga[40];
			cout << "Unesite prezime za pretragu: ";
			cin.getline(prezimePretraga, 30);
			shared_ptr<Imenik>temp = make_shared<Imenik>();
			for (int i = 0; i < this->getAdrese().size(); i++) {
				if (this->getKorisnici()[i].pretragaPoPrezimenu(prezimePretraga)) {
					temp->getAdrese().push_back(this->getAdrese()[i]);
					temp->getKorisnici().push_back(this->getKorisnici()[i]);
				}
			}
			if (temp->imenikPrazan()) {
				cout << "Ne postoje korisnici sa prezimenom: " << prezimePretraga << "!\n";
			}
			else {
				temp->ispisImenika();
			}
		}
	}

void Imenik::pretragaPoGradu() {
	if (this->imenikPrazan()) {
		cout << "Imenik je prazan!\n";
	}
	else {
		char gradPretraga[50];
		cout << "Unesite grad za pretragu: ";
		cin.getline(gradPretraga, 50);
		shared_ptr<Imenik>temp = make_shared<Imenik>();
		for (int i = 0; i < this->getAdrese().size(); i++) {
			if (this->getAdrese()[i].pretragaPoGradu(gradPretraga)) {
				temp->getAdrese().push_back(this->getAdrese()[i]);
				temp->getKorisnici().push_back(this->getKorisnici()[i]);
			}
		}
		if (temp->imenikPrazan()) {
			cout << "Ne postoje korisnici iz grada: " << gradPretraga << "!\n";
		}
		else {
			temp->ispisImenika();
		}
	}
}

bool Imenik::imenikPrazan() {
	return this->korisnici.size() == 0;
}

