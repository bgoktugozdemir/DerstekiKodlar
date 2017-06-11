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

class Kedi
{
	void Tirmala()
	{
		cout << ad << " Tirmikladi!" << endl;
	}

public:
	friend class Kopek;
	friend class Tekir;
	friend class VanKedisi;
	string ad;
	int yas;
	string cinsiyet;
	string cins;

	Kedi() : ad("PisiPisi"), yas(0), cinsiyet("Erkek")
	{
		cout << "1. Tip Kedi Olusturuldu!" << endl;
	}

	Kedi(string ad, int yas, string cinsiyet)
	{
		this->ad = ad;
		this->yas = yas;
		this->cinsiyet = cinsiyet;

		cout << "2. Tip Kedi Olusturuldu!" << endl;
	}

	~Kedi()
	{
		cout << "Kedi Olduruldu! " << ad << endl;
	}

	void Miyavla()
	{
		cout << ad << ": Meow" << endl;
	}

	void BilgileriGoster()
	{
		cout << ad << " " << yas << " " << cinsiyet << " " << cins << endl;
	}
};

class Tekir : public Kedi
{	
public:

	Tekir()
	{
		ad = "Belirtilmedi";
		yas = -1;
		cins = "Tekir";
		cout << "1. Tip Tekir Olusturuldu!" << endl;
	}

	Tekir(string ad, int yas, string cinsiyet)
	{
		this->ad = ad;
		this->yas = yas;
		this->cinsiyet = cinsiyet;
		cins = "Tekir";

		cout << "2. Tip Tekir Olusturuldu!" << endl;
	}

	~Tekir()
	{
		cout << "Tekir Olduruldu! " << ad << endl;
	}
	void Miyavla()
	{
		cout << ad << ": Miyav" << endl;
	}
};

class VanKedisi : public Kedi	//Van Kedisi, Kedinin Friend Class�. E�er Kal�t�m almazsa Friend Classa da eri�emez.
{
public:

	VanKedisi()
	{
		ad = "Belirtilmedi";
		yas = -2;
		cins = "Van Kedisi";
		cout << "1. Tip Van Kedisi Olusturuldu!" << endl;
	}

	VanKedisi(string ad, int yas, string cinsiyet)
	{
		this->ad = ad;
		this->yas = yas;
		this->cinsiyet = cinsiyet;
		cins = "Van Kedisi";

		cout << "2. Tip Van Kedisi Olusturuldu!" << endl;

	}

	~VanKedisi()
	{
		cout << "Van Kedisi Olduruldu!" << ad << endl;
	}

	void Tirmalat()
	{
		Tirmala();		//Van Kedisi, Kedinin Friendi oldu�u i�in private olan Tirmala() fonksiyonuna eri�ebiliyor.
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
	/*
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
	*/

	Kedi c1;
	Kedi c2("Kedi", 1, "Erkek");
	c1.Miyavla();
	c1.BilgileriGoster();
	c2.BilgileriGoster();

	cout << endl;

	Tekir ct1;
	Tekir ct2("Minik", 3, "Disi");
	ct2.Miyavla();
	ct1.BilgileriGoster();
	ct2.BilgileriGoster();

	cout << endl;

	VanKedisi cv1;
	VanKedisi cv2("Iri", 5, "Erkek");
	cv1.Miyavla();
	cv2.Tirmalat();
	cv1.BilgileriGoster();
	cv2.BilgileriGoster();

	cout << endl;

	Kedi c3 = ct2;			//E�itlik Oludu�u ��in Kedi'nin Yap�c� Fonksiyonu �a��r�lmaz fakat Y�k�c� Fonksiyonu �a��r�l�r.
	c3.Miyavla();			// �sim olarak Minik alacak. Ama Miyavla(); fonksiyonunu hala kediden al�yor. Yani de�i�kenleri Tekirden al�yor fakat fonksiyonlar� alm�yor.
	c3.BilgileriGoster();

	cout << endl;
}