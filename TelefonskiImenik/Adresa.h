#pragma once
class Adresa {
private:
	char ulica[100], broj[5], grad[50];

public:
	Adresa();
	void setUlica();
	void setBroj();
	void setGrad();
	char* getUlica();
	char* getBroj();
	char* getGrad();
	void unesiAdresu();
	bool pretragaPoUlici(char* u);
	bool pretragaPoGradu(char* g);
	~Adresa() = default;
};