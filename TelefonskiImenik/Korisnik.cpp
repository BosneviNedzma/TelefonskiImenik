#include "Korisnik.h"
#include <iostream>

Korisnik::Korisnik() {
	strcpy(this->ime, "Niko");
	strcpy(this->prezime, "Nikic");
	strcpy(this->broj, "061123456");
}

void Korisnik::setIme() {
	cout << "Unesite ime korisnika: ";
	cin.getline(this->ime, 30);
}

void Korisnik::setPrezime() {
	cout << "Unesite prezime korisnika: ";
	cin.getline(this->prezime, 40);
}

void Korisnik::setBroj() {
	cout << "Unesite broj korisnika: ";
	cin.getline(this->broj, 20);
}

char* Korisnik::getIme() {
	return this->ime;
}

char* Korisnik::getPrezime() {
	return this->prezime;
}

char* Korisnik::getBroj() {
	return this->broj;
}

void Korisnik::unesiKorisnika() {
	cout << "Unos korisnika\n";
	this->setIme();
	this->setPrezime();
	this->setBroj();
}

bool Korisnik::pretragaPoImenu(char* i) {
	return strcmpi(this->ime, i) == 0;
}

bool Korisnik::pretragaPoPrezimenu(char* p) {
	return strcmpi(this->prezime, p) == 0;
}