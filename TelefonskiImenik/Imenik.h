#pragma once
#include <vector>
#include "Adresa.h"
#include "Korisnik.h"

using namespace std;

class Imenik {
private:
	vector<Adresa>adrese;
	vector<Korisnik>korisnici;

public:
	Imenik();
	void setAdrese();
	void setKorisnici();
	vector<Adresa>& getAdrese();
	vector<Adresa>& getKorisnici();
	void ispisImenika();
	void pretragaPoImenu();
	void pretragaPoPrezimenu();
	void pretragaPoGradu();
	bool imenikPrazan();
	~Imenik() = default;
};