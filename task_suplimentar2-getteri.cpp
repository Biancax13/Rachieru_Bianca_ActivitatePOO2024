
//Alegeți trei obiecte din realitate. Cele trei obiecte trebuie să fie din același domeniu. 

//
//Pentru cele trei obiecte realizați trei clase care să conțină atribute specifice fiecărui obiect în parte.
//
//În cele trei clase trebuie să aveți atribute normale, atribute statice și atribute constante. Atributele le definiți în zona publică a clasei. În fiecare clasă trebuie să aveți cel puțin un pointer pentru care veți aloca spațiu in HEAP.
//
//Realizați pentru fiecare clasă cel puțin 3 constructori cu număr diferit de parametri (în total vor fi 9 constructori). În cadrul constructorilor inițializați toate atributele claselor. Aveți grija la inițializarea atributelor constante și a atributelor statice.
//
//În fiecare clasă realizați câte o funcție statică pentru orice tip de procesare sau calcul.
//
//În funcția main creați, inițializați și afișați câte trei obiecte de tipul fiecărei clase, astfel încât să apelați toți constructorii.
//
//Realizati toate clasele in acelasi fisier CPP, una sub cealalta, iar in partea de final a fisierului cu cod sursa implementati functia main in cadrul careia testati toti constructorii implementati pentru clasele implementate.
//Varianta fara getteri(atributele sunt in zona publica a clasei deci avem acces la ele)
#include<iostream>
#include<string>

using namespace std;

class Laptop {
public:
	string tipprocesor;
	float greutateL;//in kg
	bool areAmprenta;
	const float anFabricatie;
	static bool areManualdeUtilizare;
	int nrfoldere;
	int* nrelementeF;//vector care arata cate elemente are fiecare folder din laptop

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


};
bool Laptop::areManualdeUtilizare = true;


class Smartphone {
public:
	string firmaTelefon;
	int capacitateStocare;
	bool areIncarcator;
	const string SistemdeOperare;
	static bool areCamerafrontala;//toate telefoanele au camera frontala
	int nraplicatii;
	string* numeapl;//vector care arata numele tuturor aplicatiilor din telefon(din fabrica)

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

	//Sa se afiseze numele aplicatiilor de pe pozitia 3 si 8 din vectorul string* numeapl
	string AfisareNumeApl(int pozitieCautata) {
		if (pozitieCautata > 0 && pozitieCautata < this->nraplicatii) {
			return this->numeapl[pozitieCautata];
		}
		else
			return "Nu exista nicio aplicatie la pozitia cautata!";
	}


};
bool Smartphone::areCamerafrontala = true;



class Tableta {
public:
	string versiunetableta;
	bool areFaceID;
	const int codIdentificare;
	static string numeProducator;//toate tabletele au acelasi producator
	int nrdimensiunitableta;
	float* dimensiuni;//in mm,vector care arata dimensiunile unei tablete


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

	//sa se implementeze o metoda care afiseaza dimensiunile unei tablete si sa se adauge o noua dimensiune a acesteia in vectorul float* dimensiuni
	void afisareDimensiuniTableta() {
		cout << "Dimensiuni:" << endl;
		for (int i = 0; i < this->nrdimensiunitableta; i++) {
			cout << "Dimensiuni(L/l/h):" << this->dimensiuni[i] << endl;
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


};
string Tableta::numeProducator = "Apple Inc.";

void main() {

	Laptop l1;
	cout << "LAPTOPURI" << endl;
	cout << "****************************" << endl;
	cout << "Tipul procesorului este:" << l1.tipprocesor << endl;
	cout << "Greutatea laptopului in kg este:" << l1.greutateL << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l1.areAmprenta << endl;
	cout << "Anul fabricatiei este:" << l1.anFabricatie << endl;
	cout << "Numarul de foldere din laptop:" << l1.nrfoldere << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l1.nrfoldere; i++) {
		cout << "Elemente:" << l1.nrelementeF[i] << endl;
	}
	cout << endl << endl;

	int nrelementeF1[] = { 3,2,12,10 };
	Laptop l2("Apple M2", 1.24, true, 2015, 4, nrelementeF1);

	cout << "Tipul procesorului este:" << l2.tipprocesor << endl;
	cout << "Greutatea laptopului in kg este:" << l2.greutateL << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l2.areAmprenta << endl;
	cout << "Anul fabricatiei este:" << l2.anFabricatie << endl;
	cout << "Numarul de foldere din laptop:" << l2.nrfoldere << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l2.nrfoldere; i++) {
		cout << "Elemente:" << l2.nrelementeF[i] << endl;
	}
	cout << endl;


