#define _CRT_SECURE_NO_WARNINGS //PE PRIMA LINIE DE COD NEAPARAT (SAU DIN SETARI PENTRU VERSIUNI NOI DE VISUAL STUDIO)

//BIBLITOECI
#include<iostream>
//iostream = input output stream
//input stream - istream (citire de la tastatura) comanda care ne permite sa citim de la tastatura este cin>>
//output stream - ostream (afisare pe consola) comanda care ne permite sa afisam pe consola este cout<<
#include<string>
#include<fstream>
using namespace std;




//TIPURILE DE DATE IN C++

//PENTRU VALORI NUMERICE
//int - valori numere intregi (fara zecimale) ex: 0, 100, -50, 1972527289191673, -7282782516189 etc - 4 OCTETI
//int varsta=24;
//int notaPOO=10;
//int nrCursuri=6;
//int inaltimeCM=174;

//float - valori numere reale (cu zecimale) ex: 0.99, 100.7, -700.89, 45328282763654.99, -162532982962.67 etc - 4 OCTETI
//float medieAdmitere=9.80;
//float pretProdus=89.66;
//float inaltimeM=1.74;
//float distantaKM=265.9;

//double - valori numere reale (cu zecimale) ex: 0.9946892928273647, 100.7263748949282762, -700.846464892279, 45328282763654.9274759576279, -162532982962.67574990292787 etc - 8 OCTETI
//diferenta dintre float si double este ca variabila double este mult mai precisa, deoarece suporta mult mai multe zecimale in comparatie cu float-ul
//double medieAdmitere=9.80;
//double pretProdus=89.66;
//double inaltimeM=1.74;
//double distantaKM=265.9;




//PENTRU VALORI DE TIP ADEVARAT/FALS TRUE=1 / FALSE=0 (boolean) - 1 OCTET
//bool esteMajora=1(da, persoana este majora) / 0(nu, persoana nu este majora)
//bool esteNonStop=1(da, magazinul este non-stop) / 0(nu, magazinul nu este non-stop)
//bool sistemOperareAndroid=1(da, este Android) / 0(nu, nu este Android)
//bool examenPromovat=1(da, examenul este promovat) / 0(nu, examenul nu este promovat)




//PENTRU SIRURI DE CARACTERE
//char - pentru a stoca un singur caracter (o litera/o cifra/un caracter alfanumeric) ex: 1, a, A, !, ^ - 1 OCTET
//char serieFacultate='A';
//char gen='F';
//char initialaTata='S';

//!!!!!!!!!!!!!!!!!!!!!!!!!NU ESTE TIP DE DATA, CI ESTE O BIBLIOTECA!!!!!!!!!!!!!!!!!!!!!
//string - se foloseste pentru siruri de caractere (cuvinte, propozitii, fraze, denumiri, nume... etc) (intr-un string se pot utiliza litere, cifre si caractere alfanumerice)
//string-ul nu este un tip de data, deoarece nu este recunoscut by-default de catre compilator (asa cum sunt recunoscute celelalte tipuri de date, int, float, double, bool, char)
//string-ul este recunoscut de catre compilator abia dupa ce introducem biblioteca aferenta si namespace-ul std
//string-ul deoarece nu este un tip de data, nu ocupa o memorie standard ca int/float/double/bool/char, ci memoria unui string este variabila in functie de ceea ce o sa stocam noi in variabila string
//1 octet/caracter - inclusiv spatiile
//string numePrenume="Raluca Bobe" - 11 OCTETI
//string adresa="str Independentei nr.56" - 23 OCTETI
//string numeFacultate="ASE - CSIE" - 10 OCTETI







//ATRIBUTE PARTICULARE ALE UNEI CLASE: ATRIBUTUL CONSTANT SI ATRIBUTUL STATIC

//ATRIBUTUL CONSTANT - ESTE ATRIBUTUL A CARUI VALOARE RAMANE CONSTANTA PE TOATA DURATA DE VIATA A OBIECTULUI (VALOAREA RESPECTIVA NU SE MAI POATE MODIFICA DUPA CE I-AM ATRIBUIT-O UNUI OBIECT)
//CUM SE DECLARA UN ATRIBUT CONSTANT: cuvantul cheie "const"  +  tipul de data al atributului (int/float/double/bool/char) + denumireAtribut;
//ex: const int anulNasterii; (pentru clasa Persoana)
//ex: const int nrMatricol; (pentru clasa Student)
//ex: const int CNP; (pentru clasa Pensionar)
//ex: const string dataNasterii; (pentru clasa Student)
//ATRIBUTUL CONSTANT NU POATE FI LASAT NEINITIALIZAT, DEOARECE GENEREAZA EROARE (ATRIBUTELE SIMPLE PUTEM SA LE LASAM NEINITIALIZATE, NU PRIMIM EROARE)
//ATRIBUTUL CONSTANT SE INITIALIEAZA IN EXTERIORUL CONSTRUCTORULUI, ADICA IN LISTA DE INITIALIZARI A CONSTRUCTORULUI

//ATRIBUTUL STATIC - ESTE ATRIBUTUL A CARUI VALORE NU APARTINE OBIECTELOR (EL NU CAPATA O VALORE PROPRIE PENTRU FIECARE OBIECT IN PARTE, CI CAPATA O UNICA VALORE PENTRU TOATE OBIECTELE DIN CLASA)
//CUM SE DECLARA UN ATRIBUT STATIC: cuvantul cheie "static"  +  tipul de data al atributului (int/float/double/bool/char) + denumireAtribut;
//ex: static int nrRotiMasina=4; (pentru clasa Masina)
//ex: static float taxaRestanta=75; (pentru clasa Student)
//ex: static float bursaMerit=1000; (pentru clasa Stuent)
//ATRIBUTUL STATIC NU SE INITIALIZEAZA IN CLASA/IN CONSTRUCTORI CA SI RESTUL ATRIBUTELOR, DEOARECE ATRIBUTUL STATIC NU PREIA VALORI PROPRII PENTRU FIECARE OBIECT IN PARTE 
//ATRIBUTUL STATIC SE INITIALIZEAZA O SINGURA DATA, IN EXTERIORUL CLASEI DUPA REGULA: tipData numeClasa :: (operatorul de rezolutie) numeAtribut=valoare;





//CLASA - ESTE O STRUCTURA DE DATE CARE CONTINE: ATRIBUTE/VARIABILE (DEFINESC STRUCTURA CLASEI) SI FUNCTII/METODE (DEFINESC COMPORTAMENTUL CLASEI)
//O CLASA POATE FI ORICE REPER DIN REALITATEA CE NE INCONJOARA (NU NEAPARAT OBIECT TANGIBIL, CI ORICE REPER PE CARE DORIM NOI SA IL ALEGEM DIN VIATA DE ZI CU ZI) EX: o persoana, o cladire, o institutie publica, un domeniu economic, o actiune, un animal etc 

//CLASA STUDENT:
//int varsta;
//string numePrenume;
//bool esteLaBuget;
//float medieAdmitere;
//char initialaTata;

//CLASA APARTAMENT:
//int nrCamere;
//float pretEUR;
//bool areCentralaProprie;
//string numeProprietar;

//CLASA FARMACIE:
//int nrProduse;
//float salariuMediuFarmacie;
//bool areSistemAlarma;
//string denumireFarmacie;

//CUM NE DEFINIM O CLASA IN COD IN C++:
//PAS 1 - cuvantul cheie class + numele clasei (LA SINGULAR SI CU LITERA MARE)
//PAS 2 - {}; !!!!NU UITATI DE ; LA FINAL!!!!
//PAS 3 - TOT CE APARTINE DE CLASA (ATRIBUTE SI FUNCTII) SE VOR SCRIE IN INTERIORUL ACOLADELOR




//PRINCIPIUL 1 AL POO-ULUI ESTE ABSTRACTIZAREA
//REPREZINTA TRANSPUNEREA DIN REALITATE IN COD SURSA A UNUI OBIECT/REPER PRIN CREAREA UNEI CLASE SI ALEGEREA ATRIBUTELOR CARE CARACTERIZEAZA CLASA
//REPREZINTA PROCEDUL PRIN CARE NE ALEGEM UN OBIECT/UN REPER DIN REALITATE, NE GANDIM CARE SUNT CARACTERISTICILE PRINCIPALE ALE ACESTUIA, ACESTE CARACTERISTICI LE PUNEM IN VARIABILE, IAR VARIABILELE LE PUNEM INTR-O CLASA DENUMITA CONFORM OBIECTULUI/REPERULUI ALES




//OBIECTUL - REPREZINTA O INSTANTA A UNEI CLASE (PE BAZA CLASEI SUNT CREATE OBIECTE INDIVIDUALE/INSTANTE INDIVIDUALE CARE VOR AVEA VALORI PROPRII PENTRU ATRIBUTELE DIN CLASA)
//!!!!!!!A NU SE CONFUNDA NOTIUNEA DE CLASA CU CEA DE OBIECT!!!!!!!
//CLASA ESTE SCHEMA/MATRITA/SABLONUL PE BAZA CAREIA OBIECTELE SUNT CREATE, IAR OBIECTELE SUNT INSTANTE ALE CLASEI CU VALORI PROPRII PENTRU ATRIBUTE




//ZONE DE ACCES DINTR-O CLASA:
//public - ceea ce se afla in zona public a unei clasei, o sa poata fi accesat atat din interiorul clasei, cat si din exteriorul clasei 
//private - ceea ce se afla in zona private a unei clase, o sa poata fi accesat din interiorul clasei, dar nu si din exteriorul ei
//protected





//PRINCIPIUL AL 2-LEA AL POO-ULUI ESTE INCAPSULARE
//REPREZINTA PROCESUL PRIN CARE ATRIBUTELE SUNT PUSE IN ZONA PRIVATA A CLASEI, ASTFEL INCAT ELE SUNT SECURIZATE/PROTEJATE, PENTRU A NU PUTEA FI ACCESATE DIN EXTERIORUL CLASEI (ATRIBUTELE SUNT PUSE INTR-O CAPSULA, IN CARE NU POATE PATRUNDE NIMENI DIN EXTERIORUL CLASDEI)





//POINTERI
//int*, float*, double*, bool*, string* (toti vectorii mai putin char*) - vin la pachet cu un numarator de tip int care stocheaza numarul de elemente din vector
//char* este singurul vector care nu vine la pachet cu un numarator
//cel mai greu vector de folosit este char*
//cei mai usori vectori sunt cei numerici: int*, float*, double*

class Magazin
{
	//ZONA DE ACCES BY DEFAULT INTR-O CLASA ESTE CEA PRIVATE (FARA CA NOI SA FACEM CEVA, FARA SA INDICAM NOI ZONA DE ACCES)
	//aici incepe zona private a clasei
	//ATRIBUTELE SE TREC INTOTDEAUNA IN ZONA PRIVATE A CLASEI
	string denumireMagazin;
	int nrAngajati;
	float suprafataMagazinMP;
	bool esteNonStop;
	const int anInfiintare;
	static int clasaCAENPrincipala; //47 (toate magazinele sunt incadrate la comert cod 47 in codul CAEN)

	char* numeProprietar;
	int nrProduse;
	float* preturiProduse;
	string* denumiriProduse;
	//aici se termina zona private a clasei
public:
	//aici incepe zona publica a clasei
	//FUNCTIILE/METODELE SE TREC OBLIGATORIU IN ZONA PUBLIC A CLASEI

	//CONSTRUCTORUL
	//METODA SPECIALA PE BAZA CAREIA SE VOR CONSTRUI OBIECTE DE TIPUL CLASEI NOASTRE (CLASA REPREZENTA SABLONUL CARE STABILESTE CUM ARATA OBIECTELE, IAR PRIN CONSTRUCTOR VOM DA VALORI SPECIFICE ATRIBUTELOR CLASEI, ASTFEL INCAT VOM CREA OBIECTE CU VALORI PROPRII)
	//A CONSTRUI OBIECTE=ALOCARE DE MEMORIE + INITIALIZAREA ATRIBUTELOR CU VALORI
	//ATRIBUTELE SIMPLE (int, float, double, bool, char, string): INITIALIZARE ATRIBUTE CU VALORI
	//ATRIBUTELE POINTER (int*, float*, double*, bool*, char*, string*): ALOCARE DE MEMORIE + INITIALIZAREA ATRIBUTELOR CU VALORI
	//REGULA DE SCRIERE A UNUI CONSTRUCOR ESTE:
	/*NumeClasa(in lista de parametrii a constructorului trecem parametrii=atributele clasei)
	{
		this->numeAtribut=numeParametru
	}*/
	//TIPURI DE CONSTRUCTORI: CONSTRUCTORUL FARA PARAMETRII, CONSTRUCTORUL CU UN PARAMETRU ..... CONSTRUCTORUL CU TOTI PARAMETRII (NUMARUL MAXIM DE ATRIBUTE DIN CLASA MEA)

	//CONSTRUCTORUL FARA PARAMETRII
	Magazin(/*this*//*aici nu vom trece nimic pentru constructorul fara parametrii, deoarece nu primeste atribute ca si parametru, considerand aceste obiecte necunoscute*/) :anInfiintare(0)
	{
		this->denumireMagazin = "Anonima";
		this->nrAngajati = 0;
		this->suprafataMagazinMP = 0;
		this->esteNonStop = 0;

		//1.ALOCAREA DE MEMORIE
		this->numeProprietar = new char[strlen("Anonim") + 1]; //strlen este o functie care numara cate caractere sunt intr-o variabila //adaugam +1 pentru caracterul terminator \0
		//2.INITIALIZAREA
		strcpy(this->numeProprietar, "Anonim"); //strcpy este o functie care initializeaza char* cu valori / this->numeProprietar="Anonim";

		this->nrProduse = 0;
		this->preturiProduse = NULL; //NULL inseamna ca am 0 elemente in vector, vectorul nu exista, este gol
		this->denumiriProduse = NULL; //NULL inseamna ca am 0 elemente in vector, vectorul nu exista, este gol

		//this->anInfiintare = 0; - !!!!!asa nu initializam niciodata atributele constante!!!!!
		//anInfiintare(0) - !!!!!asa initializam intotdeauna atributele constante!!!!!
	}

	//CONSTRUCTORUL CU UN PARAMETRU
	Magazin(/*this*/string denumireMagazin) :anInfiintare(0)
	{
		this->denumireMagazin = denumireMagazin;
		this->nrAngajati = 0;
		this->suprafataMagazinMP = 0;
		this->esteNonStop = 0;

		//1.ALOCAREA DE MEMORIE
		this->numeProprietar = new char[strlen("Anonim") + 1]; //strlen este o functie care numara cate caractere sunt intr-o variabila //adaugam +1 pentru caracterul terminator \0
		//2.INITIALIZAREA
		strcpy(this->numeProprietar, "Anonim"); //strcpy este o functie care initializeaza char* cu valori / this->numeProprietar="Anonim";

		this->nrProduse = 0;
		this->preturiProduse = NULL; //NULL inseamna ca am 0 elemente in vector, vectorul nu exista, este gol
		this->denumiriProduse = NULL; //NULL inseamna ca am 0 elemente in vector, vectorul nu exista, este gol
	}

