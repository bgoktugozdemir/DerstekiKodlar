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

	Insan(string ad, string soyad, int yas)
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

class Erkek : public Insan
{
public:

	Erkek()// : ad("Isimsiz") ad deðiþkeni Erkek classýnda deðilde Insan classýnda tanýmlandýðý için hata verir.
	{
		ad = "Isimsiz";
		soyad = "Erkek";
		yas = -1;
		cinsiyet = "Erkek";
		cout << "1. Tip Erkek Olusturuldu" << endl;
	}

	Erkek(string ad, string soyad,int yas) // : cinsiyet("Erkek") Burada default olarak gönderebilmek için cinsiyet deðiþkeni bu classýn içinde tanýmlanmýþ olmalý
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
public:
	string kSoyadi;

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
		this->cinsiyet = "Kadin";	//this koymasak da olur. this koymazsak en yakýndaki cinsiyete gider. Ýkisi de ayný yerde.
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

void main()
{
	Insan i1;
	i1.BilgileriGoster();
	Insan i2("Kara", "Kartal", 114);
	i2.BilgileriGoster();
	Erkek e1;
	Erkek e2("Goktug", "Ozdemir", 20);
	e1.BilgileriGoster();
	e2.BilgileriGoster();
	Kadin k1;
	Kadin k2("Kizin", "Biri", 19, "ksoy");
	k1.BilgileriGoster();
	k2.BilgileriGoster();
}