	int nrelementeF2[] = { 5,3,15 };
	Laptop l3("Apple M3", 1.04, 2019, 3, nrelementeF2);

	cout << "Tipul procesorului este:" << l3.tipprocesor << endl;
	cout << "Greutatea laptopului in kg este:" << l3.greutateL << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l3.areAmprenta << endl;
	cout << "Anul fabricatiei este:" << l3.anFabricatie << endl;
	cout << "Numarul de foldere din laptop:" << l3.nrfoldere << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l3.nrfoldere; i++) {
		cout << "Elemente:" << l3.nrelementeF[i] << endl;
	}
	cout << endl;


	cout << "---------CONSTRUCTOR COPIERE 1----------" << endl;
	Laptop l4(l2);
	cout << "Obiectul sablon l2:" << endl;
	cout << "Tipul procesorului este:" << l2.tipprocesor << endl;
	cout << "Greutatea laptopului in kg este:" << l2.greutateL << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l2.areAmprenta << endl;
	cout << "Anul fabricatiei este:" << l2.anFabricatie << endl;
	cout << "Numarul de foldere din laptop:" << l2.nrfoldere << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l2.nrfoldere; i++) {
		cout << "Elemente:" << l2.nrelementeF[i] << endl;
	}
	cout << endl;

	cout << "Obiectul nou creat l4:" << endl;
	cout << "Tipul procesorului este:" << l4.tipprocesor << endl;
	cout << "Greutatea laptopului in kg este:" << l4.greutateL << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l4.areAmprenta << endl;
	cout << "Anul fabricatiei este:" << l4.anFabricatie << endl;
	cout << "Numarul de foldere din laptop:" << l4.nrfoldere << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l4.nrfoldere; i++) {
		cout << "Elemente:" << l4.nrelementeF[i] << endl;
	}

	cout << "----------------------------------------" << endl;
	cout << endl;
	cout << "___________APEL OPERATORUL=______________" << endl;
	cout << "Obiectul l3 inainte de a fi modificat:" << endl;
	cout << "Tipul procesorului este:" << l3.tipprocesor << endl;
	cout << "Greutatea laptopului in kg este:" << l3.greutateL << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l3.areAmprenta << endl;
	cout << "Anul fabricatiei este:" << l3.anFabricatie << endl;
	cout << "Numarul de foldere din laptop:" << l3.nrfoldere << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l3.nrfoldere; i++) {
		cout << "Elemente:" << l3.nrelementeF[i] << endl;
	}
	cout << endl;
	cout << "Obiectul macheta l1" << endl;
	cout << "Tipul procesorului este:" << l1.tipprocesor << endl;
	cout << "Greutatea laptopului in kg este:" << l1.greutateL << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l1.areAmprenta << endl;
	cout << "Anul fabricatiei este:" << l1.anFabricatie << endl;
	cout << "Numarul de foldere din laptop:" << l1.nrfoldere << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l1.nrfoldere; i++) {
		cout << "Elemente:" << l1.nrelementeF[i] << endl;
	}
	cout << endl;
	l3 = l1;
	cout << "Obiectul l3 modificat:" << endl;
	cout << "Tipul procesorului este:" << l3.tipprocesor << endl;
	cout << "Greutatea laptopului in kg este:" << l3.greutateL << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l3.areAmprenta << endl;
	cout << "Anul fabricatiei este:" << l3.anFabricatie << endl;
	cout << "Numarul de foldere din laptop:" << l3.nrfoldere << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l3.nrfoldere; i++) {
		cout << "Elemente:" << l3.nrelementeF[i] << endl;
	}
	cout << endl;
	cout << "------Metoda---------" << endl;

	cout << "Tipul procesorului este:" << l2.tipprocesor << endl;
	cout << "Greutatea laptopului in kg este:" << l2.greutateL << endl;
	cout << "Laptopul are amprenta pentru deblocare?(0-da,1-nu):" << l2.areAmprenta << endl;
	cout << "Anul fabricatiei este:" << l2.anFabricatie << endl;
	cout << "Numarul de foldere din laptop:" << l2.nrfoldere << endl;
	cout << "Nr de elemente din Foldere:" << endl;
	for (int i = 0; i < l2.nrfoldere; i++) {
		cout << "Elemente:" << l2.nrelementeF[i] << endl;
	}

	cout << endl;
	cout << "Numarul de elemente maxim din foldere este:" << l2.nrelemMaxim() << endl;

	cout << endl << endl << endl;




	Smartphone s1;
	cout << "TELEFOANE" << endl;
	cout << "****************************" << endl;
	cout << "Brand-ul telefonului este:" << s1.firmaTelefon << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s1.capacitateStocare<< endl;
	cout << "Sistemul de operare este:" << s1.SistemdeOperare << endl;
	cout << "Are incarcator inclus?:" << s1.areIncarcator<< endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s1.nraplicatii<< endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s1.nraplicatii; i++) {
		cout << "Aplicatii:" << s1.numeapl[i] << endl;
	}
	cout << "Are camera frontala?(DA-1,NU-0):" << s1.areCamerafrontala << endl;
	cout << endl;


	string numeaplicatii1[] = { "Magazin Play","Agenda","Poze","Setari" };

	Smartphone s2("Huawei", 256, "Android", true, 4, numeaplicatii1);
	cout << "Brand-ul telefonului este:" << s2.firmaTelefon << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s2.capacitateStocare << endl;
	cout << "Sistemul de operare este:" << s2.SistemdeOperare << endl;
	cout << "Are incarcator inclus?:" << s2.areIncarcator << endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s2.nraplicatii<< endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s2.nraplicatii; i++) {
		cout << "Aplicatie:" << s2.numeapl[i] << endl;
	}
	cout << "Are camera frontala?(DA-1,NU-0):" << s2.areCamerafrontala<< endl;
	cout << endl;

	string nume2[] = { "Setari","Agenda","Apple Pay" };
	Smartphone s4("Apple", 3, nume2);
	cout << "Brand-ul telefonului este:" << s4.firmaTelefon << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s4.capacitateStocare << endl;
	cout << "Sistemul de operare este:" << s4.SistemdeOperare << endl;
	cout << "Are incarcator inclus?:" << s4.areIncarcator << endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s4.nraplicatii << endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s4.nraplicatii; i++) {
		cout << "Aplicatie:" << s4.numeapl[i] << endl;
	}
	cout << "Are camera frontala?(DA-1,NU-0):" << s4.areCamerafrontala<< endl;
	cout << endl;

	cout << "---------CONSTRUCTOR COPIERE 2----------" << endl;
	Smartphone s3(s1);
	cout << "Obiectul sablon s1:" << endl;
	cout << "Brand-ul telefonului este:" << s1.firmaTelefon<< endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s1.capacitateStocare << endl;
	cout << "Sistemul de operare este:" << s1.SistemdeOperare << endl;
	cout << "Are incarcator inclus?:" << s1.areIncarcator<< endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s1.nraplicatii << endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s1.nraplicatii; i++) {
		cout << "Aplicatii:" << s1.numeapl[i] << endl;
	}
	cout << "Are camera frontala?(DA-1,NU-0):" << s1.areCamerafrontala << endl;
	cout << endl;

	cout << "Obiectul nou creat s3:" << endl;
	cout << "Brand-ul telefonului este:" << s3.firmaTelefon << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s3.capacitateStocare << endl;
	cout << "Sistemul de operare este:" << s3.SistemdeOperare << endl;
	cout << "Are incarcator inclus?:" << s3.areIncarcator << endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s3.nraplicatii << endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s3.nraplicatii; i++) {
		cout << "Aplicatii:" << s3.numeapl[i] << endl;
	}
	cout << "Are camera frontala?(DA-1,NU-0):" << s3.areCamerafrontala << endl;
	cout << endl;

	cout << "----------------------------------------" << endl;
	cout << "___________APEL OPERATORUL=______________" << endl;
	cout << "Obiectul s1 inainte de a fi modificat:" << endl;
	cout << "Brand-ul telefonului este:" << s1.firmaTelefon << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s1.capacitateStocare << endl;
	cout << "Sistemul de operare este:" << s1.SistemdeOperare << endl;
	cout << "Are incarcator inclus?:" << s1.areIncarcator << endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s1.nraplicatii << endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s1.nraplicatii; i++) {
		cout << "Aplicatii:" << s1.numeapl[i] << endl;
	}
	cout << "Are camera frontala?(DA-1,NU-0):" << s1.areCamerafrontala << endl;
	cout << endl;
	cout << "Obiectul macheta s2:" << endl;
	cout << "Brand-ul telefonului este:" << s2.firmaTelefon << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s2.capacitateStocare << endl;
	cout << "Sistemul de operare este:" << s2.SistemdeOperare << endl;
	cout << "Are incarcator inclus?:" << s2.areIncarcator << endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s2.nraplicatii << endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s2.nraplicatii; i++) {
		cout << "Aplicatii:" << s2.numeapl[i] << endl;
	}
	cout << "Are camera frontala?(DA-1,NU-0):" << s2.areCamerafrontala << endl;
	cout << endl;
	s1 = s2;
	cout << "Obiectul s1 modificat:" << endl;
	cout << "Brand-ul telefonului este:" << s1.firmaTelefon << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s1.capacitateStocare << endl;
	cout << "Sistemul de operare este:" << s1.SistemdeOperare << endl;
	cout << "Are incarcator inclus?:" << s1.areIncarcator << endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s1.nraplicatii << endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s1.nraplicatii; i++) {
		cout << "Aplicatii:" << s1.numeapl[i] << endl;
	}
	cout << "Are camera frontala?(DA-1,NU-0):" << s1.areCamerafrontala << endl;
	cout << endl;

	cout << "Obiectul caruia i se aplica metoda:";
	cout << "Brand-ul telefonului este:" << s2.firmaTelefon << endl;
	cout << "Capacitatea de stocare in GB a telefonului este:" << s2.capacitateStocare << endl;
	cout << "Sistemul de operare este:" << s2.SistemdeOperare << endl;
	cout << "Are incarcator inclus?:" << s2.areIncarcator << endl;
	cout << "Nr aplicatiilor din fabrica ale telefonului este de:" << s2.nraplicatii << endl;
	cout << "Aplicatii:" << endl;

	for (int i = 0; i < s2.nraplicatii; i++) {
		cout << "Aplicatii:" << s2.numeapl[i] << endl;
	}
	cout << "Are camera frontala?(DA-1,NU-0):" << s2.areCamerafrontala << endl;

	cout << endl;
	cout << "_______Metoda______" << endl;
	cout << " Numele aplicatiei de pe a 3 a pozitie este:" << s2.AfisareNumeApl(3) << endl;
	cout << "Numele aplicatiei de pe a 8 a pozitie este:" << s2.AfisareNumeApl(8);

	cout << endl << endl << endl;




	Tableta t1;
	cout << "TABLETE" << endl;
	cout << "****************************" << endl;
	cout << "Versiunea tabletei:" << t1.versiunetableta << endl;
	cout << "Are Face ID?(1-Da,0-Nu):  " << t1.areFaceID << endl;
	cout << "Codul de Identificare este:" << t1.codIdentificare << endl;
	cout << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << t1.nrdimensiunitableta << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t1.nrdimensiunitableta; i++) {
		cout << "Dimensiunile tabletei:" << t1.dimensiuni[i] << endl;
	}
	cout << "Numele producatorului este:" << t1.numeProducator << endl;
	cout << endl;

	float dimensiuni1[] = { 215.5,281.6,5.1 };
	Tableta t2("iPAD Air 13", true, 2925, 3, dimensiuni1);
	cout << "Versiunea tabletei:" << t2.versiunetableta << endl;
	cout << "Are Face ID?(1-Da,0-Nu):  " << t2.areFaceID << endl;
	cout << "Codul de Identificare este:" << t2.codIdentificare << endl;
	cout << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << t2.nrdimensiunitableta << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t2.nrdimensiunitableta; i++) {
		cout << "Dimensiunile tabletei:" << t2.dimensiuni[i] << endl;
	}
	cout << "Numele producatorului este:" << t2.numeProducator << endl;
	cout << endl;

	float dimensiuni2[] = { 134.3,234.5,4.5 };
	Tableta t4("iPad 9", 3, dimensiuni2);
	cout << "Versiunea tabletei:" << t4.versiunetableta << endl;
	cout << "Are Face ID?(1-Da,0-Nu):  " << t4.areFaceID << endl;
	cout << "Codul de Identificare este:" << t4.codIdentificare << endl;
	cout << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << t4.nrdimensiunitableta << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t4.nrdimensiunitableta; i++) {
		cout << "Dimensiunile tabletei:" << t4.dimensiuni[i] << endl;
	}
	cout << "Numele producatorului este:" << t4.numeProducator << endl;
	cout << endl;

	cout << "---------CONSTRUCTOR COPIERE 3----------" << endl;
	Tableta t3(t2);
	cout << "Obiectul sablon t2:" << endl;
	cout << "Versiunea tabletei:" << t2.versiunetableta << endl;
	cout << "Are Face ID?(1-Da,0-Nu):  " << t2.areFaceID << endl;
	cout << "Codul de Identificare este:" << t2.codIdentificare << endl;
	cout << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << t2.nrdimensiunitableta << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t2.nrdimensiunitableta; i++) {
		cout << "Dimensiunile tabletei:" << t2.dimensiuni[i] << endl;
	}
	cout << "Numele producatorului este:" << t2.numeProducator << endl;
	cout << endl;

	cout << "Obiectul nou creat t3:" << endl;
	cout << "Versiunea tabletei:" << t3.versiunetableta << endl;
	cout << "Are Face ID?(1-Da,0-Nu):  " << t3.areFaceID << endl;
	cout << "Codul de Identificare este:" << t3.codIdentificare << endl;
	cout << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << t3.nrdimensiunitableta << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t3.nrdimensiunitableta; i++) {
		cout << "Dimensiunile tabletei:" << t3.dimensiuni[i] << endl;
	}
	cout << "Numele producatorului este:" << t3.numeProducator << endl;
	cout << endl;

	cout << "----------------------------------------" << endl;
	cout << "___________APEL OPERATORUL=______________" << endl;
	cout << "Obiectul t2 inainte de a fi modificat:" << endl;
	cout << "Versiunea tabletei:" << t2.versiunetableta << endl;
	cout << "Are Face ID?(1-Da,0-Nu):  " << t2.areFaceID << endl;
	cout << "Codul de Identificare este:" << t2.codIdentificare << endl;
	cout << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << t2.nrdimensiunitableta << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t2.nrdimensiunitableta; i++) {
		cout << "Dimensiunile tabletei:" << t2.dimensiuni[i] << endl;
	}
	cout << "Numele producatorului este:" << t2.numeProducator << endl;
	cout << endl;

	cout << "Obiectul t1 macheta:" << endl;
	cout << "Versiunea tabletei:" << t1.versiunetableta << endl;
	cout << "Are Face ID?(1-Da,0-Nu):  " << t1.areFaceID << endl;
	cout << "Codul de Identificare este:" << t1.codIdentificare << endl;
	cout << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << t1.nrdimensiunitableta << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t1.nrdimensiunitableta; i++) {
		cout << "Dimensiunile tabletei:" << t1.dimensiuni[i] << endl;
	}
	cout << "Numele producatorului este:" << t1.numeProducator << endl;
	cout << endl;
	t2 = t1;
	cout << "Versiunea tabletei:" << t2.versiunetableta << endl;
	cout << "Are Face ID?(1-Da,0-Nu):  " << t2.areFaceID << endl;
	cout << "Codul de Identificare este:" << t2.codIdentificare << endl;
	cout << "Numarul de dimensiuni cunoscute ale tabletei sunt:" << t2.nrdimensiunitableta << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t2.nrdimensiunitableta; i++) {
		cout << "Dimensiunile tabletei:" << t2.dimensiuni[i] << endl;
	}
	cout << "Numele producatorului este:" << t2.numeProducator << endl;
	cout << endl;

	cout << "--------METODA-------" << endl;
	cout << "Cerinta:" << "Sa se implementeze o metoda care afiseaza dimensiunile unei tablete si sa se adauge o noua dimensiune a acesteia" << endl;
	cout << "Obiectul  t3 inainte de a adauga o dimensiune noua:" << endl;
	t3.afisareDimensiuniTableta();
	cout << endl << endl;

	t3.adaugaDimensiuneNoua(330);

	cout << "Obiectul m1 dupa ce a fost adaugata o dimensiune noua:" << endl;
	cout << "Dimensiuni:" << endl;
	for (int i = 0; i < t3.nrdimensiunitableta; i++) {
		cout << "Dimensiuni(L/l/h/dimensiune ecran):" << t3.dimensiuni[i] << endl;
	}

}
