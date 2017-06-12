#include <iostream>
#include <string>
#include <time.h>
using namespace std;

class Silah {
public:
	int mermiSayisi;
	string model;
	Silah() {

	}

	virtual void AtesEt() {

	}

	void SilahiBirak()
	{
		cout << model << "Silah" << endl;
	}
};



class Ak47 : public Silah {
public:
	Ak47() {
		mermiSayisi = 30;
		cout << "Ak47 Alindi!" << endl;
	}

	~Ak47() {
		model = "Ak47";
		SilahiBirak();
	}

	void AtesEt() {
		cout << "Tarayarak ates etme animasyonu" << endl;
	}

};

class Awp : public Silah {
public:
	Awp() {
		mermiSayisi = 10;
		cout << "Awp Alindi!" << endl;
	}

	~Awp() {
		model = "Awp";
		SilahiBirak();
	}

	void AtesEt() {
		cout << "Zoom acma animasyonu ve ates et" << endl;
	}
};

Silah * YerdenSilahAl() {
	srand(time(NULL));
	int rasgele = rand() % 2;
	if (rasgele == 0) {
		return new Ak47();
	}
	else {
		return new Awp();
	}
}

void main() {
	Silah * silah = YerdenSilahAl();
	silah->AtesEt();
}