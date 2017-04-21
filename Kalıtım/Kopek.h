#include <string>
#include <iostream>

using namespace std;

class Kopek
{
	/*
	int yas;
	int agirlik;	// => Kopek Class'ý dýþýnda kimse eriþemez.
	string renk;
	*/
public:
	/*
	int yas;
	int agirlik;	// => Herkes Eriþir
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
	int agirlik;	// => Kopek Class'ý ve Alt Class'lar dýþýnda kimse eriþemez. (Örn. Source eriþemez.)
	string renk;
};

class Kangal : public Kopek //Public yaparsak herkesle paylaþýma açarýz. //Protected yaparsak bu class ve alt sýnýflarýyla paylaþýma açarýz //Private yaparsak sadece bu class ile paylaþýr.
{
public:
	friend class SivasKangali;	// SivasKangali, Kangal'ýn fonksiyonlarýný kullanabilir fakat Kangal, SivasKangali'nýn fonksiyonlarýný kullanamaz.
	void havla()
	{
		cout << yas << endl;
		cout << "Kangal Hov Hov diye havlar" << endl;
//		Kopek::havla();		//Default havla() fonksiyonunu çaðýrýr.
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

class SivasKangali	//Kangal, SivasKangali ile arkadaþ olduðu için (Kangal => public Kopek bu sebeple) SivasKangali'da public Kopek olur.
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