	//CONSTRUCTORUL CU DOI PARAMETRII
	Magazin(/*this*/string denumireMagazin, int nrAngajati) :anInfiintare(0)
	{
		this->denumireMagazin = denumireMagazin;
		this->nrAngajati = nrAngajati;
		this->suprafataMagazinMP = 0;
		this->esteNonStop = 0;

		//1.ALOCAREA DE MEMORIE
		this->numeProprietar = new char[strlen("Anonim") + 1]; //strlen este o functie care numara cate caractere sunt intr-o variabila //adaugam +1 pentru caracterul terminator \0
		//2.INITIALIZAREA
		strcpy(this->numeProprietar, "Anonim"); //strcpy este o functie care initializeaza char* cu valori / this->numeProprietar="Anonim";

		this->nrProduse = 0;
		this->preturiProduse = NULL; //NULL inseamna ca am 0 elemente in vector, vectorul nu exista, este gol
		this->denumiriProduse = NULL; //NULL inseamna ca am 0 elemente in vector, vectorul nu exista, este gol
	}

	//CONSTRUCTORUL CU TREI PARAMETRII
	Magazin(/*this*/string denumireMagazin, int nrAngajati, float suprafataMagazinMP) :anInfiintare(0)
	{
		this->denumireMagazin = denumireMagazin;
		this->nrAngajati = nrAngajati;
		this->suprafataMagazinMP = suprafataMagazinMP;
		this->esteNonStop = 0;

		//1.ALOCAREA DE MEMORIE
		this->numeProprietar = new char[strlen("Anonim") + 1]; //strlen este o functie care numara cate caractere sunt intr-o variabila //adaugam +1 pentru caracterul terminator \0
		//2.INITIALIZAREA
		strcpy(this->numeProprietar, "Anonim"); //strcpy este o functie care initializeaza char* cu valori / this->numeProprietar="Anonim";

		this->nrProduse = 0;
		this->preturiProduse = NULL; //NULL inseamna ca am 0 elemente in vector, vectorul nu exista, este gol
		this->denumiriProduse = NULL; //NULL inseamna ca am 0 elemente in vector, vectorul nu exista, este gol
	}

	//CONSTRUCTORUL CU TOTI PARAMETRII
	Magazin(/*this*/string denumireMagazin, int nrAngajati, float suprafataMagazinMP, bool esteNonStop, int anInfiintare, const char* numeProprietar, int nrProduse, float* preturiProduse, string* denumiriProduse) :anInfiintare(anInfiintare)
	{
		this->denumireMagazin = denumireMagazin;
		this->nrAngajati = nrAngajati;
		this->suprafataMagazinMP = suprafataMagazinMP;
		this->esteNonStop = esteNonStop;

		//1.ALOCAREA DE MEMORIE
		this->numeProprietar = new char[strlen(numeProprietar) + 1]; //strlen este o functie care numara cate caractere sunt intr-o variabila //adaugam +1 pentru caracterul terminator \0 (caracterul terminator este adaugat automat de catre compilator la finalul fiecarei variabile char*
		//2.INITIALIZAREA
		strcpy(this->numeProprietar, numeProprietar); //strcpy este o functie care initializeaza char* cu valori / this->numeProprietar="Anonim";

		this->nrProduse = nrProduse;
		//1.Alocarea de memorie
		this->preturiProduse = new float[this->nrProduse];
		this->denumiriProduse = new string[this->nrProduse];
		//2.Initializarea
		for (int i = 0; i < this->nrProduse; i++)
		{
			this->preturiProduse[i] = preturiProduse[i];
			this->denumiriProduse[i] = denumiriProduse[i];
		}

		//this->anInfiintare=anInfiintare; !!!!!asa nu initializam niciodata atributele constante!!!!!
		//anInfiintare(anInfiintare) !!!!!asa initializam intotdeauna atributele constante!!!!!
	}

	//METODE ACCESOR: GETTERI SI SETTERI
	//GETTERII - SUNT ACELE METODE ACCESOR CARE AU ROLUL DE A REDA ACCESUL CATRE ZONA PRIVATA A CLASEI CU SCOPUL DE A AFISA ATRIBUTELE PE CONSOLA
	//SETTERII - SUNT ACELE METODE ACCESOR CARE AU ROLUL DE A REDA ACCESUL CATRE ZONA PRIVATA A CLASEI CU SCOPUL DE A MODIFICA ATRIBUTELE
	//METODELE ACCESOR - AU SCOPUL DE A REDA ACCESUL CATRE ZONA PRIVATA A CLASEI PENTRU CITIRE SI SCRIERE

	//GETTERII
	//GETTERII - SUNT ACELE METODE ACCESOR CARE AU ROLUL DE A REDA ACCESUL CATRE ZONA PRIVATA A CLASEI CU SCOPUL DE A AFISA ATRIBUTELE PE CONSOLA
	//GETTERII - SE FOLOSESC PENTRU AFISAREA PE CONSOLA A ATRIBUTELOR
	//GETTERII AU SCOPUL DE A AFISA PE ECRAN => TREBUIE SA FOLOSIM INSTRUCTIUNEA RETURN PENTRU A PUTEA AFISA PE ECRAN => TIPUL ATRIBUTUL RETURNAT, COINCIDE CU TIPUL METODEI
	//REGULA:
	//tipDataAtribut getNumeAtribut(/*nu trecem nimic*/)
	//{
	//	return this->numeAtribut;
	//}

	string getDenumireMagazin(/*this*/)
	{
		return this->denumireMagazin;
	}

	int getNrAngajati(/*this*/)
	{
		return this->nrAngajati;
	}

	float getSuprafataMagazinMP(/*this*/)
	{
		return this->suprafataMagazinMP;
	}

	bool getEsteNonStop(/*this*/)
	{
		return this->esteNonStop;
	}

	int getAnInfiintare(/*this*/)
	{
		return this->anInfiintare;
	}

	char* getNumeProprietar(/*this*/)
	{
		return this->numeProprietar;
	}

	int getNrProduse(/*this*/)
	{
		return this->nrProduse;
	}

	float* getPreturiProduse(/*this*/)
	{
		return this->preturiProduse;
	}

	string* getDenumiriProduse(/*this*/)
	{
		return this->denumiriProduse;
	}

	static int getCodCAEN()
	{
		return Magazin::clasaCAENPrincipala;
	}

	//SETTERII
	//SETTERII - SUNT ACELE METODE ACCESOR CARE AU ROLUL DE A REDA ACCESUL CATRE ZONA PRIVATA A CLASEI CU SCOPUL DE A MODIFICA ATRIBUTELE
	//SETTERII - SUNT FOLOSITI PENTRU MODIFICAREA ATRIBUTELOR CU VALORI NOI
	//SETTERII NU AU ROLUL DE A AFISA PE CONSOLA => NU VOR FOLOSI INSTRUCTIUBNEA RETURN => VOR AVEA TIPUL VOID
	//REGULA:
	//void setNumeAtribut(tipDataAtribut numeParametru)
	//{
	//	this->numeAtribut = numeParametru;
	//}

	void setDenumireMagazin(string denumireNouaMagazin)
	{
		this->denumireMagazin = denumireNouaMagazin;
	}

	void setNrAngajati(int nrNouAngajati)
	{
		this->nrAngajati = nrNouAngajati;
	}

	void setSuprafataMagazinMP(float suprafataMagazinNouaMP)
	{
		this->suprafataMagazinMP = suprafataMagazinNouaMP;
	}

	void setEsteNonStop(bool esteNonStopValoareNoua)
	{
		this->esteNonStop = esteNonStopValoareNoua;
	}

	static void setCodCAEN(int codCAENnou)
	{
		Magazin::clasaCAENPrincipala = codCAENnou;
	}

	//!!!!!NU FACEM SETTERI PENTRU ATRIBUTELE CONSTANTE, DEOATRECE ELE NU ISI MOD MODIFICA VALOAREA!!!!!!

	//SETERII PENTRU POINTERI CONTIN PASUL DE DEZALOCARE DE MEMORIE (VECHEA VALOARE TREBUIE STEARSA CU DELETE) + REALOCARE DE MEMORIE (PENTRU NOUA VALOARE TREBUIE ALOCATA MEMORIE CU NEW) + INITIALIZARE CU NOUA VALOARE PRIMITA CA PARAMETRU

	void setNumeProprietar(const char* numeProprietarNou)
	{
		//1.Scapam de vechea valoare
		if (this->numeProprietar != NULL)
		{
			delete[] this->numeProprietar;
		}

		//2.Realocam spatiu pentru noua valoare
		this->numeProprietar = new char[strlen(numeProprietarNou) + 1];

		//3.Reinitializam cu noua valoare
		strcpy(this->numeProprietar, numeProprietarNou);
	}

	//PENTRU TOTI VECTORII CARE VIN LA PACHET CU UN NUMARATOR (int*, float*, double*, bool*, string*) NU AVEM VOIE SA FACEM SETTER SEPARAT PENTRU VECTOR SI SEPARAT PENTRU NUMARATOR, CI FACEM UN SETTER LA COMUN CARE SA MODIFICE CONCOMITENT SI NUMARATORUL SI VCETORUL

	void setProduse(int nrNouProduse, float* preturiNoiProduse, string* denumiriNoiProduse)
	{
		//1.Scapam de vechii vectori de preturi si denumiri
		if (this->preturiProduse != NULL)
		{
			delete[] this->preturiProduse;
		}
		if (this->denumiriProduse != NULL)
		{
			delete[] this->denumiriProduse;
		}

		//2.Schimbam numaratorul cu noua valoare
		this->nrProduse = nrNouProduse;

		//3.Realocam memorie pentru noii vectori
		this->preturiProduse = new float[this->nrProduse];
		this->denumiriProduse = new string[this->nrProduse];

		//4.Reinitializam cu noii vectori
		for (int i = 0; i < this->nrProduse; i++)
		{
			this->preturiProduse[i] = preturiNoiProduse[i];
			this->denumiriProduse[i] = denumiriNoiProduse[i];
		}
	}

	//Destructorul
	//Metoda speciala a unei clase care se ocupa de distrugerea obiectelor la finalul rularii programului
	//A DISTRUGE OBEICTE=DEZALOCAREA DE MEMORIE + STERGEREA VALORILOR DIN ATRIBUTE

	//Programul are zona de memorie impartita in STIVA si HEAP:

	//Zona de memorie STIVA este zona de memorie destinata COMPILATORULUI si destinata ATRIBUTELOR SIMPLE (int, float, double, bool, char, string)
	//ZONA DE MEMORIE STIVA ESTE ACCESIBILA COMPILATORULUI SI INACCESIBILA PROGRAMATORULUI
	//In zona de memorie stiva compilatorul are acces si isi aloca singur memorie pentru atributele simple, de aceea in constructori nu mai trebuie sa alocam noi manual memorie pentru atributele simple
	//In zona de memorie stiva compilatorul are acces si isi dezaloca singur memoria pentru atributele simple, de aceea in destructor nu mai trebuie sa dezalocam noi manual memoria pentru atributele simple

	//Zona de memorie HEAP este zona de memorie destinata PROGRAMATORULUI si destinata ATRIBUTELOR POINTER (int*, float*, double*, bool*, char*, string*)
	//ZONA DE MEMORIE HEAP ESTE ACCESIBILA PROGRAMATORULUI SI INACCESIBILA COMPILATORULUI
	//In zona de memorie heap compilatorul nu are acces, de aceea programatorul trebuie sa aloce manual memorie pentru pointeri in constructori
	//In zona de memorie heap compilatorul nu are acces, de aceea programatorul trebuie sa dezaloce manual memoria pentru pointeri in destructor

	////Regula:
	//~NumeClasa(/*nu trebuie sa trecem nimic*/)
	//{
	//	//pentru atributele simple nu trebuie sa dezalocam memorie, deoarece o face automat compilatorul in stiva
	//	//pentru atributele pointer trebuie sa dezalocam noi memorie, deoarece nu o poate face automat compilatorul in heap
	//}

	//DESTRUCTORUL TREBUIE CONSTRUIT, CHIAR DACA NU AVEM DELOC POINTERI IN CLASA. IN ACEST CAZ, IN CARE IN CLASA AVEM STRICT ATRIBUTE SIMPLE, DESTRUCTORUL VA FI GOL, FARA INSTRUCTIUNI, DAR TREBUIE SA EXISTE, ASTFEL INCAT OBIECTELE SA FIE DISTRUSE LA FINAL)
	//DESTRUCTORUL NU TREBUIE APELAT IN VOID MAIN, DEOARECE EL SE AUTOAPELEAZA DE CATRE COMPILATOR LA FINALUL RULARII PROGRAMULUI
	//DESTRUCTORUL SE AUTO-APELEAZA DE ATATEA ORI, CATE OBIECTE AM CREAT IN VOID MAIN

	~Magazin()
	{
		if (this->numeProprietar != NULL)
		{
			delete[] this->numeProprietar;
		}
		if (this->preturiProduse != NULL)
		{
			delete[] this->preturiProduse;
		}
		if (this->denumiriProduse != NULL)
		{
			delete[] this->denumiriProduse;
		}

		cout << "AICI S-A APELAT DESTRUCTORUL!" << endl;
	}

	//Constructorul de copiere
	//Este o metoda speciala a clasei care construieste obiecte noi (exact cum face si constructorul normal), doar ca el le construieste pe baza unor obiecte deja existente in void main
	//Obiectul existent din void main ales de mine pentru a fi copiat, o sa fie copiat in totalitate (nu se poate copia partial), astfel incat noul obiect creat o sa arate identic cu obiectul deja existent din void main
	//ex: daca in void main avem deja creat obiectul m1, eu imi voi putea crea prin constructorul de copiere un obiect nou m7, copiind integral obiectul m1 si punandu-l in obiectul m7

	//Regula:
	//NumeClasa(NumeClasa&obj)
	//{
	//	//se formeaza din constructorul cu toti parametrii, modificand in partea dreapta a egalului cu atributele obiectului primit ca parametru
	//}

	//obiectul deja existent in void main: m1
	//obeictul nou creat in void main este: m7
	//this=obiectul nou creat=m7
	//obj=obiectul deja existent in void main=m1

	Magazin(const Magazin& obj) :anInfiintare(obj.anInfiintare)
	{
		this->denumireMagazin = obj.denumireMagazin;
		this->nrAngajati = obj.nrAngajati;
		this->suprafataMagazinMP = obj.suprafataMagazinMP;
		this->esteNonStop = obj.esteNonStop;

		this->numeProprietar = new char[strlen(obj.numeProprietar) + 1];
		strcpy(this->numeProprietar, obj.numeProprietar);

		this->nrProduse = obj.nrProduse;
		this->preturiProduse = new float[obj.nrProduse];
		this->denumiriProduse = new string[obj.nrProduse];
		for (int i = 0; i < this->nrProduse; i++)
		{
			this->preturiProduse[i] = obj.preturiProduse[i];
			this->denumiriProduse[i] = obj.denumiriProduse[i];
		}
	}

