#include <iostream>
#include <string>
using namespace std;

class Insan
{

public:
	string ad;
	string soyad;
	int yas;
	string cinsiyet = "Insan";
	Insan() : ad("Isimsiz"), soyad("Insan"), yas(0)
	{
		cout << "1. Tip Insan Olusturuldu" << endl;
	}

	Insan(string ad, string soyad, int yas)					//Insan(string ad, string soyad, int yas), Insan() Overload
	{
		this->ad = ad;
		this->soyad = soyad;
		this->yas = yas;

		cout << "2. Tip Insan Olusturuldu." << endl;
	}

	~Insan()
	{
		cout << "Insan olduruldu. " << ad << endl;
	}

	void BilgileriGoster()
	{
		cout << ad << " " << soyad << " " << yas << " " << cinsiyet << endl;
	}
};

class Erkek : public Insan		//Public => Insan'�n Publiclerini Public, Protectedlar�n� Protected olarak tutar. Protectec => Public ve Protectedlar� Protected olarak tutar. Private => Her�eyi private olarak tutar.
{
public:

	Erkek()// : ad("Isimsiz") ad de�i�keni Erkek class�nda de�ilde Insan class�nda tan�mland��� i�in hata verir.
	{
		ad = "Isimsiz";
		soyad = "Erkek";
		yas = -1;
		cinsiyet = "Erkek";
		cout << "1. Tip Erkek Olusturuldu" << endl;
	}

	Erkek(string ad, string soyad,int yas) // : cinsiyet("Erkek") Burada default olarak g�nderebilmek i�in cinsiyet de�i�keni bu class�n i�inde tan�mlanm�� olmal�
	{
		this->ad = ad;
		this->soyad = soyad;
		this->yas = yas;
		cinsiyet = "Erkek";
		cout << "2. Tip Erkek Olusturuldu." << endl;
	}

	~Erkek()
	{
		cout << "Erkek Olduruldu " << ad << endl;
	}

};

class Kadin : public Erkek
{

	string kSoyadi;
	friend class KizCocuk;			//friend yazisi publicte ya da ba�ka bir yerde de olabilirdi. Buradaki kod sayesinde KizCocuk class� Kadin'in private'�na kadar eri�ebilir.

public:

	Kadin()
	{
		soyad = "Kadin";
		yas = -2;
		cinsiyet = "Kadin";
		kSoyadi = "-Yok-";
		cout << "1. Tip Kadin Olusturuldu!" << endl;
	}

	Kadin(string ad, string soyad, int yas, string kSoyadi) : kSoyadi("-Yok-")
	{
		this->ad = ad;
		this->soyad = soyad;
		this->yas = yas;
		this->cinsiyet = "Kadin";	//this koymasak da olur. this koymazsak en yak�ndaki cinsiyete gider. �kisi de ayn� yerde.
		this->kSoyadi = kSoyadi;

		cout << "2. Tip Kadin Olusturuldu!" << endl;
	}

	~Kadin()
	{
		cout << "Kadin Olduruldu " << ad << endl;
	}

	void BilgileriGoster()
	{
		cout << ad << " " << soyad << " " << yas << " " << cinsiyet << " " << kSoyadi << endl;
	}
};

class KizCocuk : public Kadin
{
public:

	KizCocuk()
	{
		soyad = "Kiz";
		yas = -3;
		cinsiyet = "Kiz";
		kSoyadi = "DahaCocukAQ";
		cout << "1. Tip Kiz Cocugu Olusturuldu!" << endl;
	}
	KizCocuk(string ad, string soyad, int yas)
	{
		this->ad = ad;
		this->soyad = soyad;
		this->yas = yas;

		cinsiyet = "Kiz";
		kSoyadi = "DahaCocukAQ";

		cout << "2. Tip Kiz Cocugu Olusturuldu!" << endl;
	}

	~KizCocuk()
	{
		cout << "Kiz Cocugu Olduruldu " << ad << endl;
	}
};

void main()
{
	Insan i1;
	Insan i2("Kara", "Kartal", 114);
	i1.BilgileriGoster();
	i2.BilgileriGoster();
	Erkek e1;
	Erkek e2("Goktug", "Ozdemir", 20);
	e1.BilgileriGoster();
	e2.BilgileriGoster();
	Kadin k1;
	Kadin k2("Kizin", "Biri", 19, "ksoy");
	k1.BilgileriGoster();
	k2.BilgileriGoster();
	KizCocuk kc1;
	KizCocuk kc2("Minik", "Kiz", 4);
	kc1.BilgileriGoster();
	kc2.BilgileriGoster();
}