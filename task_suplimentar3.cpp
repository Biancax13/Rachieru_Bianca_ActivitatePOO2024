
//Pentru clasele de la tema precedentă treceți atributele din zona publică a clasei în zona private.
//În cele trei clase trebuie să implementați destructorii astfel încât să ștergeți memoria alocată în HEAP.Implementati si constructorul de copiere pentru toate clasele
//Pentru toate atributele trecute acum în zona private a clasei realizați metode de acces la acestea : get - eri și set - eri.
//Pentru atributele statice realizați funcții statice pentru a oferi acces la acestea.
//Realizați două funcții globale care să realizeze anumite prelucrări / procesări(la alegere) și să folosească obiecte de tipul claselor implementate.Cele două funcții vor fi prietene cu clasele ale căror obiecte sunt folosite, astfel încât să aibă acces la atributele private.
//În funcția main apelați toate metodele și funcțiile implementate pentru a le testa.Cu ajutorul get - erilor să și afișați valorile atributelor.
#include<iostream>
#include<string>

using namespace std;

class Laptop {
private:
	string tipprocesor;
	float greutateL;//in kg
	bool areAmprenta;
	const float anFabricatie;
	static bool areManualdeUtilizare;
	int nrfoldere;
	int* nrelementeF;//vector care arata cate elemente are fiecare folder din laptop
public:
	//constructor 1.1
	Laptop() :anFabricatie(0000) {
		this->tipprocesor = "Anonim";
		this->greutateL = 0;
		this->areAmprenta = 0;
		this->nrfoldere = 0;
		this->nrelementeF = NULL;

	}

	//constructor 1.2
	Laptop(string tipprocesor, float greutateL, bool areAmprenta, float anFabricatie, int nrfoldere, int* nrelementeF) :anFabricatie(anFabricatie) {
		this->tipprocesor = tipprocesor;
		this->greutateL = greutateL;
		this->areAmprenta = areAmprenta;
		this->nrfoldere = nrfoldere;

		this->nrelementeF = new int[this->nrfoldere];
		for (int i = 0; i < this->nrfoldere; i++) {
			this->nrelementeF[i] = nrelementeF[i];
		}

	}
	//constructor 1.3
	Laptop(string tipprocesor, float greutateL, float anFabricatie, int nrfoldere, int* nrelementeF) :anFabricatie(anFabricatie) {
		this->tipprocesor = tipprocesor;
		this->greutateL = greutateL;
		this->areAmprenta = 0;
		this->nrfoldere = nrfoldere;

		this->nrelementeF = new int[this->nrfoldere];
		for (int i = 0; i < this->nrfoldere; i++) {
			this->nrelementeF[i] = nrelementeF[i];
		}

	}


	Laptop(const Laptop& obj) :anFabricatie(obj.anFabricatie) {
		this->tipprocesor = obj.tipprocesor;
		this->greutateL = obj.greutateL;
		this->areAmprenta = obj.areAmprenta;
		this->nrfoldere = obj.nrfoldere;

		this->nrelementeF = new int[obj.nrfoldere];
		for (int i = 0; i < this->nrfoldere; i++) {
			this->nrelementeF[i] = obj.nrelementeF[i];
		}

	}

	~Laptop() {
		if (this->nrelementeF != NULL) {
			delete[] this->nrelementeF;
		}
		cout << "Aici s-a apelat destructorul!!" << endl;
	}

	Laptop& operator=(const Laptop& obj) {
		if (this != &obj) {
			if (this->nrelementeF != NULL) {
				delete[] this->nrelementeF;
			}
			this->tipprocesor = obj.tipprocesor;
			this->greutateL = obj.greutateL;
			this->areAmprenta = obj.areAmprenta;
			this->nrfoldere = obj.nrfoldere;

			this->nrelementeF = new int[obj.nrfoldere];
			for (int i = 0; i < this->nrfoldere; i++) {
				this->nrelementeF[i] = obj.nrelementeF[i];
			}
		}
		return *this;
	}



	//getteri1
	string gettipprocesor() {
		return this->tipprocesor;
	}
	float  getgreutateL() {
		return this->greutateL;
	}
	bool getareAmprenta() {
		return this->areAmprenta;
	}
	float getanFabricatie() {
		return this->anFabricatie;
	}
	int getnrfoldere() {
		return this->nrfoldere;
	}
	int* getnrelementeF() {
		return this->nrelementeF;
	}

	static bool getareManualdeUtilizare() {
		return Laptop::areManualdeUtilizare;
	}

	//setteri
	void settipprocesor(string tipprocesorNOU) {
		this->tipprocesor = tipprocesorNOU;
	}
	void settgreutateL(float greutateNouaL) {
		this->greutateL = greutateNouaL;
	}
	void setareAmprenta(bool areAmprentaNoua) {
		this->areAmprenta = areAmprentaNoua;
	}
	void setfoldere(int nrNOUfoldere, int* nrNOUelementeF) {
		if (this->nrelementeF != NULL) {
			delete[] this->nrelementeF;
		}
		this->nrfoldere = nrNOUfoldere;
		this->nrelementeF = new int[this->nrfoldere];
		for (int i = 0; i < this->nrfoldere; i++) {
			this->nrelementeF[i] = nrNOUelementeF[i];
		}
	}
	static void setareManualUtilizae(bool valoareNoua) {
		Laptop::areManualdeUtilizare = valoareNoua;
	}

	

	//sa se determine folderul cu cele mai multe elemente din vectorul int* nrelementeF
	int nrelemMaxim() {
		int rezultatfinal;
		rezultatfinal = this->nrelementeF[0];
		for (int i = 1; i < this->nrfoldere; i++) {
			if (this->nrelementeF[i] > rezultatfinal) {
				rezultatfinal = nrelementeF[i];

			}
		}
		return rezultatfinal;
	}