	//Operatorul =
	//Are rolul de a modifica un obiect existent din void main pe baza altui obiect existent din void main (!!nu este construit un alt obiect nou in cadrul op =!!)
	//Obiectul existent din void main ales pentru a fi modificat, o sa fie modificat integral cu obiectul existent din void main ales drept macheta
	//ex: daca in void main am deja creat obiectul m2 si obiectul m5 si doresc ca m2 sa arate intregral ca m5, atunci apelez op = astfel incat m2 sa arate integral la fel cu m5

	//!!!!!!!!!!!!!!!!!!!!!!!!DIFERENTA DINTRE CONSTRUCTORUL DE COPIERE SI OPERATORUL =!!!!!!!!!!!!!!!!!!!!!!!!!!
	//Constructorul de copiere construieste un obiect nou pe baza unui existent in void main, in timp ce operatorul = modifica un obiect existent pe baza altui obiect existent

	//Regula:
	//NumeClasa& operator=(NumeClasa& obj)
	//{
	//	//destructor
	//	//constructor de copiere
	//	//return *this
	//}

	//obiectul pe care dorim sa il modificam=m2
	//obiectul macheta=m5
	//this=obiectul pe care coril sa il modificam=m2
	//obj=obiectul macheta=m5

	Magazin& operator=(const Magazin& obj)
	{
		if (this != &obj) //evitarea autoasignarii ex: m1=m1 (evitam sa facem un obiect egal cu el insusi)
		{
			if (this->numeProprietar != NULL)
			{
				delete[] this->numeProprietar;
			}
			if (this->preturiProduse != NULL)
			{
				delete[] this->preturiProduse;
			}
			if (this->denumiriProduse != NULL)
			{
				delete[] this->denumiriProduse;
			}

			this->denumireMagazin = obj.denumireMagazin;
			this->nrAngajati = obj.nrAngajati;
			this->suprafataMagazinMP = obj.suprafataMagazinMP;
			this->esteNonStop = obj.esteNonStop;

			this->numeProprietar = new char[strlen(obj.numeProprietar) + 1];
			strcpy(this->numeProprietar, obj.numeProprietar);

			this->nrProduse = obj.nrProduse;
			this->preturiProduse = new float[obj.nrProduse];
			this->denumiriProduse = new string[obj.nrProduse];
			for (int i = 0; i < this->nrProduse; i++)
			{
				this->preturiProduse[i] = obj.preturiProduse[i];
				this->denumiriProduse[i] = obj.denumiriProduse[i];
			}
		}
		return *this;
	}

	//REGULA CELOR 5: CONSTRUCTORUL FARA PARAMETRII, CONSTRUCTORUL CU TOTI PARAMETRII, DESTRUCTOR, CONSTRUCTORUL DE COPIERE, OPERATORUL =

	//Metode proprii clasei si supraincarcarea metodelor
	//Metodele sunt functii care prelucreaza atributele din clasa cu scopul de a afla noi informatii despre clasa noastra si despre obiectele noastre
	//Atributele definesc structura clasei, iar metodele reprezinta comportamentul clasei
	//CELE MAI USOARA METODE SUNT CELE IMPLEMENTATE PE VECTORI NUMERICI: int*, float*, double* (min, max, suma, medie, majorare valori din vector, micsorare valori din vector, aplicare discount, calcul procent valori din vector etc)
	//ALTE METODE PE ALTE ATRIBUTE: compararea a doua obiecte pe baza unui atribut la alegere, majorare/micsorare pe valori int/float/double, calcul procent pe valori int/float/double etc
	//!!!!!!!!!!!!!!!!!!!!PE O CLASA PUTEM IMPLEMENTA CATE METODE VREM NOI/CE METODE VREM NOI, DAR SA AIBA SENS ECONOMIC!!!!!!!!!!!!!!!!!

	//PASI DE URMAT PENTRU A IMPLEMENTA O METODA:
	//1.DEFINIM IN SCRIS ENUNTUL ECONOMIC AL METODEI NOASTRE (CEEA CE VREM SA FACA METODA/FUNCTIONALITATEA METODEI)
	//2.STABILIM TIPUL METODEI (O METODA POATE FI DE DOUA TIPURI):
			//2.1. METODELE CARE SUNT DE TIPUL UNUI ATRIBUT (int/float/double/bool/char/string/int*/float*/double*/bool*/char*/string*)
			//2.2. METODELE CARE SUNT DE TIPUL VOID
	//daca o metoda este de tipul unui atribut, atunci inseamna ca rezultatul final al metodei respective este o valoare de tipul atributului ales ; aceste metode folosesc instructiunea return care are rolul de a afisa rezultatul final pe ecran (!!atentie, tipul rezultatului final din instructiunea return, trebuie sa coincida cu tipul ales pentru metoda!!)
	//daca o metoda este de tipul void, atunci inseamna ca metoda respectiva nu are un rezultat final care se doreste a fi afisat pe ecran, ci metoda respetiva fie modifica atribute din clasa cu valori noi/fie afiseaza pe ercan cu comanda cout<< ; aceste metode nu folosesc instructiunea retunr, deoarece scopul lor nu este de a afisa rezultatul final pe ecran 
	//3.ALEGEM O DENUMIRE SUGESTIVA PENTRU METODA NOASTRA, DEOARECE ACEASTA DENUMIRE O SA FIE FOLOSITA IN APELUL DIN VOID MAIN
	//4.STABILIM DACA METODA ARE NEVOIE DE PARAMETRII SUPLIMENTARI
			//parametrii suplimentari reprezinta informatii de care am nevoie in rezolvarea cerintei, dar care nu se regasesc in lista de atribute a clasei mele
	//5.IMPLEMENTAREA CODULUI PENTRU REZOLVAREA CERINTEI

	//MINIM
	//Sa se determine pretul cel mai mic din vectorul float* preturiProduse (reprezentand produsul cel mai ieftin)
	float pretMinim()
	{
		float rezultat;
		rezultat = this->preturiProduse[0];
		for (int i = 1; i < this->nrProduse; i++)
		{
			if (this->preturiProduse[i] < rezultat)
			{
				rezultat = this->preturiProduse[i];
			}
		}
		return rezultat;
	}

	//APLICARE DISCOUNT
	//Sa se aplica un discount la alegere pentru unul din produsele din stocul magazinului (produsul a intrat intr-o oferta speciala)
	void aplicareDiscount(float procentDiscount, int pozitieProdus)
	{
		if (pozitieProdus >= 0 && pozitieProdus < this->nrProduse)
		{
			this->preturiProduse[pozitieProdus] = this->preturiProduse[pozitieProdus] - procentDiscount * this->preturiProduse[pozitieProdus];
		}
	}

	//MAXIM
	//Sa se determine pretul cel mai mare din vectorul float* preturiProduse (reprezentand produsul cel mai scump)
	float pretMaxim()
	{
		float rezultat;
		rezultat = this->preturiProduse[0];
		for (int i = 1; i < this->nrProduse; i++)
		{
			if (this->preturiProduse[i] > rezultat)
			{
				rezultat = this->preturiProduse[i];
			}
		}
		return rezultat;
	}

	//SUMA
	//Sa se determine lichiditatile din magazin (suma totala a preturilor produselor din magazin)
	float sumaTotalaPreturi()
	{
		float suma;
		suma = 0;
		for (int i = 0; i < this->nrProduse; i++)
		{
			suma = suma + this->preturiProduse[i]; //suma+= this->preturiProduse[i]
		}
		return suma;
	}

	//MEDIE
	//Sa se determine pretul mediu al unui magazin
	float pretMediu()
	{
		//float suma;
		//suma = 0;
		//for (int i = 0; i < this->nrProduse; i++)
		//{
		//	suma = suma + this->preturiProduse[i]; //suma+= this->preturiProduse[i]
		//}
		//float medie = suma / this->nrProduse;
		//return medie;

		float medie = this->sumaTotalaPreturi() / this->nrProduse;
		return medie;
	}

	//Sa se determine cate produse au pretul mai mare de un anumit prag ales la intamplare
	int determinareNrProduse(float pragDePret)
	{
		int nr = 0;
		for (int i = 0; i < this->nrProduse; i++)
		{
			if (this->preturiProduse[i] > pragDePret)
			{
				nr++; //nr=nr+1
			}
		}
		return nr;
	}

	//Sa se implementeze o metoda care afiseaza intreaga descriere a unui magazin (un fel de getter colectiv care sa afiseze toate atributele clasei)
	void afisareObiect()
	{
		cout << "Denumirea magazinului este:" << this->denumireMagazin << endl;
		cout << "Nr de angajati este:" << this->nrAngajati << endl;
		cout << "Suprafata magazinului este:" << this->suprafataMagazinMP << endl;
		cout << "Magazinul este non-stop? (1-DA / 0-NU):" << (this->esteNonStop == 1 ? "DA" : "NU") << endl;
		cout << "Anul de infiintare al magazinului este:" << this->anInfiintare << endl;
		cout << "Numele proprietarului este:" << this->numeProprietar << endl;
		cout << "Nr de produse este:" << this->nrProduse << endl;
		cout << "Produse:" << endl;
		for (int i = 0; i < this->nrProduse; i++)
		{
			cout << "Pret:" << this->preturiProduse[i] << endl;
			cout << "Denumire:" << this->denumiriProduse[i] << endl;
		}
	}

	//METODA DE ADAUGARE ELEMENT IN VECTOR
	//SA SE SUPLIMENTEZE STOCUL MAGAZINULUI CU UN NOU PRODUS
	//VARIATII: SA SE ADAUGE MAI MULTE PRODUSE NOI IN MAGAZIN, SA SE ADAUGE UN SINGUR PRODUS NOU IN MAGAZIN SI SA FIE ADAUGAT PE PRIMA POZITIE DIN VECTOR, SA SE INLOCUIASCA ULTIMUL PRODUS DIN VECTOR CU UN PRODUS NOU PRIMIT CA PARAMETRU ETC
	void adaugaProdusNou(/*this*/float pretProdusNou, string denumireProdusNou)
	{
		//1.Facem o copie a obiectului this(obiectul curent pe care noi lucram si pe care urmeaza sa il modific), astfel incat la dezalocarea de memorie sa nu pierd valorile vechi din vector
		Magazin obiectCopie(*this); //apelul constructorului de copiere

		//2.Dezalocam memoria pentru vectorii pe care urmeaza sa ii modific
		if (this->preturiProduse != NULL)
		{
			delete[] this->preturiProduse;
		}
		if (this->denumiriProduse != NULL)
		{
			delete[] this->denumiriProduse;
		}

		//3.Crestem numaratorul vectorilor ci o unitate, pentru ca noi adaugam un singur element nou in vectori
		this->nrProduse++; //this->nrProduse=this->nrProduse+1;

		//4.Realocam memorie pentru noii vectori, care acum au cu o casuta de memorie in plus
		this->preturiProduse = new float[this->nrProduse];
		this->denumiriProduse = new string[this->nrProduse];

		//5.Punem elementele vechi din copie inapoi in this
		for (int i = 0; i < obiectCopie.nrProduse; i++)
		{
			this->preturiProduse[i] = obiectCopie.preturiProduse[i];
			this->denumiriProduse[i] = obiectCopie.denumiriProduse[i];
		}

		//6.Punem noile valori primite in lista de parametrii pe ultima pozitie din vectori
		this->preturiProduse[obiectCopie.nrProduse] = pretProdusNou;
		this->denumiriProduse[obiectCopie.nrProduse] = denumireProdusNou;
	}

	//METODA DE ELIMINARE DIN VECTOR
	//SA SE SCOATA DIN STOCUL MAGAZINULUI UN PRODUS TINAND CONT DE POZITIONAREA LUI IN VECTOR
	//VARIATII: SA SE ELIMINE PRODUSELE CU O ANUMITA DENUMIRE CAUTATA (DE LUAT IN CONSIDERARE DACA EXISTA MAI MULTE PRODUSE CU ACEEASI DENUMIRE), SA SE ELIMINE PRODUSUL DE LA MIJLOCUL VECTORULUI (DACA VECTORUL ARE NR IMPAR DE ELEMENTE, ATUNCI SE ROTUNJESTE IN PLUS) ETC
	void eliminaProdus(/*this*/int pozitieCautata)
	{
		//1.Facem o copie a obiectului this(obiectul curent pe care noi lucram si pe care urmeaza sa il modific), astfel incat la dezalocarea de memorie sa nu pierd toate valorile din vector
		Magazin obiectCopie(*this); //apelul constructorului de copiere

		//2.Dezalocam memoria pentru vectorii pe care urmeaza sa ii modific
		if (this->preturiProduse != NULL)
		{
			delete[] this->preturiProduse;
		}
		if (this->denumiriProduse != NULL)
		{
			delete[] this->denumiriProduse;
		}

		//3.Scadem numaratorul vectorilor cu o unitate, pentru ca eliminam un singur element din vectori
		this->nrProduse--; //this->nrProduse=this->nrProduse-1;

		//4.Realocam memorie pentru noii vectori, care acum au cu o casuta de memorie in minus
		this->preturiProduse = new float[this->nrProduse];
		this->denumiriProduse = new string[this->nrProduse];

		//5.Punem elementele din copie inapoi in this, sarind peste elementul pe care vreau sa il elimin
		//for1: punem elementele din copie inapoi in this, incepand de la pozitia 0 si pana la pozitia dorita pentru eliminare
		for (int i = 0; i < pozitieCautata; i++)
		{
			this->preturiProduse[i] = obiectCopie.preturiProduse[i];
			this->denumiriProduse[i] = obiectCopie.denumiriProduse[i];
		}

		//for2: punem elementele din copie inapoi in this, sarind peste pozitia dorita pentru eliminare si mergand pana la finalul vectorului
		for (int i = pozitieCautata + 1; i < obiectCopie.nrProduse; i++)
		{
			this->preturiProduse[i - 1] = obiectCopie.preturiProduse[i];
			this->denumiriProduse[i - 1] = obiectCopie.denumiriProduse[i];
		}
	}

	//Operatorii si supraincarea operatorilor

	//SUPRAINCAREA (OVERLOADING) (SE APLICA ATAT METODELOR, CAT SI OPERATORILOR)
	//REPREZINTA PROCEDEUL PRIN CARE NE ALEGEM O METODA/UN OPERATOR SI II DAM NOI O ANUMITA FUNCTIONALITATE (FUNCTIONALITATE=CERINTA ECONOMICA=CEEA CE FACE METODA/OPERATORUL)
	//ex: mi-am ales metode pretMinim si am supraincarcat-o (overloading) cu functionalitate de a imi calcula pretul cel mai mic din vectorul de preturiProduse
	//ex: mi-am ales operatorul + si l-am supraincarcat (overloading) cu functionalitatea de a mari suprafata magazinului cu un anumit numar de MP

