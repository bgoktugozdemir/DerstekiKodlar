//28.04.2017
//Polymorphism

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class kisi
{
	string ad, soyad, no;
public:
	kisi()
	{
		ad = "boy";
		soyad = "bos";
		no = "bos";
	}

	kisi(string Ad, string Soyad, string No)
	{
		ad = Ad;
		soyad = Soyad;
		no = No;
	}

	void kisiYaz()
	{
		cout << "Ad: " << ad << endl;
		cout << "Soyad: " << soyad << endl;
		cout << "No: " << no << endl;
	}

	~kisi()
	{

	}

private:

};

vector<kisi> kisiOlustur()
{
	kisi k1("Ahmet", "Bilgin", "1234");
	kisi k2("Mehmet", "Bilgin", "34");
	kisi k3("Hasan", "Bilgin", "134");

	vector<kisi> kisiler;
	kisiler.push_back(k1);
	kisiler.push_back(k2);
	kisiler.push_back(k3);
	return kisiler;
}

void kisilerYaz(vector<kisi> kisiler)
{
	for (int i = 0; i < kisiler.size(); i++)
	{
		kisiler[i].kisiYaz();
	}
}

vector<kisi*> kisiOlustur2()		//Vektör'ün dýþýna çýkýldýðýnda içini sildiði için size'ý 0 veriyor. Eðer dinamik(new) yaparsak size'ý silmez.
{
	kisi * k1 = new kisi ("Ahmet", "Bilgin", "1234");
	kisi * k2 = new kisi ("Mehmet", "Bilgin", "34");
	kisi * k3 = new kisi ("Hasan", "Bilgin", "134");

	vector<kisi*> kisiler;
	kisiler.push_back(k1);
	kisiler.push_back(k2);
	kisiler.push_back(k3);
	return kisiler;
}

void kisilerYaz2(vector<kisi*> kisiler)
{
	for (int i = 0; i < kisiler.size(); i++)
	{
		kisiler[i]->kisiYaz();
	}
}

void arttir(int &a, int &b)
{
	a = a*a;
	b = b*b*b;
}

void main()
{
	vector<kisi> kisiler;
	vector<kisi*> kisiler2;
	kisiler = kisiOlustur();
	//kisilerYaz(kisiler);

	kisiler2 = kisiOlustur2();
	kisilerYaz2(kisiler2);

	int a = 5, b = 3;
	cout << "a = " << a << "b = " << b << endl;
	arttir(a,b);
	cout << "a = " << a << "b = " << b << endl;
}