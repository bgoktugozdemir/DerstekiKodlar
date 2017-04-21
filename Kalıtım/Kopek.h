#include <string>
#include <iostream>

using namespace std;

class Kopek
{
	/*
	int yas;
	int agirlik;	// => Kopek Class'� d���nda kimse eri�emez.
	string renk;
	*/
public:
	/*
	int yas;
	int agirlik;	// => Herkes Eri�ir
	string renk;
	*/
	virtual void havla()
	{
		cout << "Kopek Temel Sinif Hav Hav" << endl;
	}

	void yasGoster()
	{
		cout << "Kopegin Yasi: " << yas << endl;
	}

	virtual void yetenek() = 0;

	Kopek(void)
	{
		yas = 1;
		agirlik = 50;
		renk = "Kahverengi";
		cout << "Kopek Temel Sinif Yapici" << endl;
	}
	~Kopek(void)
	{

	}
protected:
	int yas;
	int agirlik;	// => Kopek Class'� ve Alt Class'lar d���nda kimse eri�emez. (�rn. Source eri�emez.)
	string renk;
};

class Kangal : public Kopek //Public yaparsak herkesle payla��ma a�ar�z. //Protected yaparsak bu class ve alt s�n�flar�yla payla��ma a�ar�z //Private yaparsak sadece bu class ile payla��r.
{
public:
	friend class SivasKangali;	// SivasKangali, Kangal'�n fonksiyonlar�n� kullanabilir fakat Kangal, SivasKangali'n�n fonksiyonlar�n� kullanamaz.
	void havla()
	{
		cout << yas << endl;
		cout << "Kangal Hov Hov diye havlar" << endl;
//		Kopek::havla();		//Default havla() fonksiyonunu �a��r�r.
	}

	void yetenek()
	{
		cout << "Kangal Suruyu Korur" << endl;
	}

	Kangal()
	{
		cout << "Kangal Temel Sinif Yapici" << endl;
	}
	~Kangal()
	{

	}
};

class SivasKangali	//Kangal, SivasKangali ile arkada� oldu�u i�in (Kangal => public Kopek bu sebeple) SivasKangali'da public Kopek olur.
{
public:
	SivasKangali(Kangal k)
	{
		cout<<k.yas<<endl;
	}

	SivasKangali()
	{
		yasGoster();
	}
	~SivasKangali()
	{

	}
};

class Akbas : public Kopek
{
public:
	void havla()
	{
		cout << "Akbas Hiov Hiov diye havlar" << endl;
	}

	void yetenek()
	{
		cou
	}

	Akbas()
	{

	}
	~Akbas()
	{

	}
};