	//SUPRAINCAREA OPERATORILOR

	//OPERATORI BINARI (DOI OPERANZI/TERMENI)
	//OPERATORI MATEMATICI:  +    -   /    *    %(RESTUL IMPARTIRII)
	//OPERATORI RELATIONALI (DE COMPARATIE):  <    <=    >    >=   ==(CAND AVEM DOUA SEMNE DE EGAL INSEAMNA COMPARATIE, CAND AVEM UN SINGUR SEMN DE EGAL, INSEAMNA CA AVEM ATRIBUIRE)   !=(DIFERIT)
				//TOTI OPERATORII DE COMPARATIE SUNT DE TIPUL bool
	//OPERATORI LOGICI: &&(SI)   ||(SAU)   !(NEGATIE)
	//OPERATORI DE AUTOASIGNARE (OPERATOR MATEMATIC LA CARE ADAUGAM OPERATORUL =):  +=    -=    /=    *=    %=  (IN CADRUL ACESTOR OPERATORI, SE FAC DOUA OPERATII, PRIMA DATA CEA MATEMATICA, APOI CEA DE ATRIBUIRE) EX: a=5 b=6 a+=b 1)a+b=5+6=11 2)a=a+b a=11

	//OPERATORI UNARI (UN OPERAND/TERMEN) - EXISTA IN DOUA FORME: FORMA PRE SI FORMA POST
	//OPERATORUL DE AUTOINCREMENTARE: ++ ex: a=5 a++ a=6 (++ preincrementare & ++ postincrementare)
	//OPERATORUL DE AUTODECREMENTARE: -- ex: a=5 a-- a=4 (-- predecrementare & -- postdecrementare)

	//ALTI OPERATORI
	//OPERTAORUL << - DE AFISARE A UNUI OBIECT INTREG PE CONSOLA //OPETATOR BINAR
	//OPERATORUL >> - DE CITIRE DE LA TASTATURA UN OBIECT INTREG //OPERATOR BINAR
	//OPERATORUL [] (OPERATORUL DE INDEXARE) - SE FOLOSESTE INTOTDEAUNA PE VECTORI //OPERATOR BINAR
	//OPERTAORUL () (OPERATORUL FUNCTIE) - SIMGURUL OPERATOR CU NUMAR VARIABIL DE OPERANZI
	//OPERATORUL DE CAST (CONVERSIE) //OPERATOR UNAR






	//Atributul FRIEND
	//UNII OPERATORI NU AU ACCES LA ZONA PRIVATA A CLASEI, ADICA NU MAI AU ACCES LA ATRIBUTELE DIN CLASA, IAR PENTRU ACESI OPERATORI O SA AVEM NEVOIE DE APLICAREA ATRIBUTULUI FRIEND
	//ATRIBUTUL FRIEND NE AJUTA SA IMPRIETENIM ACESTI OPERATORI ''cu probleme'' CU CLASA, ASTFEL INCAT SA AIBA SI EI ACCES LA ATRIBUTELE DIN ZONA PRIVATA A CLASEI
	//REGULA:
	//CUM NE DAM SEAMA DACA UN OPERATOR ARE NEVOIE DE ATRIBUTUL FRIEND SAU NU:
	//1)SCRIEM MODUL IN CARE SE APELEAZA OPERATORUL IN VOID MAIN
			//ex: obiect1<=obiect2   m1<=m6 (NU AVEM NEVOIE DE FRIEND)
			//ex: cout<<obiect       cout<<m2 (AVEM NEVOIE DE FRIEND)
	//2)NE UITAM LA POZITIA PRIMULUI OBIECT IN APELUL OPERATORULUI 
			//2.1)DACA PRIMUL OBIECT ESTE SITUAT INAINTEA SEMNULUI OPERATORULUI, ATUNCI NU AVEM NEVOIE DE FRIEND
			//2.2)DACA PRIMUL OBIECT ESTE SITUAT DUPA SEMNUL OPERATORULUI, ATUNCI AVEM NEVOIE DE FRIEND
	//EXEMPLE:
	//OPERATORUL []   obiect[]   m3[] (NU AVEM NEVOIE DE FRIEND)
	//OPERATORUL ++ IN FORMA PREINCREMENTARE   ++obiect   ++m2 (AVEM NEVOIE DE FRIEND)
	//OPERATORUL ++ IN FORMA POSTINCREMENTARE   obiect++   m2++ (NU AVEM NEVOIE DE FRIEND)





	//PASI DE URMAT PENTRU A IMPLEMENTA UN OPERATOR
	//1.NE ALEGEM UN OPERATOR SI II SCREM CERINTA ECONOMICA (FUNCTIONALITATEA CU CARE L-AM SUPRAINCARCAT (OVERLOADING))
	//2.ARE NEVOIE OPERATORUL DE ATRIBUTUL FRIEND?
	//3.STABILIM TIPUL OPERATORULUI (UN OPERATOR POATE FI DE DOUA TIPURI):
			//3.1. OPERATORI CARE SUNT DE TIPUL UNUI ATRIBUT (int/float/double/bool/char/string/int*/float*/double*/bool*/char*/string*)
			//3.2. OPERATORI CARE SUNT DE TIPUL VOID
	//daca un operator este de tipul unui atribut, atunci inseamna ca rezultatul final al operatorului respectiv este o valoare de tipul atributului ales ; acesti operatori folosesc instructiunea return care are rolul de a afisa rezultatul final pe ecran (!!atentie, tipul rezultatului final din instructiunea return, trebuie sa coincida cu tipul ales pentru operator!!)
	//daca un operator este de tipul void, atunci inseamna ca operatorul respectiv nu are un rezultat final care se doreste a fi afisat pe ecran, ci operatorul respetiv fie modifica atribute din clasa cu valori noi/fie afiseaza pe ercan cu comanda cout<< ; acesti operatori nu folosesc instructiunea retunr, deoarece scopul lor nu este de a afisa rezultatul final pe ecran 
	//4.ALEGEM O DENUMIRE PENTRU OPERATORUL NOSTRU: CUVANTUL CHEIE operator, URMAT DE SEMNUL DISTINCTIV AL OPERATORULUI
			//ex: operator<=   operator[]    operator+=    operator!  
	//5.STABILIM DACA OPERATORUL ARE NEVOIE DE PARAMETRII SUPLIMENTARI
			//parametrii suplimentari reprezinta informatii de care am nevoie in rezolvarea cerintei, dar care nu se regasesc in lista de atribute a clasei mele
	//6.IMPLEMENTAREA CODULUI PENTRU REZOLVAREA CERINTEI




	//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	//toti operatorii/metodele/constructorii/etc care nu folosesc friend, au pe prima pozitie parametrul implicit this, fara ca noi sa il vedem (acest parametru implicit this reprezinta obiectul curent)
	//toti operatorii/metodele/constructorii/etc care folosesc friend, nu mai au pe prima pozitie parametrul implicit this (prin urmare obiectul curent o sa fie reprezentat de un parametru de tipul clasei noastre care o sa inlocuiasca this-ul)
	//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!