	friend ostream& operator<<(ostream& out, const Laptop& obj) {
		out << "Tipul procesorului este:" << obj.tipprocesor << endl;
		out << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << obj.areAmprenta << endl;
		out << "Anul fabricatiei este:" << obj.anFabricatie << endl;
		out << "Nr de elemente din Foldere:" << endl;
		for (int i = 0; i < obj.nrfoldere; i++) {
			out << "Elemente:" << obj.nrelementeF[i] << endl;
		}
		return out;

	}

	friend istream& operator >>(istream& in, Laptop& obj) {
		if (obj.nrelementeF != NULL) {
			delete[]obj.nrelementeF;
		}
		cout << "INTRODUCETI TIPUL PROCESORULUI:";
			in >> obj.tipprocesor;
		cout<<"INTRODUCETI DACA LAPTOPUL ARE AMPRENTA PENTRU DEBLOCARE:";
			in >> obj.areAmprenta;
			cout << "INTRODUCETI NUMARUL DE FOLDERE";
			in >> obj.nrfoldere;
			obj.nrelementeF = new int[obj.nrfoldere];
			cout << "Numarul de elemente din fiecare folder este:";
			for (int i = 0; i < obj.nrfoldere; i++) {
				in >> obj.nrelementeF[i];
			}
			return in;
	}


};
bool Laptop::areManualdeUtilizare = true;


class Smartphone {
private:
	string firmaTelefon;
	int capacitateStocare;
	bool areIncarcator;
	const string SistemdeOperare;
	static bool areCamerafrontala;//toate telefoanele au camera frontala
	int nraplicatii;
	string* numeapl;//vector care arata numele tuturor aplicatiilor din telefon(din fabrica)
public:
	//constructor 2.1
	Smartphone() :SistemdeOperare("Necunoscut") {
		this->firmaTelefon = "Anonim";
		this->capacitateStocare = 0;
		this->areIncarcator = 0;
		this->nraplicatii = 0;
		this->numeapl = NULL;
	}
	//constructor 2.2
	Smartphone(string firmaTelefon, int nraplicatii, string* numeapl) :SistemdeOperare("Necunoscut") {
		this->firmaTelefon = firmaTelefon;
		this->capacitateStocare = 0;
		this->areIncarcator = 0;
		this->nraplicatii = nraplicatii;

		this->numeapl = new string[this->nraplicatii];
		for (int i = 0; i < this->nraplicatii; i++) {
			this->numeapl[i] = numeapl[i];
		}

	}

	//constructor 2.3
	Smartphone(string firmaTelefon, int capacitateStocare, string SistemdeOperare, bool areIncarcator, int nraplicatii, string* numeapl) :SistemdeOperare(SistemdeOperare) {
		this->firmaTelefon = firmaTelefon;
		this->capacitateStocare = capacitateStocare;
		this->areIncarcator = areIncarcator;
		this->nraplicatii = nraplicatii;

		this->numeapl = new string[this->nraplicatii];
		for (int i = 0; i < this->nraplicatii; i++) {
			this->numeapl[i] = numeapl[i];
		}

	}


	Smartphone(const Smartphone& obj) :SistemdeOperare(obj.SistemdeOperare) {
		this->firmaTelefon = obj.firmaTelefon;
		this->capacitateStocare = obj.capacitateStocare;
		this->areIncarcator = obj.areIncarcator;
		this->nraplicatii = obj.nraplicatii;

		this->numeapl = new string[obj.nraplicatii];
		for (int i = 0; i < this->nraplicatii; i++) {
			this->numeapl[i] = obj.numeapl[i];
		}
	}

	~Smartphone() {
		if (this->numeapl != NULL) {
			delete[] this->numeapl;
		}

		cout << "Aici s-a apelat destructorul!!" << endl;
	}

	Smartphone& operator=(const Smartphone& obj) {
		if (this != &obj) {
			if (this->numeapl != NULL) {
				delete[] this->numeapl;
			}
			this->firmaTelefon = obj.firmaTelefon;
			this->capacitateStocare = obj.capacitateStocare;
			this->areIncarcator = obj.areIncarcator;
			this->nraplicatii = obj.nraplicatii;

			this->numeapl = new string[obj.nraplicatii];
			for (int i = 0; i < this->nraplicatii; i++) {
				this->numeapl[i] = obj.numeapl[i];
			}
		}
		return *this;

	}


	//getteri2
	string getfirmaTelefon() {
		return this->firmaTelefon;
	}
	int  getcapacitateStocare() {
		return this->capacitateStocare;
	}
	string getSistemdeOperare() {
		return this->SistemdeOperare;
	}
	bool  getareIncarcator() {
		return this->areIncarcator;
	}
	int getnraplicatii() {
		return this->nraplicatii;
	}
	string* getnumeapl() {
		return this->numeapl;
	}

	static bool getareCamerafrontala() {
		return Smartphone::areCamerafrontala;
	}

	//setteri
	void setfirmaTelefon(string firmaTelefonoua) {
		this->firmaTelefon = firmaTelefonoua;
	}
	void setcapacitateStocare(int capacitatestocareNoua) {
		this->capacitateStocare = capacitatestocareNoua;
	}
	void setareIncarcator(bool valoareSchimbata) {
		this->areIncarcator = valoareSchimbata;
	}
	void setaplicatii(int nraplicatiiNOU, string* numeaplNoi) {
		if (this->numeapl != NULL) {
			delete[]this->numeapl;
		}
		this->nraplicatii = nraplicatiiNOU;
		this->numeapl = new string[this->nraplicatii];
		for (int i = 0; i < this->nraplicatii; i++) {
			this->numeapl[i] = numeaplNoi[i];
		}
	}
	static void setareCamerafrontala( bool areCamerafrontala2) {
		Smartphone::areCamerafrontala = areCamerafrontala2;

	}


