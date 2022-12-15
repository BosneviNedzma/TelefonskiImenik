#pragma once
class Korisnik {
private:
	char ime[30], prezime[40], broj[20];

public:
	Korisnik();
	void setIme();
	void setPrezime();
	void setBroj();
	char* getIme();
	char* getPrezime();
	char* getBroj();
	void unesiKorisnika();
	bool pretragaPoImenu(char* i);
	bool pretragaPoPrezimenu(char* p);
	~Korisnik() = default;
};