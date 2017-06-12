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
class d :public b, public c {	//Önce b, sonra c, sonra d oluþur. Önce d, sonra c, sonra b ölür.
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
		a *a1; /*her ikiside cagýrýlmaz*/
		cout << "******" << endl;
		a  a2; /*her ikiside cagýrýlýr*/
		cout << "******" << endl;
		a1 = new b(); /*
					  new den dolayý **destructor** yok her ikisinde
					  kalýtým aldýgý yerden itibaren b için yapýcý cagýrýlýr*/
		cout << "******" << endl;
		a *a3;
		b *b3;
		a3 = (a*)&b3;  /*her ikisde çaðýrýlmaz*/
		cout << "******" << endl;
		a * a4 = a1;
		/*her ikisi içinde çaðýrýlmaz*/
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