	//Operatorul <=
	//SA SE COMPARE DOUA MAGAZINE DIN VOID MAIN DUPA NUMARUL DE ANGAJATI, FOLOSIND OPERATORUL <=
	//APELUL IN VOID MAIN ESTE: m1<=m5 -> NU AVEM NEVOIE DE FRIEND
	//this=m1
	//obj=m5
	bool operator<=(/*this*/const Magazin& obj)
	{
		if (this->nrAngajati <= obj.nrAngajati)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	//Operatorul ==
	//SA SE COMPARE DOUA MAGAZINE IN INTREGIME, FOLOSING OPETRATORUL ==
	//APELUL IN VOID MAIN ESTE: m2==m6 -> NU AVEM NEVOIE DE FRIEND
	//this=m2
	//obj=m6
	bool operator==(/*this*/const Magazin& obj)
	{
		bool ok = 1; //presupunem la momentul de start ca magazinele sunt egale
		if ((this->denumireMagazin == obj.denumireMagazin) && (this->nrAngajati == obj.nrAngajati) && (this->suprafataMagazinMP == obj.suprafataMagazinMP) && (this->esteNonStop == obj.esteNonStop) && (strcmp(this->numeProprietar, obj.numeProprietar) == 0) && (this->nrProduse == obj.nrProduse))
		{
			for (int i = 0; i < this->nrProduse; i++)
			{
				if ((this->preturiProduse[i] == obj.preturiProduse[i]) && (this->denumiriProduse[i] == obj.denumiriProduse[i]))
				{
				}
				else
				{
					ok = 0; //inseamna ca am gasit cel putin o valoare care nu este egala, deci magazinele mele nu sunt identice in intregime
				}
			}
			if (ok == 1)
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}

	//Operatorul << de afisare pe consola
	//SE CERE SA SE AFISEZE PE ECRAN UN OBIECT IN TOTALITATE (operarotorul << o sa se foloseasca intotdeauna pentru afisarea pe consola a unui obiect, indiferent de clasa avuta la dispozitie)
	//OPERATORUL << O SA INLOCUIASCA APELUL GETTERILOR DIN VOID MAIN (atunci cand vrem sa afisam pe ecran un obiect intreg, nu mai apelam getterii, ci apelam operatorul <<, dar daca vrem sa afisam un atribut anume, atunci apelam getterul aferent atributului)
	//APELUL IN VOID MAIN: cout<<obiect;  cout<<m5; -> AVEM NEVOIE DE FRIEND
	//ostream este o biblioteca deja implementata in c++ sub forma unei clase (exact ca si clasa noastra Magazin, are o lista de atribute, constructori, destr etc..), iar obiectul specific clasei ostream este obiectul cout
	//AM PRIMIT CA SI PARAMETRU:
	//-UN OBIECT DE TIPUL CLASEI NOASTRE (CARE INCLODUIESTE OBIECTUL this. Obiectul this nu mai este primit ca parametru implicit, deoarecve folosim friend, iar obiectul obj o sa inlocuiasca this-ul, astfel incat sa putem accesa in continuare atributele din clasa cu scopul de a le afisa pe ecran)
	//-UN OBIECTUL DE TIPUL CLASEI OSTREAM (obiectul primit ca parametru o sa fie de fapt un obiect de tipul cout, care ne va ajuta sa facem afisarea pe consola)
	friend ostream& operator<<(/*nu mai avem this*/ostream& out, const Magazin& obj)
	{
		out << "Denumirea magazinului este:" << obj.denumireMagazin << endl;
		out << "Nr de angajati este:" << obj.nrAngajati << endl;
		out << "Suprafata magazinului este:" << obj.suprafataMagazinMP << endl;
		out << "Magazinul este non-stop? (1-DA / 0-NU):" << (obj.esteNonStop == 1 ? "DA" : "NU") << endl;
		out << "Anul de infiintare al magazinului este:" << obj.anInfiintare << endl;
		out << "Numele proprietarului este:" << obj.numeProprietar << endl;
		out << "Nr de produse este:" << obj.nrProduse << endl;
		out << "Produse:" << endl;
		for (int i = 0; i < obj.nrProduse; i++)
		{
			out << "Pret:" << obj.preturiProduse[i] << endl;
			out << "Denumire:" << obj.denumiriProduse[i] << endl;
		}
		return out;
	}

	//Operatorul >> de citire de la tastatura
	//SE CERE SA SE CITEASCA DE LA TASTATURA UN OBIECT IN TOTALITATE (operatorul >> o sa se foloseasca intotdeauna pentru citirea de la tastatura a unui obiect intreg, indiferent de clasa pe care o avem la dispozitie)
	//OPERATORUL >> O SA INLOCUIASCA APELUL SETTERILOR DIN VOID MAIN (atunci cand vrem sa modificam un obiect in totalitate, nu mai apelam setterii, ci apelam operatorul >>, dar daca vrem sa modificam un singur atribut, atunci apelam setterul aferent atributului respectiv)
	//APELUL IN VOID: cin>>obiect; cin>>m3; -> AVEM NEVOIE DE FRIEND
	//istream este o bliblioteca deja implementata in c++ sub forma unei clasa (exact ca si clasa noastra Magazin, are o lista de atribute, constructori, destr etc...), iar obiectul specific clasei istream este obiectul cin
	//AM PRIMIT CA SI PARAMETRU:
	//-UN OBIECT DE TIPUL CLASEI NOASTRE (CARE INCLODUIESTE OBIECTUL this. Obiectul this nu mai este primit ca parametru implicit, deoarecve folosim friend, iar obiectul obj o sa inlocuiasca this-ul, astfel incat sa putem accesa in continuare atributele din clasa cu scopul de a le modifica de la tastatura)
	//-UN OBIECT DE TIPUL CLASEI ISTREAM (un obiect de tipul cin, care ne ajuta sa citim de la tastatura)
	friend istream& operator >> (/*nu mai avem this*/istream& in, Magazin& obj)
	{
		if (obj.numeProprietar != NULL)
		{
			delete[] obj.numeProprietar;
		}
		if (obj.preturiProduse != NULL)
		{
			delete[] obj.preturiProduse;
		}
		if (obj.denumiriProduse != NULL)
		{
			delete[] obj.denumiriProduse;
		}

		cout << "Introduceti denumirea magazinului:";
		in >> obj.denumireMagazin;
		cout << "Introduceti numarul de angajati:";
		in >> obj.nrAngajati;
		cout << "Introduceti suprafata magazinului in MP:";
		in >> obj.suprafataMagazinMP;
		cout << "Introduceti 1 daca magazinul este non-stop sau 0 daca magazinul nu este non-stop:";
		in >> obj.esteNonStop;

		cout << "Introudceti numele proprietarului:";
		char aux[100];
		in >> aux;
		obj.numeProprietar = new char[strlen(aux) + 1];
		strcpy(obj.numeProprietar, aux);

		cout << "Introduceti numarul de produse:";
		in >> obj.nrProduse;

		obj.preturiProduse = new float[obj.nrProduse];
		obj.denumiriProduse = new string[obj.nrProduse];

		cout << "Introduceti preturile produselor:";
		for (int i = 0; i < obj.nrProduse; i++)
		{
			in >> obj.preturiProduse[i];
		}

		cout << "Introduceti denumirile produselor:";
		for (int i = 0; i < obj.nrProduse; i++)
		{
			in >> obj.denumiriProduse[i];
		}

		return in;
	}

	//Opertaorul [] - de indexare
	//ACEST OPERATOR ESTE FOLOSIT MEREU PE VECTORI, DACA IN CLASA NU AVEM CEL PUTIN UN VECTOR, OPERATORUL [] NU SE POATE IMPLEMENTA
	//ACEST OPERATOR ARE INTOTDEAUNA FUNCTIONALITATEA DE A RETURNA UN ELEMENT LA ALEGERE DINTR-UN VECTOR (de tipul int*, float*, double*, bool*, string*), INDICAND POZITIA ELEMENTULUI DIN VECTOR (indiferent de clasa avuta la dispozitie, cerinta este aceeasi)
	//SA SE AFISEZE DENUMIREA UNUI PRODUS LA ALEGERE DIN MAGAZIN, INDICAND POZITIA ACESTUIA DIN VECTOR
	//APELUL IN VOID MAIN: obiect[pozitieDinVectorCautata]  m4[2] -> NU AVEM NEVOIE DE FRIEND
	string operator[](/*this*/int pozitieCautata)
	{
		if (pozitieCautata >= 0 && pozitieCautata < this->nrProduse)
		{
			return this->denumiriProduse[pozitieCautata];
		}
		else
		{
			return "Pozitia a fost introdusa gresit!";
		}
	}

	//Operatorul () - functie
	//!!ESTE SINGURUL OPERATOR CARE POATE FI SUPRAINCARCAT CU ORICE FUNCTIONALITATE VREM NOI (POATE SA FACA ORICE DORIM)!!
	//!!ESTE INGURUL OPERATOR CU NUMAR VARIABIL DE PARAMETRII (DE LA 0 PARAMETRII PANA LA CATI PARAMETRII VREM NOI)!!
	//SA SE CALCULEZE PENTRU UN MAGAZIN TOTALUL TVA-ULUI PRODUSELOR DIN STOC
	//APELUL IN VOID MAIN: obiect()  m6() -> NU AVEM NEVOIE DE FRIEND
	//PRIMA () -> SEMNUL OPERATORULUI FUNCTIE
	//A DOUA () -> LISTA DE PARAMETRII
	float operator()(/*this*/float TVA)
	{
		float sumaTotalaTVA = 0;
		for (int i = 0; i < this->nrProduse; i++)
		{
			sumaTotalaTVA += TVA * this->preturiProduse[i]; //sumaTotalaTVA=sumaTotalaTVA+TVA * this->preturiProduse[i]
		}
		return sumaTotalaTVA;
	}

	//Operatorul ! - de negatie
	//ACEST OPERATOR SE FOLOSESTE PENTRU ATRIBUTELE DE TIP BOOL (DACA IN CLASA NU EXISTA ATRIBUTE DE TIP BOOL, NU SE POATE IMPLEMENTA)
	//ACEST OPERATOR O SA FUNCTIONEZE CA UN INTRERUPATOR ASUPRA ATRIBUTELOR DE TIP BOOL DIN CLASA (SCHIMBA VALOAREA ATRIBUTULUI BOOL DIN ADEVARAT IN FALS, RESPECTIV DIN FALS IN ADEVARAT)
	//1! -> 0
	//0! -> 1
	//SA SE SCHIMBE STAREA MAGAZINULUI DIN ESTE NON-STOP IN NU ESTE NON-STOP SI INVERS
	//APELUL IN VOID MAIN: !obiect  !m3 -> AVEM NEVOIE DE ATRIBUTUL FRIEND
	friend void operator!(/*nu mai avem this*/Magazin& obj)
	{
		if (obj.esteNonStop == 1)
		{
			obj.esteNonStop = 0;
		}
		else if (obj.esteNonStop == 0)
		{
			obj.esteNonStop = 1;
		}
	}

	//Operatorul de autoasignare +=
	//!!!ACEST OPERATOR TINE LOCUL METODEI ADAUGA ELEMENT NOU IN VECTOR!!!
	//SA SE SUPLIMENTEZE STOCUL MAGAZINULUI CU UN NOU PRODUS
	//APELUL IN VOID MAIN: obiect+=valoare  m6+=valoare -> NU AVEM NEVOIE DE FRIEND
	//SINGURA DIFERENTA INTRE METODA ADAUGA SI OPERATORUL += ESTE CA OPERATORUL += NU O SA FIE DE TIPUL void, CI O SA FIE DE TIPUL CLASEI DEOARECE O SA FOLOSIM INSTRUCTIUNEA RETURN *THIS
	Magazin& operator+=(/*this*/float pretProdusNou)
	{
		//1.Facem o copie a obiectului this(obiectul curent pe care noi lucram si pe care urmeaza sa il modific), astfel incat la dezalocarea de memorie sa nu pierd valorile vechi din vector
		Magazin obiectCopie(*this); //apelul constructorului de copiere

		//2.Dezalocam memoria pentru vectorii pe care urmeaza sa ii modific
		if (this->preturiProduse != NULL)
		{
			delete[] this->preturiProduse;
		}
		if (this->denumiriProduse != NULL)
		{
			delete[] this->denumiriProduse;
		}

		//3.Crestem numaratorul vectorilor ci o unitate, pentru ca noi adaugam un singur element nou in vectori
		this->nrProduse++; //this->nrProduse=this->nrProduse+1;

		//4.Realocam memorie pentru noii vectori, care acum au cu o casuta de memorie in plus
		this->preturiProduse = new float[this->nrProduse];
		this->denumiriProduse = new string[this->nrProduse];

		//5.Punem elementele vechi din copie inapoi in this
		for (int i = 0; i < obiectCopie.nrProduse; i++)
		{
			this->preturiProduse[i] = obiectCopie.preturiProduse[i];
			this->denumiriProduse[i] = obiectCopie.denumiriProduse[i];
		}

		//6.Punem noile valori primite in lista de parametrii pe ultima pozitie din vectori
		this->preturiProduse[obiectCopie.nrProduse] = pretProdusNou;
		this->denumiriProduse[obiectCopie.nrProduse] = "Necunoscuta";

		return *this; //salvarea modificarilor
	}

	//Operatorul -=
	//!!!ACEST OPERATOR TINE LOCUL METODEI DE ELIMINA ELEMENT DIN VECTOR!!!
	//SA SE SCOATA DIN STOCUL MAGAZINULUI UN PRODUS TINAND CONT DE POZITIONAREA LUI IN VECTOR
	//APELUL IN VOID MAIN: obiect-=valoare  m6-=valoare -> NU AVEM NEVOIE DE FRIEND
	//SINGURA DIFERENTA INTRE METODA ELIMINA SI OPERATORUL -= ESTE CA OPERATORUL -= NU O SA FIE DE TIPUL void, CI O SA FIE DE TIPUL CLASEI DEOARECE O SA FOLOSIM INSTRUCTIUNEA RETURN *THIS
	Magazin& operator-=(/*this*/int pozitieCautata)
	{
		//1.Facem o copie a obiectului this(obiectul curent pe care noi lucram si pe care urmeaza sa il modific), astfel incat la dezalocarea de memorie sa nu pierd toate valorile din vector
		Magazin obiectCopie(*this); //apelul constructorului de copiere

		//2.Dezalocam memoria pentru vectorii pe care urmeaza sa ii modific
		if (this->preturiProduse != NULL)
		{
			delete[] this->preturiProduse;
		}
		if (this->denumiriProduse != NULL)
		{
			delete[] this->denumiriProduse;
		}

		//3.Scadem numaratorul vectorilor cu o unitate, pentru ca eliminam un singur element din vectori
		this->nrProduse--; //this->nrProduse=this->nrProduse-1;

		//4.Realocam memorie pentru noii vectori, care acum au cu o casuta de memorie in minus
		this->preturiProduse = new float[this->nrProduse];
		this->denumiriProduse = new string[this->nrProduse];

		//5.Punem elementele din copie inapoi in this, sarind peste elementul pe care vreau sa il elimin
		//for1: punem elementele din copie inapoi in this, incepand de la pozitia 0 si pana la pozitia dorita pentru eliminare
		for (int i = 0; i < pozitieCautata; i++)
		{
			this->preturiProduse[i] = obiectCopie.preturiProduse[i];
			this->denumiriProduse[i] = obiectCopie.denumiriProduse[i];
		}

		//for2: punem elementele din copie inapoi in this, sarind peste pozitia dorita pentru eliminare si mergand pana la finalul vectorului
		for (int i = pozitieCautata + 1; i < obiectCopie.nrProduse; i++)
		{
			this->preturiProduse[i - 1] = obiectCopie.preturiProduse[i];
			this->denumiriProduse[i - 1] = obiectCopie.denumiriProduse[i];
		}

		return *this; //salvarea modificarilor
	}

	//Operatorul de cast
	//CAST = CONVERSIE
	//OPERATORUL DE CAST ESTE SINGURUL OPERATOR CARE NU ARE SEMN DISTINCTIV
	//PRIN CAST (CONVERSIE) INTELEGEM TRANSFORMAREA UNUI OBIECT INTREG INTR-UN SINGUR ATRIBUT DE TIPUL: int/float/double/bool etc.
	//CAST-UL (CONVERSIA) TREBUIE SA AIBA LOC PRIN PRELUCRAREA ATRIBUTELOR DIN OBIECTUL NOSTRU, ASTFEL INCAT REZULTATUL FINAL AL PRELUCRARII SA FIE O UNICA VALORE DE TIPUL: int/float/double/bool etc.
	//TIPUL DE OPERATOR DE CAST TREBUIE SA COINCIDA CU TIPUL DE DATA AL REZULTATULUI FINAL (ex: daca mi-am ales sa implemenetez operatorul de cast la float, rezultatul final trebuie sa fie o unica valoare de tip float)
	//TOTI OPERATORII DE CAST, INDIFERENT DE TIPUL DE CONVERSIE, NU VOR FI DE TIPUL FRIEND
	//TOTI OPERATORII DE CAST, DEOARECE NU AU UN SEMN DISTINCTIV PE CARE SA IL TRECEM DUPA CUVANTUL CHEIE OPERATOR, VOR AVEA DENUMIREA FORMATA DIN CUVANTUL CHEIE OPERATOR URMAT DE TIPUL DE CONVERSIE ex: operator int()  operator float()  operator string()
	//DEOARECE IN DENUMIREA OPERATORULUI O SA APARA DEJA TIPUL DE DATA AL CONVERSIEI, TOTI OPERATORII DE CAST NU VOR MAI AVEA MENTIONAT TIPUL DE OPERATOR, PENTRU CA SE SUBINTELEGE DIN DENUMIREA ACESTORA
	//TOTI OPERATORII DE CAST AU UN SINGUR PARAMETRU, DEOARECE SUNT OPERATORI UNARI, IAR ACEST PARAMETRU ESTE OBIECTUL this 
	////SCHEMA:
	//operator tipulConversie()
	//{
	//}

	//OPERATORUL DE CAST LA FLOAT
	//SA SE CALCULEZE VALOAREA CHIRIEI MAGAZINULUI TINAND CONT CA VALOARE CHIRIEI PE LUNA PE MP ESTE DE 200 RON
	operator float(/*this*/)
	{
		float chirie;
		chirie = 200 * this->suprafataMagazinMP;
		return chirie;
	}

	//OPERATORUL DE CAST LA STRING
	//SA SE AFISEZE DENUMIREA PRODUSULUI CEL MAI SCUMP
	operator string(/*this*/)
	{
		float pretMaxim;
		pretMaxim = this->preturiProduse[0];
		string produsPretMaxim;
		produsPretMaxim = this->denumiriProduse[0];
		for (int i = 1; i < this->nrProduse; i++)
		{
			if (this->preturiProduse[i] > pretMaxim)
			{
				pretMaxim = this->preturiProduse[i];
				produsPretMaxim = this->denumiriProduse[i];
			}
		}
		return produsPretMaxim;
	}

	//Operatorul de autoincrementare - Operatorul ++ (CRESTERE CU O UNITATE)

	//EXISTA IN DOUA FORME:
	//++ preincrementare -> obiect1=++obiect2 (mai intai se face operatia de incrementare ++ si apoi se face operatia de atribuire =)
	//++ postincrementare -> obiect1=obiect2++ (mai intai se face operatia de atribuire = si apoi se face operatia de incrementare ++)

	//OPERTAORII ++ SI -- SE APLICA PE ATRIBUTE NUMERICE (ATENTIE DACA APLICAM PE NUMARATORUL UNUI VECTOR)

	//++ PREINCREMENTARE (implicit)
	//SA SE MAREASCA NUMARUL DE ANGAJATI CU O UNITATE, CONSIDERAND FAPTUL CA AM ANGAJAT O PERSOANA NOUA IN MAGAZIN
	Magazin& operator++(/*this*/)
	{
		this->nrAngajati++;
		return *this;
	}

	//++ POSTINCREMENTARE (explicit)
	//pentru ca noi nu avem voie sa implementam un operator de mai multe ori, o sa fie nevoie sa diferentiem op ++ in forma pre, de operatorul ++ in forma post, astfel incat sa nu implementam doi operatori identici
	//varianta ++ post se va diferentia de varianta ++ pre prin adaugarea cuvantului int in lista de parametrii (conventie la nivel de OOP)
	//SA SE MAREASCA NUMARUL DE ANGAJATI CU O UNITATE, CONSIDERAND FAPTUL CA AM ANGAJAT O PERSOANA NOUA IN MAGAZIN
	Magazin operator++(/*this*/int)
	{
		Magazin copie(*this);
		this->nrAngajati++;
		return copie;
	}

	//FISIERE
	//FISIERE TEXT SI FISIERE BINARE
	//Fisiere text - sunt fisierele cu orice fel de extensie in care informatia poate fi citita de utilizator sub forma de text (textul este citi si inteles)
	//Fisiere binare - sunt fisierele cu orice fel de extensie in care informatia nu poate fi citita de utilizator, deoarece este codata in cod ASCII, astfel incat utilizatorul sa nu distinga informatia scris (fisierel binare sunt utilizate in general pentru cripatrea informatiei)

	//Fisiere text

	//Scrierea in fisiere text
	//Vom invata sa facem din cod urmatoarele: construim un fisier in folder-ul programului nostru;dam o denumire fisierului;deschidem fisierul construit;scriem un obiect din void main in fisierul construit;inchidem fisierul
	//Pentru scrierea in fisiere text ne vom folosi de operatorul << (pe care l-am mai folosit si la afisarea pe consola, doar ca aici il vom folosi diferit, cu alte instructiuni, cu scopul de a scrie obiecte in fisiere text, deci supraincarcarea lui o sa fie diferita)
	//ostream (este o clasa folosita in op << de afisare pe consola) -> output stream -> clasa care are ca obiect specific, obiectul cout (obiectul cout ne ajuta sa afisam pe consola)
	//ofstream (este o clasa folosita in op << de scriere in fisiere text) -> output file stream -> clasa care are doua obiecte specifice, obiectul cout si obiectul file (obiectele cout si file ne vor ajuta sa scriem in fisiere text)
	//!!NU MAI AVEM VOIE SA SCRIEM TEXTE SUPLIMENTARE CA LA AFISAREA PE CONSOLA, CI VOM SCRIE STRICT ATRIBUTELE SEPARATE PRIN ENDL
	//!!NU AVEM VOIE SA TRECEM ATRIBUTELE CONSTANTE IN FISIERELE TEXT, NICI LA SCRIERE, NICI LA CITIRE
	friend ofstream& operator<<(/*nu mai avem this*/ofstream& file, const Magazin& obj)
	{
		file << obj.denumireMagazin << endl;
		file << obj.nrAngajati << endl;
		file << obj.suprafataMagazinMP << endl;
		file << obj.esteNonStop << endl;
		file << obj.numeProprietar << endl;
		file << obj.nrProduse << endl;
		for (int i = 0; i < obj.nrProduse; i++)
		{
			file << obj.preturiProduse[i] << endl;
			file << obj.denumiriProduse[i] << endl;
		}
		return file;
	}

	//Citirea din fisiere text
	//Vom invata sa facem din cod urmatoarele: deschidem un fisier din folder-ul programului nostru, specificand denumirea acestuia (fie fisierul creat anterior, fie un fisier text creat de noi manual);citim din fisierul ales un obiect intreg si il salvam intr-un obiect din void main;inchidem fisierul
	//Pentru citirea din fisiere text ne vom folosi de operatorul >> (pe care l-am folosit si la citirea de la tastatura, doar ca aici il vom folosi diferit, cu alte instructiuni, cu scopul de a citi din fisiere text obiecte, deci supraincarcarea lui o sa fie diferita)
	//istream (este o clasa folosita in op >> de citire de la tastatura) -> input stream -> clasa care are ca obiect specific, obiectul cin (obiectul cin ne ajuta sa citim de la tastatura)
	//ifstream (este o clasa folosita in op>> de citire din fisiere text) -> input file stream -> clasa care are doua obiecte specifice, obiectele cin si file (obiectele cin si file ne ajuta sa citim din fiserele text)
	//!!NU MAI TREBUIE SA FOLOSIM TEXTE SUPLIMENTARE DE TIPUL: "INTRODUCETI:...", DEOARECE NU MAI ESTE IMPLICAT UTILIZATORUL DE DATA ACEASTA, CI ATRIBUTELE SUNT CITITE DE COMPILATOR DIRECT DIN FISIERUL TEXT
	//!!NU AVEM VOIE SA TRECEM ATRIBUTELE CONSTANTE IN FISIERELE TEXT, NICI LA SCRIERE, NICI LA CITIRE
	friend ifstream& operator >> (/*nu mai avem this*/ifstream& file, Magazin& obj)
	{
		if (obj.numeProprietar != NULL)
		{
			delete[] obj.numeProprietar;
		}
		if (obj.preturiProduse != NULL)
		{
			delete[] obj.preturiProduse;
		}
		if (obj.denumiriProduse != NULL)
		{
			delete[] obj.denumiriProduse;
		}

		file >> obj.denumireMagazin;
		file >> obj.nrAngajati;
		file >> obj.suprafataMagazinMP;
		file >> obj.esteNonStop;

		char aux[100];
		file >> aux;
		obj.numeProprietar = new char[strlen(aux) + 1];
		strcpy(obj.numeProprietar, aux);

		file >> obj.nrProduse;

		obj.preturiProduse = new float[obj.nrProduse];
		obj.denumiriProduse = new string[obj.nrProduse];

		for (int i = 0; i < obj.nrProduse; i++)
		{
			file >> obj.preturiProduse[i];
			file >> obj.denumiriProduse[i];
		}

		return file;
	}

	//!!SCRIEREA SI CITIREA IN FISIERE TEXT SE FACE IN ACEEASI ORDINE (ATRIBUTELE SE TREC IN ACEEASI ORDINE ATAT LA SCRIERE, CAT LA CITIRE)

	//Fisiere binare
	//Nu mai avem voie sa folosim operatorii << si >> pentru fisiere binare, deoarece acesti operatori sunt destinati strict fisierelor text. Cei doi operatori << si >> nu au acces la tabela ASCII, prim urmare ei nu pot coda informatia in cod ascii, de aceea nu ii putem utiliza la fisiere binare, ei fiind destinati strict fisierlor text.
	//Deoarece nu mai putem utiliza operatorii << si >> pentru fisiere binare, o sa implementam doua metoda de tipul void care vor face: scrierea in fisiere binare + citirea din fisiere binare.

	//RECAPITULARE CLASE
	//ostream -> cout
	//istream -> cin
	//ofstream -> cout & file
	//ifstream -> cin & file
	//fstream -> file

	//Trebuie sa folosim clasa fstream care contine obiectul specific file, deoarece nu avem voie sa folosim ofstream si ifstream din cauza operatorilor cout<< si cin>> care nu au acces la tabela ASCII.
	//fstream -> file stream -> clasa folosita in fisere binare -> clasa care are un singur obiect specific, obiectul file

	//Operatia de serializare -> reprezinta procesul prin care ''codam textul'' in cod ascii (in binar), astfel incat atributele sa fie securizate/criptate, iar informatia nu mai poate fi citita/inteleasa de catre nimeni
	//						  -> reprezinta procesul prin care transformam fiecare atribut din tipul lui de data original (int/float/string etc) in tipul de data char* (cod ascii)
	//char* este tipul de data al codului ASCII in limbajul C++
	//cod ascii=char*=sir de biti
	//ex: atributul string denumireMagazin="Altex", trebuie sa il transformam din tipul lui de data original string in tipul de data char* (cod ascii)

	//Pnetru operatia de serializare folosim metoda WRITE
	//Metoda write este o metoda deja implementata in clasa fstream, aceasta metoda are in spate codul ASCII si face automat transformarea atributelor noastre in cod ascii

	//Metoda de scriere in fisiere binare
	void scriereInBinar(fstream& fisierBinar)
	{
		//string denumireMagazin;
		//fisierBinar.write((char*)&this->denumireMagazin, sizeof(string)); //!!!!nu putem serializa string-ul ca pe un atribut normal, deoarece 1. sizeof(string) nu exista, deoarece string-ul nu ocupa o memorie standard 2. compilatorul nu stie sa faca autmat conversia din string in char*, deoarece el nu recunoaste string-ul ca tip de data
		int nrLitereDenumireMagazin = this->denumireMagazin.size(); //calculam numarul de litere din atributul de tipul string
		fisierBinar.write((char*)&nrLitereDenumireMagazin, sizeof(int)); //scriem numarul de litere al atributlui de tipul string in fisierul binar
		fisierBinar.write(this->denumireMagazin.c_str(), nrLitereDenumireMagazin); //functia c_str face automat conversia din string in char* in locul compilatorului si este o functie deja implemnatta in clasa fstream

		//int nrAngajati;
		fisierBinar.write((char*)&this->nrAngajati, sizeof(int));
		//EXPLICATIE: compilatorul se duce la adresa de memorie a atributlui nrAngajati &this->nrAngajati ; la aceasta adresa de memorie regaseste valoarea 191 pe care o identifica de tipul int sizeof(int) ; converteste valoarea 191 din tipul int in tipul char* (char*) ; echivalentul obtinut in cod ascii il scrie in fisierul binar cu ajutorul metodei write fisierBinar.write

		//float suprafataMagazinMP;
		fisierBinar.write((char*)&this->suprafataMagazinMP, sizeof(float));

		//bool esteNonStop;
		fisierBinar.write((char*)&this->esteNonStop, sizeof(bool));

		//char* numeProprietar;
		int nrLitereNumeProprietar = strlen(this->numeProprietar); //calculam numarul de litere din atributului de tip char*
		fisierBinar.write((char*)&nrLitereNumeProprietar, sizeof(int)); //scriem numarul de litere al atributului char* in fisierul binar
		for (int i = 0; i < nrLitereNumeProprietar; i++)
		{
			fisierBinar.write((char*)&this->numeProprietar[i], sizeof(char)); //convertim in cod ascii atributul de tip char* litera cu litera
		}

		//int nrProduse;
		fisierBinar.write((char*)&this->nrProduse, sizeof(int));

		//float* preturiProduse;
		for (int i = 0; i < this->nrProduse; i++)
		{
			fisierBinar.write((char*)&this->preturiProduse[i], sizeof(float));
		}

		//string* denumiriProduse;
		for (int i = 0; i < this->nrProduse; i++)
		{
			int nrLitereDenumrieProdus = this->denumiriProduse[i].size();
			fisierBinar.write((char*)&nrLitereDenumrieProdus, sizeof(int));
			fisierBinar.write(this->denumiriProduse[i].c_str(), nrLitereDenumrieProdus);
		}
	}

	//Trebuie sa folosim clasa fstream care contine obiectul specific file, deoarece nu avem voie sa folosim ofstream si ifstream din cauza operatorilor cout<< si cin>> care nu au acces la tabela ASCII.
	//fstream -> file stream -> clasa folosita in fisere binare -> clasa care are un singur obiect specific, obiectul file

	//Operatia de deserializare -> reprezinta procesul prin care ''decodam codul ascii'' inapoi in textul original, astfel incat informatia din atribute sa poata fi citita si inteleasa din nou
	//							-> reprezinta procesul prin care transformam fiecare char* (cod ascii) inapoi in tipul de data original al atributlui (int/float/string etc)
	//char* este tipul de data al codului ASCII in limbajul C++
	//cod ascii=char*=sir de biti
	//ex: codul ascii din fisierul binar ()( il transformam din tipul de data char* inapoi in tipul de data original string "Altex"
	//ex: codul ascii fin fisierul binar %^& il transformam din tipul de data char* inapoi in tipul de data original int 191

	//Pentru opertai de deserizalizare a tributelor o sa folosim metoda READ
	//Metoda READ este o metoda deja implementata in C++ in clasa fstream, ea are acces la tabela ascii si face automat conversia din cod ascii in atributele noastre

	//Metoda de citire din fisiere binare
	void citireDinBinar(fstream& fisierBinar)
	{
		delete[] this->numeProprietar;
		delete[] this->preturiProduse;
		delete[] this->denumiriProduse;

		//string denumireMagazin;
		//fisierBinar.read((char*)&this->denumireMagazin, sizeof(string)); //!!!!nu putem serializa string-ul ca pe un atribut normal, deoarece 1. sizeof(string) nu exista, deoarece string-ul nu ocupa o memorie standard 2. compilatorul nu stie sa faca autmat conversia din string in char*, deoarece el nu recunoaste string-ul ca tip de data
		int nrLitereDenumireMagazin;
		fisierBinar.read((char*)&nrLitereDenumireMagazin, sizeof(int)); //citim numarul de litere al atributului de tipul string din fisierul binar
		string aux1;
		aux1.resize(nrLitereDenumireMagazin); //dimensionam variabila aux1 de fix cate litere trebuie sa aiba
		fisierBinar.read((char*)aux1.c_str(), nrLitereDenumireMagazin); //functia (char*)aux1.c_str() face automat conversia din char* inapoi in string in locul compilatorului
		this->denumireMagazin = aux1; //punem variabila aux1 inapoi in atributul denumireMagazin

		//int nrAngajati;
		fisierBinar.read((char*)&this->nrAngajati, sizeof(int));
		//EXPLICATIE: compilatorul se duce in fisierul binar si citeste codul ascii fisierBinar.read((char*) ; codul ascii in transfora din char* inapoi in int (char*) sizeof(int) ; valoarea 191 o scrie in atributul nrAngajati &this->nrAngajati

		//float suprafataMagazinMP;
		fisierBinar.read((char*)&this->suprafataMagazinMP, sizeof(float));

		//bool esteNonStop;
		fisierBinar.read((char*)&this->esteNonStop, sizeof(bool));

		//char* numeProprietar;
		int nrLitereNumeProprietar;
		fisierBinar.read((char*)&nrLitereNumeProprietar, sizeof(int)); //citim numarul de litere al atributului de tip char* din fisierul binar
		this->numeProprietar = new char[nrLitereNumeProprietar + 1];
		for (int i = 0; i < nrLitereNumeProprietar; i++)
		{
			fisierBinar.read((char*)&this->numeProprietar[i], sizeof(char)); //convertim din cod ascii atributul de tip char* litera cu litera
		}
		this->numeProprietar[nrLitereNumeProprietar] = '\0';

		//int nrProduse;
		fisierBinar.read((char*)&this->nrProduse, sizeof(int));

		//float* preturiProduse;
		this->preturiProduse = new float[this->nrProduse];
		for (int i = 0; i < this->nrProduse; i++)
		{
			fisierBinar.read((char*)&this->preturiProduse[i], sizeof(float));
		}

		//string* denumiriProduse;
		this->denumiriProduse = new string[this->nrProduse];
		for (int i = 0; i < this->nrProduse; i++)
		{
			int nrLitereDenumireProdus;
			fisierBinar.read((char*)&nrLitereDenumireProdus, sizeof(int));
			string aux2;
			aux2.resize(nrLitereDenumireProdus);
			fisierBinar.read((char*)aux2.c_str(), nrLitereDenumireProdus);
			this->denumiriProduse[i] = aux2;
		}
	}

	//aici se termina zona public a clasei
};

//AICI SE INITIALIZEAZA ATRIBUTUL STATIC
//REGULA: tipData numeClasa :: (operatorul de rezolutie) numeAtribut = valoare;
int Magazin::clasaCAENPrincipala = 47;

void main()
{
	//aici vom testa tot ce scriem in clasa noastra / void main-ul este mediul nostru de testare

	Magazin m1;
	cout << "Denumirea magazinului este:" << m1.getDenumireMagazin() << endl;
	cout << "Numarul de angajati este:" << m1.getNrAngajati() << endl;
	cout << "Suprafata este:" << m1.getSuprafataMagazinMP() << endl;
	cout << "Este non-stop? (1-DA ; 0-NU):" << m1.getEsteNonStop() << endl;
	cout << "An infiintare:" << m1.getAnInfiintare() << endl;
	cout << "Nume proprietar:" << m1.getNumeProprietar() << endl;
	cout << "Nr produse:" << m1.getNrProduse() << endl;
	cout << "Produse:" << endl;
	for (int i = 0; i < m1.getNrProduse(); i++)
	{
		cout << "Pret: " << m1.getPreturiProduse()[i] << endl;
		cout << "Denumire: " << m1.getDenumiriProduse()[i] << endl;
	}
	cout << endl << endl;

	Magazin m2("Flanco");
	cout << "Denumirea magazinului este:" << m2.getDenumireMagazin() << endl;
	cout << "Numarul de angajati este:" << m2.getNrAngajati() << endl;
	cout << "Suprafata este:" << m2.getSuprafataMagazinMP() << endl;
	cout << "Este non-stop? (1-DA ; 0-NU):" << m2.getEsteNonStop() << endl;
	cout << "An infiintare:" << m2.getAnInfiintare() << endl;
	cout << "Nume proprietar:" << m2.getNumeProprietar() << endl;
	cout << "Nr produse:" << m2.getNrProduse() << endl;
	cout << "Produse:" << endl;
	for (int i = 0; i < m2.getNrProduse(); i++)
	{
		cout << "Pret: " << m2.getPreturiProduse()[i] << endl;
		cout << "Denumire: " << m2.getDenumiriProduse()[i] << endl;
	}
	cout << endl << endl;

	Magazin m3("Zara", 50);
	cout << "Denumirea magazinului este:" << m3.getDenumireMagazin() << endl;
	cout << "Numarul de angajati este:" << m3.getNrAngajati() << endl;
	cout << "Suprafata este:" << m3.getSuprafataMagazinMP() << endl;
	cout << "Este non-stop? (1-DA ; 0-NU):" << m3.getEsteNonStop() << endl;
	cout << "An infiintare:" << m3.getAnInfiintare() << endl;
	cout << "Nume proprietar:" << m3.getNumeProprietar() << endl;
	cout << "Nr produse:" << m3.getNrProduse() << endl;
	cout << "Produse:" << endl;
	for (int i = 0; i < m3.getNrProduse(); i++)
	{
		cout << "Pret: " << m3.getPreturiProduse()[i] << endl;
		cout << "Denumire: " << m3.getDenumiriProduse()[i] << endl;
	}
	cout << endl << endl;

	Magazin m4("Nike", 30, 100.9);
	cout << "Denumirea magazinului este:" << m4.getDenumireMagazin() << endl;
	cout << "Numarul de angajati este:" << m4.getNrAngajati() << endl;
	cout << "Suprafata este:" << m4.getSuprafataMagazinMP() << endl;
	cout << "Este non-stop? (1-DA ; 0-NU):" << m4.getEsteNonStop() << endl;
	cout << "An infiintare:" << m4.getAnInfiintare() << endl;
	cout << "Nume proprietar:" << m4.getNumeProprietar() << endl;
	cout << "Nr produse:" << m4.getNrProduse() << endl;
	cout << "Produse:" << endl;
	for (int i = 0; i < m4.getNrProduse(); i++)
	{
		cout << "Pret: " << m4.getPreturiProduse()[i] << endl;
		cout << "Denumire: " << m4.getDenumiriProduse()[i] << endl;
	}
	cout << endl << endl;

	float preturi1[] = { 100.5,4900.88,1200.9,55.5 };
	string denumiri1[] = { "CabluHDMI","Monitor","Mixer","Baterie" };
	Magazin m5("Altex", 190, 590.88, 0, 2000, "Ana", 4, preturi1, denumiri1);
	cout << "Denumirea magazinului este:" << m5.getDenumireMagazin() << endl;
	cout << "Numarul de angajati este:" << m5.getNrAngajati() << endl;
	cout << "Suprafata este:" << m5.getSuprafataMagazinMP() << endl;
	cout << "Este non-stop? (1-DA ; 0-NU):" << m5.getEsteNonStop() << endl;
	cout << "An infiintare:" << m5.getAnInfiintare() << endl;
	cout << "Nume proprietar:" << m5.getNumeProprietar() << endl;
	cout << "Nr produse:" << m5.getNrProduse() << endl;
	cout << "Produse:" << endl;
	for (int i = 0; i < m5.getNrProduse(); i++)
	{
		cout << "Pret: " << m5.getPreturiProduse()[i] << endl;
		cout << "Denumire: " << m5.getDenumiriProduse()[i] << endl;
	}
	cout << endl << endl;

	float preturi2[] = { 200.99,150.8,57.88 };
	string denumiri2[] = { "Rochie","Bluza","Cercei" };
	Magazin m6("H&M", 50, 300.7, 0, 2020, "Mihai", 3, preturi2, denumiri2);
	cout << "Denumirea magazinului este:" << m6.getDenumireMagazin() << endl;
	cout << "Numarul de angajati este:" << m6.getNrAngajati() << endl;
	cout << "Suprafata este:" << m6.getSuprafataMagazinMP() << endl;
	cout << "Este non-stop? (1-DA ; 0-NU):" << m6.getEsteNonStop() << endl;
	cout << "An infiintare:" << m6.getAnInfiintare() << endl;
	cout << "Nume proprietar:" << m6.getNumeProprietar() << endl;
	cout << "Nr produse:" << m6.getNrProduse() << endl;
	cout << "Produse:" << endl;
	for (int i = 0; i < m6.getNrProduse(); i++)
	{
		cout << "Pret: " << m6.getPreturiProduse()[i] << endl;
		cout << "Denumire: " << m6.getDenumiriProduse()[i] << endl;
	}
	cout << endl << endl;

	cout << "--------------------------------APEL SETTERI--------------------------" << endl << endl;
	cout << "Obiectul m1 inainte de a apela setterii:" << endl << endl;
	cout << "Denumirea magazinului este:" << m1.getDenumireMagazin() << endl;
	cout << "Numarul de angajati este:" << m1.getNrAngajati() << endl;
	cout << "Suprafata este:" << m1.getSuprafataMagazinMP() << endl;
	cout << "Este non-stop? (1-DA ; 0-NU):" << m1.getEsteNonStop() << endl;
	cout << "An infiintare:" << m1.getAnInfiintare() << endl;
	cout << "Nume proprietar:" << m1.getNumeProprietar() << endl;
	cout << "Nr produse:" << m1.getNrProduse() << endl;
	cout << "Produse:" << endl;
	for (int i = 0; i < m1.getNrProduse(); i++)
	{
		cout << "Pret: " << m1.getPreturiProduse()[i] << endl;
		cout << "Denumire: " << m1.getDenumiriProduse()[i] << endl;
	}
	cout << endl << endl;

	m1.setDenumireMagazin("Profi");
	m1.setNrAngajati(90);
	m1.setSuprafataMagazinMP(900.5);
	m1.setEsteNonStop(1);
	m1.setNumeProprietar("Alexandra");
	float preturi3[] = { 190.88,26.77,23.6,9.8 };
	string denumiri3[] = { "Sampanie","Ciocolata","Ceai","Ulei" };
	m1.setProduse(4, preturi3, denumiri3);

	cout << "Obiectul m1 dupa ce au fost apelati setterii:" << endl << endl;
	cout << "Denumirea magazinului este:" << m1.getDenumireMagazin() << endl;
	cout << "Numarul de angajati este:" << m1.getNrAngajati() << endl;
	cout << "Suprafata este:" << m1.getSuprafataMagazinMP() << endl;
	cout << "Este non-stop? (1-DA ; 0-NU):" << m1.getEsteNonStop() << endl;
	cout << "An infiintare:" << m1.getAnInfiintare() << endl;
	cout << "Nume proprietar:" << m1.getNumeProprietar() << endl;
	cout << "Nr produse:" << m1.getNrProduse() << endl;
	cout << "Produse:" << endl;
	for (int i = 0; i < m1.getNrProduse(); i++)
	{
		cout << "Pret: " << m1.getPreturiProduse()[i] << endl;
		cout << "Denumire: " << m1.getDenumiriProduse()[i] << endl;
	}
	cout << endl << endl;

	//	/////////////////////////////////////////////////////DISCUTIE POINTERI////////////////////////////////////////////////////////
	//
	//	POINTERII
	//	se declara cu ajutorul caracterului *, pus langa tipurile de date simple: int*, float*, double*, bool*, char*, string*
	//	adresele de memorie sunt coduri in hexazecimal (8 CIFRE/LITERE 0-9 ; A-F), prin care fiecare variabila dintr-un program se identifica in memoria programului
	//	pointerii sunt tot variabile, cum sunt si variabilele int, float, double, bool, char, string, diferenta fiind ca pointerii nu stocheaza valori, ci stocheaza adrese de memorie
	//
	//	cout << "Adresa de memorie a variabilei nrAngajati pentru obiectul m5:" << &m5.nrAngajati << endl;
	//	int* m5NrAngajatiPointer = &m5.nrAngajati;
	//	cout << "Adresa de memorie a variabilei nrAngajati pentru obiectul m5:" << m5NrAngajatiPointer << endl;
	//	ADRESELE DE MEMORIE SE EXTRAG CU INSTRUCTIUNEA &numeVariabila -> de aici rezulta adresa de memorie in hexazecimal a vraibilei cautate de noi
	//	cout << endl << endl;
	//
	//	DIFERENTA DINTRE O VARIABILA SIMPLA SI O VARIABILA DE TIP POINTER
	//	int varsta = 24;
	//	int* varstaPointer = 24; !!!!!!!!!!!!!!!!!!!!GRESIT, UN POINTER NU POATE FI INITIALIZAT CU O VALOARE NICIODATA, DEOARECE POINTERII STOCHEAZA MEREU ADRESE DE MEMORIE!!!!!!!!!!!!!!!!!!!!!
	//	int* varstaPointer = &varsta;
	//	cout << "Variabila varsta:" << varsta << endl;
	//	cout << "Variabila varstaPointer:" << varstaPointer << endl;
	//	cout << endl << endl;
	//
	//	DEFERENTIEREA POINTERILOR - ESTE PROCEDEUL PRIN CARE PLECAND DE LA O ADRESA DE MEMORIE, PUTEM AFLA VALOAREA STOCATA LA ACEA ADRESA DE MEMORIE
	//	DEFERENTIEREA SE FACE CU CARACTERUL *
	//	cout << "Pointerul varstaPointer:" << varstaPointer << endl;
	//	cout << "Deferentierea pointerului varstaPointer:" << *varstaPointer << endl;
	//	cout << endl << endl;
	//
	//	DE CE FOLOSIM POINTERII IN POO SI CUM II FOLOSIM:
	//
	//	1)Pointerii in POO se folosesc deoarece gestioneaza memoria unui program intr-un mod mult mai optim fata de variabilele simple
	//	POINTERII OCUPA MEREU 4 OCTETI, INDIFERENT DE TIPUL DE POINTER (int*, float*, double*, bool*, char*, string*) SI INDIFERENT DE CATE VALORI STOCHEAZA ACEL POINTER (1 VAL, 2 VAL, 100 DE VAL, 1000 VAL)
	//
	//	VARIANTA GRESITA PRIN CARE MEMORIA PROGRAMULUI ESTE GESTIONATA GRESIT
	//	int notaExamen1 = 9;
	//	int notaExamen2 = 10;
	//	int notaExamen3 = 8;
	//	int notaExamen4 = 9;
	//	int notaExamen5 = 10;
	//	int notaExamen6 = 10;
	//	//MEMORIA OCUPATA DE CELE 6 NOTE: 4 OCTETI * 6 VARIABILE = 24 OCTETI
	//
	//	//VARIANTA CORECTA PRIN CARE MEMORIA PROGRAMULUI ESTE GESTIONATA CORECT
	//	int* vectorDeNote = { 9,10,8,9,10,10 };
	//	//MEMORIA OCUPATA DE VECTOR: 4 OCTETI
	//
	//	2)VECTORII sunt folositi in POO prin intermediul pointerilor
	//	VECTORII SUNT FOLOSITI PENTRU A STOCA VALORI MULTIPLE DE TIP ENUMERATIE
	//	VEZI DISCUTIA DIN PREGATIRE DIN PAINT
	//
	//	/////////////////////////////////////////////////////DISCUTIE POINTERI////////////////////////////////////////////////////////

	cout << "--------------------------------APEL CONSTRUCTORUL DE COPIERE--------------------------" << endl << endl;
	//obiectul macheta/obiectul deja existent in void main=m1
	//obiectul nou creat=m7
	Magazin m7(m1);

	cout << "Obiectul macheta m1:" << endl << endl;
	cout << "Denumirea magazinului este:" << m1.getDenumireMagazin() << endl;
	cout << "Numarul de angajati este:" << m1.getNrAngajati() << endl;
	cout << "Suprafata este:" << m1.getSuprafataMagazinMP() << endl;
	cout << "Este non-stop? (1-DA ; 0-NU):" << m1.getEsteNonStop() << endl;
	cout << "An infiintare:" << m1.getAnInfiintare() << endl;
	cout << "Nume proprietar:" << m1.getNumeProprietar() << endl;
	cout << "Nr produse:" << m1.getNrProduse() << endl;
	cout << "Produse:" << endl;
	for (int i = 0; i < m1.getNrProduse(); i++)
	{
		cout << "Pret: " << m1.getPreturiProduse()[i] << endl;
		cout << "Denumire: " << m1.getDenumiriProduse()[i] << endl;
	}
	cout << endl << endl;

	cout << "Obiectul nou creat m7:" << endl << endl;
	cout << "Denumirea magazinului este:" << m7.getDenumireMagazin() << endl;
	cout << "Numarul de angajati este:" << m7.getNrAngajati() << endl;
	cout << "Suprafata este:" << m7.getSuprafataMagazinMP() << endl;
	cout << "Este non-stop? (1-DA ; 0-NU):" << m7.getEsteNonStop() << endl;
	cout << "An infiintare:" << m7.getAnInfiintare() << endl;
	cout << "Nume proprietar:" << m7.getNumeProprietar() << endl;
	cout << "Nr produse:" << m7.getNrProduse() << endl;
	cout << "Produse:" << endl;
	for (int i = 0; i < m7.getNrProduse(); i++)
	{
		cout << "Pret: " << m7.getPreturiProduse()[i] << endl;
		cout << "Denumire: " << m7.getDenumiriProduse()[i] << endl;
	}
	cout << endl << endl;

	cout << "--------------------------------APEL OPERATORUL = --------------------------" << endl << endl;
	//obiectul macheta=m5
	//obiectul pe care vreau sa il modific=m2

	cout << "Obiectul m2 - inainte de a fi modificat:" << endl << endl;
	cout << "Denumirea magazinului este:" << m2.getDenumireMagazin() << endl;
	cout << "Numarul de angajati este:" << m2.getNrAngajati() << endl;
	cout << "Suprafata este:" << m2.getSuprafataMagazinMP() << endl;
	cout << "Este non-stop? (1-DA ; 0-NU):" << m2.getEsteNonStop() << endl;
	cout << "An infiintare:" << m2.getAnInfiintare() << endl;
	cout << "Nume proprietar:" << m2.getNumeProprietar() << endl;
	cout << "Nr produse:" << m2.getNrProduse() << endl;
	cout << "Produse:" << endl;
	for (int i = 0; i < m2.getNrProduse(); i++)
	{
		cout << "Pret: " << m2.getPreturiProduse()[i] << endl;
		cout << "Denumire: " << m2.getDenumiriProduse()[i] << endl;
	}
	cout << endl << endl;

	cout << "Obiectul m5 - obiectul macheta:" << endl << endl;
	cout << "Denumirea magazinului este:" << m5.getDenumireMagazin() << endl;
	cout << "Numarul de angajati este:" << m5.getNrAngajati() << endl;
	cout << "Suprafata este:" << m5.getSuprafataMagazinMP() << endl;
	cout << "Este non-stop? (1-DA ; 0-NU):" << m5.getEsteNonStop() << endl;
	cout << "An infiintare:" << m5.getAnInfiintare() << endl;
	cout << "Nume proprietar:" << m5.getNumeProprietar() << endl;
	cout << "Nr produse:" << m5.getNrProduse() << endl;
	cout << "Produse:" << endl;
	for (int i = 0; i < m5.getNrProduse(); i++)
	{
		cout << "Pret: " << m5.getPreturiProduse()[i] << endl;
		cout << "Denumire: " << m5.getDenumiriProduse()[i] << endl;
	}
	cout << endl << endl;

	m2 = m5;

	cout << "Obiectul m2 - dupa ce a fost modificat:" << endl << endl;
	cout << "Denumirea magazinului este:" << m2.getDenumireMagazin() << endl;
	cout << "Numarul de angajati este:" << m2.getNrAngajati() << endl;
	cout << "Suprafata este:" << m2.getSuprafataMagazinMP() << endl;
	cout << "Este non-stop? (1-DA ; 0-NU):" << m2.getEsteNonStop() << endl;
	cout << "An infiintare:" << m2.getAnInfiintare() << endl;
	cout << "Nume proprietar:" << m2.getNumeProprietar() << endl;
	cout << "Nr produse:" << m2.getNrProduse() << endl;
	cout << "Produse:" << endl;
	for (int i = 0; i < m2.getNrProduse(); i++)
	{
		cout << "Pret: " << m2.getPreturiProduse()[i] << endl;
		cout << "Denumire: " << m2.getDenumiriProduse()[i] << endl;
	}
	cout << endl << endl;

	cout << "--------------------------------METODE--------------------------" << endl << endl;
	//pentru metodele din categoria 2.1, apelul lor se face cu cout<<obiect.metoda
	//pentru metodele din categoria 2.2, apelul se face cu obiect.metoda

	cout << "Denumirea magazinului este:" << m1.getDenumireMagazin() << endl;
	cout << "Numarul de angajati este:" << m1.getNrAngajati() << endl;
	cout << "Suprafata este:" << m1.getSuprafataMagazinMP() << endl;
	cout << "Este non-stop? (1-DA ; 0-NU):" << m1.getEsteNonStop() << endl;
	cout << "An infiintare:" << m1.getAnInfiintare() << endl;
	cout << "Nume proprietar:" << m1.getNumeProprietar() << endl;
	cout << "Nr produse:" << m1.getNrProduse() << endl;
	cout << "Produse:" << endl;
	for (int i = 0; i < m1.getNrProduse(); i++)
	{
		cout << "Pret: " << m1.getPreturiProduse()[i] << endl;
		cout << "Denumire: " << m1.getDenumiriProduse()[i] << endl;
	}
	cout << endl << endl;

	cout << "Pretul minim din magazinul m1 este:" << m1.pretMinim() << endl << endl;

	m1.aplicareDiscount(0.2, 1);

	cout << "Denumirea magazinului este:" << m1.getDenumireMagazin() << endl;
	cout << "Numarul de angajati este:" << m1.getNrAngajati() << endl;
	cout << "Suprafata este:" << m1.getSuprafataMagazinMP() << endl;
	cout << "Este non-stop? (1-DA ; 0-NU):" << m1.getEsteNonStop() << endl;
	cout << "An infiintare:" << m1.getAnInfiintare() << endl;
	cout << "Nume proprietar:" << m1.getNumeProprietar() << endl;
	cout << "Nr produse:" << m1.getNrProduse() << endl;
	cout << "Produse:" << endl;
	for (int i = 0; i < m1.getNrProduse(); i++)
	{
		cout << "Pret: " << m1.getPreturiProduse()[i] << endl;
		cout << "Denumire: " << m1.getDenumiriProduse()[i] << endl;
	}
	cout << endl << endl;

	m1.aplicareDiscount(0.2, 100);

	cout << "Denumirea magazinului este:" << m1.getDenumireMagazin() << endl;
	cout << "Numarul de angajati este:" << m1.getNrAngajati() << endl;
	cout << "Suprafata este:" << m1.getSuprafataMagazinMP() << endl;
	cout << "Este non-stop? (1-DA ; 0-NU):" << m1.getEsteNonStop() << endl;
	cout << "An infiintare:" << m1.getAnInfiintare() << endl;
	cout << "Nume proprietar:" << m1.getNumeProprietar() << endl;
	cout << "Nr produse:" << m1.getNrProduse() << endl;
	cout << "Produse:" << endl;
	for (int i = 0; i < m1.getNrProduse(); i++)
	{
		cout << "Pret: " << m1.getPreturiProduse()[i] << endl;
		cout << "Denumire: " << m1.getDenumiriProduse()[i] << endl;
	}
	cout << endl << endl;

	cout << "Pretul maxim din magazinul m1 este:" << m1.pretMaxim() << endl << endl;
	cout << "Suma preturilor produselor din magazinul m1 este:" << m1.sumaTotalaPreturi() << endl << endl;
	cout << "Medie preturilor din magazinul m1 este:" << m1.pretMediu() << endl << endl;
	cout << "In magazinul m1 numarul de produse cu pretul peste 20 RON este:" << m1.determinareNrProduse(20) << endl << endl;

	m1.afisareObiect();
	cout << endl << endl;

	cout << "--------------------------------METODA DE ADAUGARE IN VECTOR--------------------------" << endl << endl;
	cout << "Obiectul m1 inainte de a adauga un produs nou:" << endl;
	m1.afisareObiect();
	cout << endl << endl;

	m1.adaugaProdusNou(18.6, "FainaIntegrala");

	cout << "Obiectul m1 dupa ce a fost adaugat un produs nou:" << endl;
	m1.afisareObiect();
	cout << endl << endl;

	cout << "--------------------------------METODA DE ELIMINARE DIN VECTOR--------------------------" << endl << endl;
	cout << "Obiectul m1 inainte de a elimina un produs:" << endl;
	m1.afisareObiect();
	cout << endl << endl;

	m1.eliminaProdus(3);

	cout << "Obiectul m1 dupa ce a fost eliminat un produs:" << endl;
	m1.afisareObiect();
	cout << endl << endl;

	cout << "--------------------------------OPERATORII SI SUPRAINCARCAREA OPERATORILOR-------------------------" << endl << endl;
	//pentru operatorii din categoria 3.1, apelul lor se face cu cout<<
	//pentru operatorii din categoria 3.2, apelul se face fara cout<<

	cout << "--------------------------------Operatorul <=-------------------------" << endl << endl;
	cout << "Numarul de angajati pentru obiectul m5 este:" << m5.getNrAngajati() << endl;
	cout << "Numarul de angajati pentru obiectul m6 este:" << m6.getNrAngajati() << endl;
	cout << "Numarul de angajati pentru obiectul m5 este <= decat numarul de anagajati pentru obiectul m6? (1-DA ; 0-NU):" << (m5 <= m6) << endl << endl;

	cout << "--------------------------------Operatorul ==-------------------------" << endl << endl;
	cout << "Obiectul m5:" << endl;
	m5.afisareObiect();
	cout << endl << endl;

	cout << "Obiectul m6:" << endl;
	m6.afisareObiect();
	cout << endl << endl;

	cout << "Obiectul m5 este egal in totalitate cu obiectul m6? (1-DA ; 0-NU):" << (m5 == m6) << endl << endl;

	cout << "--------------------------------Operatorul <<-------------------------" << endl << endl;
	cout << "Obiectul m5:" << endl << m5 << endl << endl;

	cout << "--------------------------------Operatorul >>-------------------------" << endl << endl;
	cout << "Obiectul m1 inainte de a fi citit de la tastatura:" << endl << m1 << endl << endl;

	//cin >> m1;
	cout << endl;

	cout << "Obiectul m1 dupa ce a fost citit de la tastatura:" << endl << m1 << endl << endl;

	cout << "--------------------------------Operatorul [] - de indexare-------------------------" << endl << endl;
	cout << m6 << endl << endl;
	cout << "Denumire produsului din magazinul m6 de pe pozitia 2 este:" << m6[2] << endl;
	cout << "Denumire produsului din magazinul m6 de pe pozitia -2 este:" << m6[-2] << endl;
	cout << "Denumire produsului din magazinul m6 de pe pozitia 200 este:" << m6[200] << endl;
	cout << endl << endl;

	cout << "--------------------------------Operatorul () - functie-------------------------" << endl << endl;
	cout << m5 << endl << endl;
	cout << "In magazinul m5 totalul TVA-urilor este:" << m5(0.19) << endl;
	cout << endl << endl;

	cout << "--------------------------------Operatorul ! - de negatie-------------------------" << endl << endl;
	cout << "Obiectul m3 este non-stop? (1-DA ; 0-NU):" << m3.getEsteNonStop() << endl;
	!m3;
	cout << "Obiectul m3 este non-stop? (1-DA ; 0-NU):" << m3.getEsteNonStop() << endl;
	cout << endl << endl;

	cout << "--------------------------------Operatorul += -------------------------" << endl << endl;
	cout << "Obiectul m6 inainte de a adauga un produs nou in magazin:" << endl << m6 << endl << endl;
	m6 += 70.5;
	cout << "Obiectul m6 dupa ce a fost adaugat un produs nou in magazin:" << endl << m6 << endl << endl;

	cout << "--------------------------------Operatorul -= -------------------------" << endl << endl;
	cout << "Obiectul m1 inainte de a elimina un produs din magazin:" << endl << m1 << endl << endl;
	m1 -= 1;
	cout << "Obiectul m1 dupa ce am eliminat un produs din magazin:" << endl << m1 << endl << endl;

	cout << "--------------------------------Operatorul de cast la float-------------------------" << endl << endl;
	cout << "Suprafata magazinului m1 este:" << m1.getSuprafataMagazinMP() << endl;
	cout << "Valoarea chiriei magazinului m1 este:" << (float)m1 << endl;
	cout << endl << endl;

	cout << "--------------------------------Operatorul de cast la string-------------------------" << endl << endl;
	cout << m1 << endl << endl;
	cout << "Denumirea produsului cel mai scump din magazinul m1 este:" << (string)m1 << endl;
	cout << endl << endl;

	cout << endl << endl << "-------------------------------------------OPERATORUL ++ preincrementare--------------------------" << endl << endl;
	cout << "Nr angajati m1:" << m1.getNrAngajati() << endl;
	cout << "Nr angajati m5:" << m5.getNrAngajati() << endl;

	m1 = ++m5;

	cout << "Nr angajati m1:" << m1.getNrAngajati() << endl;
	cout << "Nr angajati m5:" << m5.getNrAngajati() << endl;
	cout << endl << endl;

	cout << endl << endl << "-------------------------------------------OPERATORUL ++ postincrementare--------------------------" << endl << endl;
	cout << "Nr angajati m4:" << m4.getNrAngajati() << endl;
	cout << "Nr angajati m6:" << m6.getNrAngajati() << endl;

	m4 = m6++;

	cout << "Nr angajati m4:" << m4.getNrAngajati() << endl;
	cout << "Nr angajati m6:" << m6.getNrAngajati() << endl;
	cout << endl << endl;

	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

	cout << "--------------------------------FISIERE-------------------------" << endl << endl;

	cout << "--------------------------------FISIERE TEXT-------------------------" << endl << endl;

	//MODURILE DE DESCHIDERE ALE FISIERELOR IN COD
	//ios::in -> se foloseste cand vrem sa deschidem un fisier pentru citirea din fisier
	//ios::out -> se foloseste cand vrem sa deschidem un fisier pentru scrierea in fisier
	//ios::binary -> se foloseste pentru fisierele binare (se foloseste in combinatie cu unul din modurile ios::in / ios::out)
	//ios::binary ios::in -> citirea din fisiere binare
	//ios::binary ios::out -> scrierea in fisiere binare

	//SCRIEREA IN FISIERE TEXT

	//1.CREAREA FISIERULUI TEXT DIRECT DIN COD IN FOLDER-UL PROGRAMULUI NOSTRU SI DENUMIREA ACESTUIA
	//Magazin m1(atributele); //apelul constructorului cu toti parametrii din clasa Magazin in urma caruia mi-am construit un obiect Magazin
	ofstream f1("MagazineInFisereText.txt", ios::out); //apelul constructorului cu toti parametrii din clasa ofstream in urma caruia mi-am construit un obiect Fisier

	//2.Scrierea in fisierul creat anterior a unui obiect de tipul clasei Magazin cu op <<
	f1 << m1;

	//3.Inchidem fisierul
	f1.close();

	cout << m1 << endl << endl;

	//CITIREA DIN FISIERE TEXT

	//1.DESCHIDEREA FISERULUI TEXT DORIT DIN COD DIN FOLDER-UL PROGRAMULUI NOSTRU, MENTIONAND DENUMIREA ACESTUIA
	//Magazin m1(atributele); //apelul constructorului cu toti parametrii din clasa Magazin in urma caruia mi-am construit un obiect Magazin
	ifstream f2("MagazineInFisereText.txt", ios::in); //apelul constructorului cu toti parametrii din clasa ifstream in urma caruia mi-am deschis un obiect Fisier

	//2.CITIREA DIN FISIERUL TEXT DESCHID ANTERIOR SI SALVAREA INFORMATIILOR CITITE DIN FISIERUL TEXT INTR-UN OBIECT ALES DIN VOID MAIN
	cout << "Obiectul m3 inainte de a il modifica pe baza fisierului text:" << endl << m3 << endl << endl;
	f2 >> m3;
	cout << "Obiectul m3 dupa ce a fost modificat pe baza fisierului text:" << endl << m3 << endl << endl;

	//3.Inchidem fisierul
	f2.close();

	cout << "--------------------------------FISIERE BINARE-------------------------" << endl << endl;

	//SCRIEREA IN FISIERE BINARE

	//1.CREAREA FISIERULUI BINAR DIRECT DIN COD IN FOLDER-UL PROGRAMULUI NOSTRU SI DENUMIREA ACESTUIA
	fstream f3("MagazineInFisierBinar.bin", ios::binary | ios::out); //apelul constructorului cu toti parametrii din clasa fstream

	//2.Scriem in fisierul binar creat anterior un obiect de tipul clasei Magazin cu metoda scriereInBinare
	m1.scriereInBinar(f3);

	//3.Inchidem fisierul
	f3.close();

	//CITIREA DIN FISIERE BINARE

	//1.DESCHIDEREA FISIERULUI BINAR DORIT DIN COD DIN FOLDER-UL PROGRAMULUI NOSTRU, MENTIONAND DENUMRIEA ACESTUIA
	fstream f4("MagazineInFisierBinar.bin", ios::binary | ios::in); //apelul constructorului cu toti parametrii din clasa fstream

	cout << "Obiectul m4 inainte de a fi modificat pe baza fisierului binar:" << endl << m4 << endl << endl;
	//2.Citirea din fisierul binar deschis anterior a atributelor regaite in fisierul binar si salvarea lor intr-un obiect din void main cu ajutorul metodei citireDinBinar
	m4.citireDinBinar(f4);
	cout << "Obiectul m4 dupa ce a fost modificat pe baza fisierului binar:" << endl << m4 << endl << endl;

	//3.Inchidem fisierul
	f4.close();
}