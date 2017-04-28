//28.04.2017
//Polymorphism

#include <iostream>
#include <string>

using namespace std;

class poligon
{
protected:
	float en, boy;
public:
	poligon()
	{

	}

	poligon(float En, float Boy)
	{
		en = En;
		boy = Boy;
	}

	~poligon()
	{

	}

	void setUzunluk(float En, float Boy)
	{
		en = En;
		boy = Boy;
	}

	void uzunlukYaz()
	{
		cout << "En: " << en << endl;
		cout << "Boy: " << boy << endl;
	}
};
	
class dortgen : public poligon
{
public:
	dortgen()
	{

	}

	float alan()
	{
		return (en*boy);
	}

	~dortgen()
	{

	}
};

	class ucgen : public poligon
	{
	public:
		ucgen()
		{
			
		}
		
		float alan()
		{

			return (en*boy)/2;
		}

		~ucgen()
		{

		}

	private:
};

void main()
{
	ucgen p1;
	p1.setUzunluk(3, 4);
	dortgen p2;
	p2.setUzunluk(3, 4);
	float alanP1 = p1.alan();
	float alanP2 = p2.alan();
	cout << "Ucgenin Alani: " << alanP1 << endl;
	cout << "Dortgenin Alani: " << alanP2 << endl;

	poligon p;
	p = p1;
	p.uzunlukYaz();
}