	//Sa se afiseze numele aplicatiilor de pe pozitia 3 si 8 din vectorul string* numeapl
	string AfisareNumeApl(int pozitieCautata) {
		if (pozitieCautata > 0 && pozitieCautata < this->nraplicatii) {
			return this->numeapl[pozitieCautata];
		}
		else
			return "Nu exista nicio aplicatie la pozitia cautata!";
	}

	friend ostream& operator<<(ostream& out, const Smartphone& obj) {
		cout << "Brand-ul telefonului este:" << obj.firmaTelefon<< endl;
		cout << "Capacitatea de stocare in GB a telefonului este:" << obj.capacitateStocare << endl;
		cout << "Sistemul de operare este:" << obj.SistemdeOperare << endl;
		cout << "Are incarcator inclus?:" << obj.areIncarcator << endl;
		cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << obj.nraplicatii << endl;
		cout << "Aplicatii:" << endl;

		for (int i = 0; i < obj.nraplicatii; i++) {
			cout << "Aplicatii:" <<obj.numeapl[i] << endl;
		}
		cout << "Are camera frontala?(DA-1,NU-0):" << obj.areCamerafrontala << endl;
		cout << endl;

		return out;

	}

	friend istream& operator >>(istream& in, Smartphone& obj) {
		if (obj.numeapl != NULL) {
			delete[]obj.numeapl;
		}
		cout << "INTRODUCETI BRANDUL TELEFONULUI:";
		in >> obj.firmaTelefon;
		cout << "INTRODUCETI CAPACITATEA DE STOCARE IN GB:";
		in >> obj.capacitateStocare;
		cout << "ARE INCARCATOR INCLUS?(DA-1,NU-0):";
			in >> obj.areIncarcator;
		obj.numeapl = new string[obj.nraplicatii];
		cout << "Numarul de aplicatii este:";
		for (int i = 0; i < obj.nraplicatii; i++) {
			in >> obj.numeapl[i];
		}
		cout << "ARE CAMERA FRONTALA?";
		in >> obj.areCamerafrontala;

		return in;
	}

};
bool Smartphone::areCamerafrontala = true;



class Tableta {
private:
	string versiunetableta;
	bool areFaceID;
	const int codIdentificare;
	static string numeProducator;//toate tabletele au acelasi producator
	int nrdimensiunitableta;
	float* dimensiuni;//in mm,vector care arata dimensiunile unei tablete

public:
	//constructor 3.1
	Tableta() :codIdentificare(0) {
		this->versiunetableta = "Anonima";
		this->areFaceID = 0;
		this->nrdimensiunitableta = 0;
		this->dimensiuni = NULL;
	}

	//constructor 3.2
	Tableta(string versiunetableta, int nrdimensiunitableta, float* dimensiuni) :codIdentificare(0) {
		this->versiunetableta = versiunetableta;
		this->areFaceID = 0;
		this->nrdimensiunitableta = nrdimensiunitableta;
		this->dimensiuni = new float[this->nrdimensiunitableta];
		for (int i = 0; i < this->nrdimensiunitableta; i++) {
			this->dimensiuni[i] = dimensiuni[i];
		}
	}

	//constructor 3.3
	Tableta(string versiunetableta, bool areFaceID, int codIdentificare, int nrdimensiunitableta, float* dimensiuni) :codIdentificare(codIdentificare) {
		this->versiunetableta = versiunetableta;
		this->areFaceID = areFaceID;
		this->nrdimensiunitableta = nrdimensiunitableta;
		this->dimensiuni = new float[this->nrdimensiunitableta];
		for (int i = 0; i < this->nrdimensiunitableta; i++) {
			this->dimensiuni[i] = dimensiuni[i];
		}
	}

	Tableta(const Tableta& obj) :codIdentificare(obj.codIdentificare) {
		this->versiunetableta = obj.versiunetableta;
		this->areFaceID = obj.areFaceID;
		this->nrdimensiunitableta = obj.nrdimensiunitableta;
		this->dimensiuni = new float[obj.nrdimensiunitableta];
		for (int i = 0; i < this->nrdimensiunitableta; i++) {
			this->dimensiuni[i] = obj.dimensiuni[i];
		}
	}


	~Tableta() {
		if (this->dimensiuni != NULL) {
			delete[]this->dimensiuni;
		}
		cout << "Aici s-a apelat destructorul!!" << endl;
	}

	Tableta& operator=(const Tableta& obj) {
		if (this->dimensiuni != NULL) {
			delete[]this->dimensiuni;
		}
		this->versiunetableta = obj.versiunetableta;
		this->areFaceID = obj.areFaceID;
		this->nrdimensiunitableta = obj.nrdimensiunitableta;
		this->dimensiuni = new float[obj.nrdimensiunitableta];
		for (int i = 0; i < this->nrdimensiunitableta; i++) {
			this->dimensiuni[i] = obj.dimensiuni[i];
		}
		return *this;
	}

	//getteri3
	string getversiunetableta() {
		return this->versiunetableta;
	}

	bool  getareFaceID() {
		return this->areFaceID;
	}
	int getcodIdentificare() {
		return this->codIdentificare;
	}
	int getnrdimensiunitableta() {
		return this->nrdimensiunitableta;
	}
	float* getdimensiuni() {
		return this->dimensiuni;
	}
	static string getnumeProducator() {
		return Tableta::numeProducator;
	}

