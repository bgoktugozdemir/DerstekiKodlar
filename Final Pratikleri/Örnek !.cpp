#include <iostream>

using namespace std;

class Insan
{
public:

	Insan()
	{
		cout << "Insan Olustu" << endl;
		cout << sayi << endl;
	}

	Insan(int sayi)
	{
		this->sayi = sayi;
		cout << "Insan 2 Olustu" << endl;
		cout << this->sayi << endl;
	}

	~Insan()
	{
		cout << "Insan Oldu" << endl;
	}

	void Yaz()
	{
		cout << sayi << endl;
	}

protected:
	int sayi = 5;
};

class Erkek : public Insan
{
public:
	Erkek()
	{
		cout << "Erkek Olustu" << endl;
		cout << sayi << endl;

	}

	Erkek(int sayi)
	{
		this->sayi = sayi;
		cout << "Erkek 2 Olustu" << endl;
		cout << sayi << endl;

	}

	~Erkek()
	{
		cout << "Erkek Oldu" << endl;
	}
};

int main()
{
	Insan insan(19);
	Erkek er = Erkek();	//Bu satirdan sonra Erkek öldürülecek.
	er.Yaz();
	return 0;
}

/*
		YANLIÞ
	Insan 2 Olustu
	19
	Insan Olustu
	5
	Erkek 2 Olustu
	13
	13
	Erkek Oldu
	Insan Oldu
	Insan Oldu
*/