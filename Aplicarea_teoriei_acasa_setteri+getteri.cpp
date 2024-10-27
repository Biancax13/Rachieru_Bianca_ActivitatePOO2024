#include<iostream>
#include<string>

using namespace std;

class Pisica {

	string numePisi;
	string rasaPisi;
	int varstaPisi;
	float greutatePisigr;
	bool areVaccin;
	const int anAdoptie;
	static string SunetPisica;

public:
	Pisica(): anAdoptie(2019) {
		this->numePisi = "Necunoscut";
		this->rasaPisi = "Maidaneza";
		this->varstaPisi = 0;
		this->greutatePisigr = 0;
		this->areVaccin = 0;


	};
	Pisica(string numePisi, string rasaPisi, int varstaPisi, float greutatePisigr, bool areVaccin,int anAdoptie): anAdoptie(anAdoptie) {
		this->numePisi = numePisi;
		this->rasaPisi = rasaPisi;
		this->varstaPisi = varstaPisi;
		this->greutatePisigr = greutatePisigr;
		this->areVaccin = areVaccin;

	};

	//getteri
	string getnumePisi() {
		return this->numePisi;
	}
	string getrasaPisi() {
		return this->rasaPisi;
	}
	int getvarstaPisi() {
		return this->varstaPisi;
	}
	float getgreutatePisigr() {
		return this->greutatePisigr;
	}
	bool getareVaccin() {
		return this->areVaccin;
	}
	int getanAdoptie() {
		return this->anAdoptie;
	}
	//setteri


	void setnumePisi(string numeNOUPisi) {
		this->numePisi = numeNOUPisi;
	}
	
	void setrasaPisi(string rasaNOUAPisi) {
		this->rasaPisi = rasaNOUAPisi;
	}
	void setvarstaPisi(int varstaNOUAPisi) {
		this->varstaPisi = varstaNOUAPisi;
	}
	void setgreutatePisigr(float greutateNOUAPisigr) {
		this->greutatePisigr = greutateNOUAPisigr;
	}
	void setareVaccin(bool areVaccinNOU) {
		this->areVaccin = areVaccinNOU;
	}
};
string Pisica::SunetPisica="Miau";

void main() {

	Pisica pisi1("Gatito", "Maidanez", 1, 2.3, 1, 2019);
	cout << "Nume/Porecla pisicii:" << pisi1.getnumePisi() << endl;
	cout << "Rasa pisicii:" << pisi1.getrasaPisi() << endl;
	cout << "Varsta pisicii in ani:" << pisi1.getvarstaPisi() << endl;
	cout << "Greutatea pisicii in grame:" << pisi1.getgreutatePisigr() << endl;
	cout << "Pisica are vaccin?:*)DA(1)  **)NU(0):" << pisi1.getareVaccin() << endl;
	cout << "Pisica a fost adoptata in anul:" << pisi1.getanAdoptie() << endl;
	cout << endl << endl << endl;

	Pisica pisi2("Aria", "Scottish Fold", 2, 3.4, 0,2020);
	cout << "Nume/Porecla pisicii:" << pisi2.getnumePisi() << endl;
	cout << "Rasa pisicii:" << pisi2.getrasaPisi() << endl;
	cout << "Varsta pisicii in nai:" << pisi2.getvarstaPisi() << endl;
	cout << "Greutatea pisicii in grame:" << pisi2.getgreutatePisigr() << endl;
	cout << "Pisica are vaccin?:*)DA(1)  **)NU(0):" << pisi2.getareVaccin() << endl;
	cout << "Pisica a fost adoptata in anul:" << pisi2.getanAdoptie() << endl;
	cout << endl << endl << endl;

	Pisica pisi3("Sibana", "Persana", 10, 4.25, 1,2019);
	cout << "Nume/Porecla pisicii:" << pisi3.getnumePisi() << endl;
	cout << "Rasa pisicii:" << pisi3.getrasaPisi() << endl;
	cout << "Varsta pisicii in ani:" << pisi3.getvarstaPisi() << endl;
	cout << "Greutatea pisicii in grame:" << pisi3.getgreutatePisigr() << endl;
	cout << "Pisica are vaccin?:*)DA(1)  **)NU(0):" << pisi3.getareVaccin() << endl;
	cout << "Pisica a fost adoptata in anul:" << pisi3.getanAdoptie() << endl;
	cout << endl << endl << endl;

	cout << "--------------------------------APELARE SETTERI--------------------------" << endl << endl;
	cout << "Obiectul inainte de apelarea seterilor" << endl << endl;
	cout << "Nume/Porecla pisicii:" << pisi2.getnumePisi() << endl;
	cout << "Rasa pisicii:" << pisi2.getrasaPisi() << endl;
	cout << "Varsta pisicii in ani:" << pisi2.getvarstaPisi() << endl;
	cout << "Greutatea pisicii in grame:" << pisi2.getgreutatePisigr() << endl;
	cout << "Pisica are vaccin?:*)DA(1)  **)NU(0):" << pisi2.getareVaccin() << endl;
	cout << endl << endl << endl;

	pisi2.setnumePisi("Mitica");
	pisi2.setrasaPisi("Siameza");
	pisi2.setvarstaPisi(1);
	pisi2.setgreutatePisigr(3.8);
	pisi2.setareVaccin(1);

	cout << "Obiectul dupa apelarea seterilor" << endl << endl;
	cout << "Nume/Porecla pisicii:" << pisi2.getnumePisi() << endl;
	cout << "Rasa pisicii:" << pisi2.getrasaPisi() << endl;
	cout << "Varsta pisicii in ani:" << pisi2.getvarstaPisi() << endl;
	cout << "Greutatea pisicii in grame:" << pisi2.getgreutatePisigr() << endl;
	cout << "Pisica are vaccin?:*)DA(1)  **)NU(0):" << pisi2.getareVaccin() << endl;
	cout << endl << endl << endl;


	


}