	//setteri3
	void setversiunetableta(string versiunetabletanoua) {
		this->versiunetableta = versiunetabletanoua;
	}
	void setareFaceID(bool areFaceIDnou) {
		this->areFaceID = areFaceIDnou;
	}
	static void setnumeProducator(string numeproducatorNOU) {
		Tableta::numeProducator = numeproducatorNOU;
	}
	void setdimensiuni(int nrdimensiuninou, float* dimensiuniNou) {
		if (this->dimensiuni != NULL) {
			delete[]this->dimensiuni;
		}
		this->nrdimensiunitableta = nrdimensiuninou;
		this->dimensiuni = new float[this->nrdimensiunitableta];
		for (int i = 0; i < this->nrdimensiunitableta; i++) {
			this->dimensiuni[i] = dimensiuniNou[i];
		}
	}

	//sa se implementeze o metoda care afiseaza dimensiunile unei tablete si sa se adauge o noua dimensiune a acesteia in vectorul float* dimensiuni
	void afisareDimensiuniTableta() {
		cout << "Dimensiuni:" << endl;
		for (int i = 0; i < this->getnrdimensiunitableta(); i++) {
			cout << "Dimensiuni(L/l/h):" << this->getdimensiuni()[i] << endl;
		}

	}

	void adaugaDimensiuneNoua(float dimensiuneNoua)
	{

		Tableta obiectCopie(*this);


		if (this->dimensiuni != NULL)
		{
			delete[] this->dimensiuni;
		}

		this->nrdimensiunitableta++;
		this->dimensiuni = new float[this->nrdimensiunitableta];

		for (int i = 0; i < obiectCopie.nrdimensiunitableta; i++)
		{
			this->dimensiuni[i] = obiectCopie.dimensiuni[i];

		}

		this->dimensiuni[obiectCopie.nrdimensiunitableta] = dimensiuneNoua;

	}

	friend ostream& operator<<(ostream& out, const Tableta& obj) {
		out << "Versiunea tabletei:" << obj.versiunetableta << endl;
		out << "Are Face ID?(1-Da,0-Nu):  " << obj.areFaceID << endl;
		out << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << obj.nrdimensiunitableta << endl;
		out << "Dimensiuni:" << endl;
		for (int i = 0; i < obj.nrdimensiunitableta; i++) {
			out << "Dimensiunile tabletei:" << obj.dimensiuni[i] << endl;
		}
		out << "Numele producatorului este:" << obj.numeProducator << endl;
		out << endl;

		return out;
	}

	friend istream& operator>>(istream& in, Tableta& obj) {
		if (obj.dimensiuni != NULL) {
			delete[] obj.dimensiuni;
		}
		cout <<"INTRODUCETI VERSIUNEA TABLETEI:";
		in >> obj.versiunetableta;
		cout << "TABLETA ARE FACE ID?INTRODUCETI 1 PT DA SI 0 PENTRU NU:";
		in >> obj.areFaceID;
		cout << "NUMARUL DE DIMENSIUNI CUNOSCUTE ALE  TABLETEI:";
		in >> obj.nrdimensiunitableta;
		obj.dimensiuni = new float[obj.nrdimensiunitableta];
		for (int i = 0; i < obj.nrdimensiunitableta; i++) {
			in >> obj.dimensiuni[i];
		}
		return in;
	}

};
string Tableta::numeProducator = "Apple Inc.";

