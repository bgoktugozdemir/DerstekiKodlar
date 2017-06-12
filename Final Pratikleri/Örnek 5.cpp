#include <iostream>
#include <string>
#include <time.h>
using namespace std;


class a {
public:
	a() {
		cout << "Yapici a" << endl;
	}
	~a() {
		cout << "Yikici a" << endl;
	};

};
class b :public a {
public:
	b() {
		cout << "Yapici b" << endl;
	}
	~b() {
		cout << "Yikici b" << endl;
	};

};
class c : public a {
public:
	c() {
		cout << "Yapici c" << endl;
	}
	~c() {
		cout << "Yikici c" << endl;
	};

};
class d :public b, public c {	//�nce b, sonra c, sonra d olu�ur. �nce d, sonra c, sonra b �l�r.
public:
	d() {
		cout << "Yapici d" << endl;
	}
	~d() {
		cout << "Yikici d" << endl;
	};

};
void main() {
	if (true) {
		/*d d1;*/

		//KISACA POINTERLARDA YAPICI VE YIKICI FONKSIYON CAGIRILMAZ!

		cout << "******" << endl;
		a *a1; /*her ikiside cag�r�lmaz*/
		cout << "******" << endl;
		a  a2; /*her ikiside cag�r�l�r*/
		cout << "******" << endl;
		a1 = new b(); /*
					  new den dolay� **destructor** yok her ikisinde
					  kal�t�m ald�g� yerden itibaren b i�in yap�c� cag�r�l�r*/
		cout << "******" << endl;
		a *a3;
		b *b3;
		a3 = (a*)&b3;  /*her ikisde �a��r�lmaz*/
		cout << "******" << endl;
		a * a4 = a1;
		/*her ikisi i�inde �a��r�lmaz*/
		cout << "******" << endl;
	}

}
/*
	******
	******
	Yapici a
	******
	Yapici b
	******
	******
	******
	Yikici a
*/