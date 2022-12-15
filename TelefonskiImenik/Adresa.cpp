#include "Adresa.h"
#include <iostream>

Adresa::Adresa() {
	strcpy(this->ulica, "Ulica");
	strcpy(this->broj, "bb");
	strcpy(this->grad, "Zenica");
}

void Adresa::setUlica() {
	cout << "Unesite naziv ulice: ";
	cin.getline(this->ulica, 100);
}

void Adresa::setBroj() {
	cout << "Unesite broj ulice: ";
	cin.getline(this->broj, 5);
}

void Adresa::setGrad() {
	cout << "Unesite naziv grada: ";
	cin.getline(this->grad, 50);
}

char* Adresa::getUlica() {
	return this->ulica;
}

char* Adresa::getBroj() {
	return this->broj;
}

char* Adresa::getGrad() {
	return this->grad;
}

void Adresa::unesiAdresu() {
	cout << "Unos adrese\n";
	this->setUlica();
	this->setBroj();
	this->setGrad();
}

bool Adresa::pretragaPoUlici(char* u) {
	return strcmpi(this->ulica, u) == 0;
}

bool Adresa::pretragaPoGradu(char* g) {
	return strcmpi(this->grad, g) == 0;
}