void main() {

	Laptop l1;
	cout << "LAPTOPURI" << endl;
	cout << "****************************" << endl;
	cout << "Tipul procesorului este:" << l1.gettipprocesor() << endl;
	cout << "Greutatea laptopului in kg este:" << l1.getgreutateL() << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l1.getareAmprenta() << endl;
	cout << "Anul fabricatiei este:" << l1.getanFabricatie() << endl;
	cout << "Numarul de foldere din laptop:" << l1.getnrfoldere() << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l1.getnrfoldere(); i++) {
		cout << "Elemente:" << l1.getnrelementeF()[i] << endl;
	}
	cout << endl << endl;

	int nrelementeF1[] = { 3,2,12,10 };
	Laptop l2("Apple M2", 1.24, true, 2015, 4, nrelementeF1);

	cout << "Tipul procesorului este:" << l2.gettipprocesor() << endl;
	cout << "Greutatea laptopului in kg este:" << l2.getgreutateL() << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l2.getareAmprenta() << endl;
	cout << "Anul fabricatiei este:" << l2.getanFabricatie() << endl;
	cout << "Numarul de foldere din laptop:" << l2.getnrfoldere() << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l2.getnrfoldere(); i++) {
		cout << "Elemente:" << l2.getnrelementeF()[i] << endl;
	}
	cout << endl;


	int nrelementeF2[] = { 5,3,15 };
	Laptop l3("Apple M3", 1.04, 2019, 3, nrelementeF2);

	cout << "Tipul procesorului este:" << l3.gettipprocesor() << endl;
	cout << "Greutatea laptopului in kg este:" << l3.getgreutateL() << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l3.getareAmprenta() << endl;
	cout << "Anul fabricatiei este:" << l3.getanFabricatie() << endl;
	cout << "Numarul de foldere din laptop:" << l3.getnrfoldere() << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l3.getnrfoldere(); i++) {
		cout << "Elemente:" << l3.getnrelementeF()[i] << endl;
	}
	cout << endl;


	cout << "---------CONSTRUCTOR COPIERE 1----------" << endl;
	Laptop l4(l2);
	cout << "Obiectul sablon l2:" << endl;
	cout << "Tipul procesorului este:" << l2.gettipprocesor() << endl;
	cout << "Greutatea laptopului in kg este:" << l2.getgreutateL() << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l2.getareAmprenta() << endl;
	cout << "Anul fabricatiei este:" << l2.getanFabricatie() << endl;
	cout << "Numarul de foldere din laptop:" << l2.getnrfoldere() << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l2.getnrfoldere(); i++) {
		cout << "Elemente:" << l2.getnrelementeF()[i] << endl;
	}
	cout << endl;

	cout << "Obiectul nou creat l4:" << endl;
	cout << "Tipul procesorului este:" << l4.gettipprocesor() << endl;
	cout << "Greutatea laptopului in kg este:" << l4.getgreutateL() << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l4.getareAmprenta() << endl;
	cout << "Anul fabricatiei este:" << l4.getanFabricatie() << endl;
	cout << "Numarul de foldere din laptop:" << l4.getnrfoldere() << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l4.getnrfoldere(); i++) {
		cout << "Elemente:" << l4.getnrelementeF()[i] << endl;
	}

	cout << "----------------------------------------" << endl;
	cout << endl;
	cout << "___________APEL OPERATORUL=______________" << endl;
	cout << "Obiectul l3 inainte de a fi modificat:" << endl;
	cout << "Tipul procesorului este:" << l3.gettipprocesor() << endl;
	cout << "Greutatea laptopului in kg este:" << l3.getgreutateL() << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l3.getareAmprenta() << endl;
	cout << "Anul fabricatiei este:" << l3.getanFabricatie() << endl;
	cout << "Numarul de foldere din laptop:" << l3.getnrfoldere() << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l3.getnrfoldere(); i++) {
		cout << "Elemente:" << l3.getnrelementeF()[i] << endl;
	}
	cout << endl;
	cout << "Obiectul macheta l1" << endl;
	cout << "Tipul procesorului este:" << l1.gettipprocesor() << endl;
	cout << "Greutatea laptopului in kg este:" << l1.getgreutateL() << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l1.getareAmprenta() << endl;
	cout << "Anul fabricatiei este:" << l1.getanFabricatie() << endl;
	cout << "Numarul de foldere din laptop:" << l1.getnrfoldere() << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l1.getnrfoldere(); i++) {
		cout << "Elemente:" << l1.getnrelementeF()[i] << endl;
	}
	cout << endl;
	l3 = l1;
	cout << "Obiectul l3 modificat:" << endl;
	cout << "Tipul procesorului este:" << l3.gettipprocesor() << endl;
	cout << "Greutatea laptopului in kg este:" << l3.getgreutateL() << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l3.getareAmprenta() << endl;
	cout << "Anul fabricatiei este:" << l3.getanFabricatie() << endl;
	cout << "Numarul de foldere din laptop:" << l3.getnrfoldere() << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l3.getnrfoldere(); i++) {
		cout << "Elemente:" << l3.getnrelementeF()[i] << endl;
	}
	cout << endl;
	cout << "------Metoda---------" << endl;

	cout << "Tipul procesorului este:" << l2.gettipprocesor() << endl;
	cout << "Greutatea laptopului in kg este:" << l2.getgreutateL() << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l2.getareAmprenta() << endl;
	cout << "Anul fabricatiei este:" << l2.getanFabricatie() << endl;
	cout << "Numarul de foldere din laptop:" << l2.getnrfoldere() << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l2.getnrfoldere(); i++) {
		cout << "Elemente:" << l2.getnrelementeF()[i] << endl;
	}
	cout << endl;
	cout << "Numarul de elemente maxim din foldere este:" << l2.nrelemMaxim() << endl;

	cout << endl << endl << endl;

	cout << "___________APEL SETTERI____________" << endl;
	cout << "Obiectul l2 inainte de apelarea setterilor:" << endl;
	cout << "Tipul procesorului este:" << l2.gettipprocesor() << endl;
	cout << "Greutatea laptopului in kg este:" << l2.getgreutateL() << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l2.getareAmprenta() << endl;
	cout << "Anul fabricatiei este:" << l2.getanFabricatie() << endl;
	cout << "Numarul de foldere din laptop:" << l2.getnrfoldere() << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l2.getnrfoldere(); i++) {
		cout << "Elemente:" << l2.getnrelementeF()[i] << endl;
	}
	cout << endl;
	l2.settipprocesor("Intel Core i5");
	l2.settgreutateL(1.3);
	l2.setareAmprenta(0);
	l2.setareManualUtilizae(0);
	int elementeF3[] = {5,4};
	l2.setfoldere(2,elementeF3);

	cout << "Obiectul l2 dupa apelarea setterilor:" << endl;
	cout << "Tipul procesorului este:" << l2.gettipprocesor() << endl;
	cout << "Greutatea laptopului in kg este:" << l2.getgreutateL() << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l2.getareAmprenta() << endl;
	cout << "Anul fabricatiei este:" << l2.getanFabricatie() << endl;
	cout << "Numarul de foldere din laptop:" << l2.getnrfoldere() << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l2.getnrfoldere(); i++) {
		cout << "Elemente:" << l2.getnrelementeF()[i] << endl;
	}
	cout << endl;

	cout << "______APELARE OPERATORI << SI >>__________" << endl;
	cout << "Obiectul l3 este:" << endl << l3 << endl;
	cout << "Oniectul l2 inainte de a fi citit de a tastatura:" << endl << l2 << endl;
	cin >> l2;
	cout << endl;
	cout << l2;

	cout << endl << endl;


	Smartphone s1;
	cout << "TELEFOANE" << endl;
	cout << "****************************" << endl;
	cout << "Brand-ul telefonului este:" << s1.getfirmaTelefon() << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s1.getcapacitateStocare() << endl;
	cout << "Sistemul de operare este:" << s1.getSistemdeOperare() << endl;
	cout << "Are incarcator inclus?:" << s1.getareIncarcator() << endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s1.getnraplicatii() << endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s1.getnraplicatii(); i++) {
		cout << "Aplicatii:" << s1.getnumeapl()[i] << endl;
	}
	cout << "Are camera frontala?(DA-1,NU-0):" << s1.getareCamerafrontala() << endl;
	cout << endl;


	string numeaplicatii1[] = { "Magazin Play","Agenda","Poze","Setari" };

	Smartphone s2("Huawei", 256, "Android", true, 4, numeaplicatii1);
	cout << "Brand-ul telefonului este:" << s2.getfirmaTelefon() << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s2.getcapacitateStocare() << endl;
	cout << "Sistemul de operare este:" << s2.getSistemdeOperare() << endl;
	cout << "Are incarcator inclus?:" << s2.getareIncarcator() << endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s2.getnraplicatii() << endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s2.getnraplicatii(); i++) {
		cout << "Aplicatie:" << s2.getnumeapl()[i] << endl;
	}
	cout << "Are camera frontala?(DA-1,NU-0):" << s2.getareCamerafrontala() << endl;
	cout << endl;

	string nume2[] = { "Setari","Agenda","Apple Pay" };
	Smartphone s4("Apple", 3, nume2);
	cout << "Brand-ul telefonului este:" << s4.getfirmaTelefon() << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s4.getcapacitateStocare() << endl;
	cout << "Sistemul de operare este:" << s4.getSistemdeOperare() << endl;
	cout << "Are incarcator inclus?:" << s4.getareIncarcator() << endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s4.getnraplicatii() << endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s4.getnraplicatii(); i++) {
		cout << "Aplicatie:" << s4.getnumeapl()[i] << endl;
	}
	cout << "Are camera frontala?(DA-1,NU-0):" << s4.getareCamerafrontala() << endl;
	cout << endl;

	cout << "---------CONSTRUCTOR COPIERE 2----------" << endl;
	Smartphone s3(s1);
	cout << "Obiectul sablon s1:" << endl;
	cout << "Brand-ul telefonului este:" << s1.getfirmaTelefon() << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s1.getcapacitateStocare() << endl;
	cout << "Sistemul de operare este:" << s1.getSistemdeOperare() << endl;
	cout << "Are incarcator inclus?:" << s1.getareIncarcator() << endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s1.getnraplicatii() << endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s1.getnraplicatii(); i++) {
		cout << "Aplicatii:" << s1.getnumeapl()[i] << endl;
	}
	cout << "Are camera frontala?(DA-1,NU-0):" << s1.getareCamerafrontala() << endl;
	cout << endl;

	cout << "Obiectul nou creat s3:" << endl;
	cout << "Brand-ul telefonului este:" << s3.getfirmaTelefon() << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s3.getcapacitateStocare() << endl;
	cout << "Sistemul de operare este:" << s3.getSistemdeOperare() << endl;
	cout << "Are incarcator inclus?:" << s3.getareIncarcator() << endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s3.getnraplicatii() << endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s3.getnraplicatii(); i++) {
		cout << "Aplicatii:" << s3.getnumeapl()[i] << endl;
	}
	cout << "Are camera frontala?(DA-1,NU-0):" << s3.getareCamerafrontala() << endl;

	cout << "----------------------------------------" << endl;
	cout << "___________APEL OPERATORUL=______________" << endl;
	cout << "Obiectul s1 inainte de a fi modificat:" << endl;
	cout << "Brand-ul telefonului este:" << s1.getfirmaTelefon() << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s1.getcapacitateStocare() << endl;
	cout << "Sistemul de operare este:" << s1.getSistemdeOperare() << endl;
	cout << "Are incarcator inclus?:" << s1.getareIncarcator() << endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s1.getnraplicatii() << endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s1.getnraplicatii(); i++) {
		cout << "Aplicatii:" << s1.getnumeapl()[i] << endl;
	}
	cout << "Are camera frontala?(DA-1,NU-0):" << s1.getareCamerafrontala() << endl;
	cout << endl;
	cout << "Obiectul macheta s2:" << endl;
	cout << "Brand-ul telefonului este:" << s2.getfirmaTelefon() << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s2.getcapacitateStocare() << endl;
	cout << "Sistemul de operare este:" << s2.getSistemdeOperare() << endl;
	cout << "Are incarcator inclus?:" << s2.getareIncarcator() << endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s2.getnraplicatii() << endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s2.getnraplicatii(); i++) {
		cout << "Aplicatie:" << s2.getnumeapl()[i] << endl;
	}
	cout << "Are camera frontala?(DA-1,NU-0):" << s2.getareCamerafrontala() << endl;
	cout << endl;
	s1 = s2;
	cout << "Obiectul s1 modificat:" << endl;
	cout << "Brand-ul telefonului este:" << s1.getfirmaTelefon() << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s1.getcapacitateStocare() << endl;
	cout << "Sistemul de operare este:" << s1.getSistemdeOperare() << endl;
	cout << "Are incarcator inclus?:" << s1.getareIncarcator() << endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s1.getnraplicatii() << endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s1.getnraplicatii(); i++) {
		cout << "Aplicatii:" << s1.getnumeapl()[i] << endl;
	}
	cout << endl;
	cout << "Obiectul caruia i se aplica metoda:";
	cout << "Brand-ul telefonului este:" << s2.getfirmaTelefon() << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s2.getcapacitateStocare() << endl;
	cout << "Sistemul de operare este:" << s2.getSistemdeOperare() << endl;
	cout << "Are incarcator inclus?:" << s2.getareIncarcator() << endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s2.getnraplicatii() << endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s2.getnraplicatii(); i++) {
		cout << "Aplicatie:" << s2.getnumeapl()[i] << endl;
	}
	cout << "Are camera frontala?(DA-1,NU-0):" << s2.getareCamerafrontala() << endl;
	cout << endl;
	cout << "_______Metoda______" << endl;
	cout << " Numele aplicatiei de pe a 3 a pozitie este:" << s2.AfisareNumeApl(3) << endl;
	cout << "Numele aplicatiei de pe a 8 a pozitie este:" << s2.AfisareNumeApl(8);
	cout << endl;
	cout << "___________APEL SETTERI____________" << endl;
	cout<<"Obiectul s3 inainte de apelarea setterilor:" << endl;
	cout << "Brand-ul telefonului este:" << s3.getfirmaTelefon() << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s3.getcapacitateStocare() << endl;
	cout << "Sistemul de operare este:" << s3.getSistemdeOperare() << endl;
	cout << "Are incarcator inclus?:" << s3.getareIncarcator() << endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s3.getnraplicatii() << endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s3.getnraplicatii(); i++) {
		cout << "Aplicatii:" << s3.getnumeapl()[i] << endl;
	}
	cout << "Are camera frontala?(DA-1,NU-0):" << s3.getareCamerafrontala() << endl;

	s3.setfirmaTelefon("Lenovo");
	s3.setcapacitateStocare(32);
	s3.setareIncarcator(1);
	s3.setareCamerafrontala(false);
	
	string numeapl2[] = { "Instagram","Camera" };
	s3.setaplicatii(2, numeapl2);
	cout << "Obiectul s3 dupa apelarea setterilor:" << endl;
	cout << "Brand-ul telefonului este:" << s3.getfirmaTelefon() << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s3.getcapacitateStocare() << endl;
	cout << "Sistemul de operare este:" << s3.getSistemdeOperare() << endl;
	cout << "Are incarcator inclus?:" << s3.getareIncarcator() << endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s3.getnraplicatii() << endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s3.getnraplicatii(); i++) {
		cout << "Aplicatii:" << s3.getnumeapl()[i] << endl;
	}
	cout << endl;
	cout << "__________OPERATORII << SI >>______________" << endl;
	cout << "Obiectul s3:" << endl << s3 << endl;
	cout << "Obiectul s1 inainte de a fi citit de la tastatura:" << endl << s1;
	cin >> s1;
	cout << "Obiectul s1 dupa ce a fost citit de la tastatura:" << endl << s1 << endl;

      cout << endl << endl << endl;




	Tableta t1;
	cout << "TABLETE" << endl;
	cout << "****************************" << endl;
	cout << "Versiunea tabletei:" << t1.getversiunetableta() << endl;
	cout << "Are Face ID?(1-Da,0-Nu):  " << t1.getareFaceID() << endl;
	cout << "Codul de Identificare este:" << t1.getcodIdentificare() << endl;
	cout << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << t1.getnrdimensiunitableta() << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t1.getnrdimensiunitableta(); i++) {
		cout << "Dimensiunile tabletei:" << t1.getdimensiuni()[i] << endl;
	}
	cout << "Numele producatorului este:" << t1.getnumeProducator() << endl;
	cout << endl;

	float dimensiuni1[] = { 215.5,281.6,5.1 };
	Tableta t2("iPAD Air 13", true, 2925, 3, dimensiuni1);
	cout << "Versiunea tabletei:" << t2.getversiunetableta() << endl;
	cout << "Are Face ID?(1-Da,0-Nu):  " << t2.getareFaceID() << endl;
	cout << "Codul de Identificare este:" << t2.getcodIdentificare() << endl;
	cout << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << t2.getnrdimensiunitableta() << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t2.getnrdimensiunitableta(); i++) {
		cout << "Dimensiuni(L/l/h):" << t2.getdimensiuni()[i] << endl;
	}
	cout << "Numele producatorului este:" << t2.getnumeProducator() << endl;
	cout << endl;

	float dimensiuni2[] = { 134.3,234.5,4.5 };
	Tableta t4("iPad 9", 3, dimensiuni2);
	cout << "Versiunea tabletei:" << t4.getversiunetableta() << endl;
	cout << "Are Face ID?(1-Da,0-Nu):  " << t4.getareFaceID() << endl;
	cout << "Codul de Identificare este:" << t4.getcodIdentificare() << endl;
	cout << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << t4.getnrdimensiunitableta() << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t4.getnrdimensiunitableta(); i++) {
		cout << "Dimensiuni(L/l/h):" << t4.getdimensiuni()[i] << endl;
	}
	cout << "Numele producatorului este:" << t4.getnumeProducator() << endl;
	cout << endl;

	cout << "---------CONSTRUCTOR COPIERE 3----------" << endl;
	Tableta t3(t2);
	cout << "Obiectul sablon t2:" << endl;
	cout << "Versiunea tabletei:" << t2.getversiunetableta() << endl;
	cout << "Are Face ID?(1-Da,0-Nu):  " << t2.getareFaceID() << endl;
	cout << "Codul de Identificare este:" << t2.getcodIdentificare() << endl;
	cout << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << t2.getnrdimensiunitableta() << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t2.getnrdimensiunitableta(); i++) {
		cout << "Dimensiuni(L/l/h):" << t2.getdimensiuni()[i] << endl;
	}
	cout << "Numele producatorului este:" << t2.getnumeProducator() << endl;
	cout << endl;

	cout << "Obiectul nou creat t3:" << endl;
	cout << "Versiunea tabletei:" << t3.getversiunetableta() << endl;
	cout << "Are Face ID?(1-Da,0-Nu):  " << t3.getareFaceID() << endl;
	cout << "Codul de Identificare este:" << t3.getcodIdentificare() << endl;
	cout << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << t3.getnrdimensiunitableta() << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t3.getnrdimensiunitableta(); i++) {
		cout << "Dimensiuni(L/l/h):" << t3.getdimensiuni()[i] << endl;
	}
	cout << "Numele producatorului este:" << t3.getnumeProducator() << endl;
	cout << endl;
	cout << "----------------------------------------" << endl;
	cout << "___________APEL OPERATORUL=______________" << endl;
	cout << "Obiectul t2 inainte de a fi modificat:" << endl;
	cout << "Versiunea tabletei:" << t2.getversiunetableta() << endl;
	cout << "Are Face ID?(1-Da,0-Nu):  " << t2.getareFaceID() << endl;
	cout << "Codul de Identificare este:" << t2.getcodIdentificare() << endl;
	cout << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << t2.getnrdimensiunitableta() << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t2.getnrdimensiunitableta(); i++) {
		cout << "Dimensiuni(L/l/h):" << t2.getdimensiuni()[i] << endl;
	}
	cout << "Numele producatorului este:" << t2.getnumeProducator() << endl;
	cout << endl;

	cout << "Obiectul t1 macheta:" << endl;
	cout << "Versiunea tabletei:" << t1.getversiunetableta() << endl;
	cout << "Are Face ID?(1-Da,0-Nu):  " << t1.getareFaceID() << endl;
	cout << "Codul de Identificare este:" << t1.getcodIdentificare() << endl;
	cout << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << t1.getnrdimensiunitableta() << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t1.getnrdimensiunitableta(); i++) {
		cout << "Dimensiunile tabletei:" << t1.getdimensiuni()[i] << endl;
	}
	cout << "Numele producatorului este:" << t1.getnumeProducator() << endl;
	cout << endl;
	t2 = t1;
	cout << "Obiectul t2 modificat:" << endl;
	cout << "Versiunea tabletei:" << t2.getversiunetableta() << endl;
	cout << "Are Face ID?(1-Da,0-Nu):  " << t2.getareFaceID() << endl;
	cout << "Codul de Identificare este:" << t2.getcodIdentificare() << endl;
	cout << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << t2.getnrdimensiunitableta() << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t2.getnrdimensiunitableta(); i++) {
		cout << "Dimensiuni(L/l/h):" << t2.getdimensiuni()[i] << endl;
	}
	cout << "Numele producatorului este:" << t2.getnumeProducator() << endl;
	cout << endl;
	cout << "--------METODA-------" << endl;
	cout << "Cerinta:" << "Sa se implementeze o metoda care afiseaza dimensiunile unei tablete si sa se adauge o noua dimensiune a acesteia" << endl;
	cout << "Obiectul  t3 inainte de a adauga o dimensiune noua:" << endl;
	t3.afisareDimensiuniTableta();
	cout << endl << endl;

	t3.adaugaDimensiuneNoua(330);

	cout << "Obiectul m1 dupa ce a fost adaugata o dimensiune noua:" << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t3.getnrdimensiunitableta(); i++) {
		cout << "Dimensiuni(L/l/h/dimensiune ecran):" << t3.getdimensiuni()[i] << endl;
	}

	cout << "___________APELARE SETTERI___________" << endl;
	cout << "Obiectul t3 inainte de a apela setterii" << endl;
	cout << "Versiunea tabletei:" << t3.getversiunetableta() << endl;
	cout << "Are Face ID?(1-Da,0-Nu):  " << t3.getareFaceID() << endl;
	cout << "Codul de Identificare este:" << t3.getcodIdentificare() << endl;
	cout << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << t3.getnrdimensiunitableta() << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t3.getnrdimensiunitableta(); i++) {
		cout << "Dimensiuni(L/l/h):" << t3.getdimensiuni()[i] << endl;
	}
	cout << "Numele producatorului este:" << t3.getnumeProducator() << endl;

	t3.setversiunetableta("HUAWEI MatePad 12 X");
	t3.setnumeProducator("HUAWEI");
	t3.setareFaceID(false);
	float dimensiuniNOI[] = { 134.2,3.1 };
	t3.setdimensiuni(2, dimensiuniNOI);

	cout << "Obiectul t3 dupa apelarea setterilor" << endl;
	cout << "Versiunea tabletei:" << t3.getversiunetableta() << endl;
	cout << "Are Face ID?(1-Da,0-Nu):  " << t3.getareFaceID() << endl;
	cout << "Codul de Identificare este:" << t3.getcodIdentificare() << endl;
	cout << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << t3.getnrdimensiunitableta() << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t3.getnrdimensiunitableta(); i++) {
		cout << "Dimensiuni(L/l/h):" << t3.getdimensiuni()[i] << endl;
	}
	cout << "Numele producatorului este:" << t3.getnumeProducator() << endl;
	cout << endl;
	cout << "___________OPERATOR >> SI <<_________" << endl;
	cout << "Obiectul t4:" << endl << t4 << endl << endl;
	cout << "Obiectul t4 inainte de citire:" << endl << t4 << endl;
	cin >> t4;
	cout << "Obiectul t4 dupa citirea de la tastatura:" << endl<<t4<<endl;


}
