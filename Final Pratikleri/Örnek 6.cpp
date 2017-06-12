#include <iostream>
#include <string>
#include <time.h>
using namespace std;

class A
{
public:
	A()
	{
		cout << "Yapici A" << endl;
	}
	~A()
	{
		cout << "Yikici A" << endl;
	}
};

class B: public A
{
public:
	B()
	{
		cout << "Yapici B" << endl;
	}
	~B()
	{
		cout << "Yikici B" << endl;
	}
};

class C
{
public:
	C()
	{
		cout << "Yapici C" << endl;
	}
	~C()
	{
		cout << "Yikici C" << endl;
	}
};

class D : public C
{
public:
	D()
	{
		cout << "Yapici D" << endl;
	}
	~D()
	{
		cout << "Yikici D" << endl;
	}
};

class E
{
public:
	E()
	{
		cout << "Yapici E" << endl;
	}
	~E()
	{
		cout << "Yikici E" << endl;
	}
};

class F : public E

{
public:
	F()
	{
		cout << "Yapici F" << endl;
	}
	~F()
	{
		cout << "Yikici F" << endl;
	}
};

void main()
{
	/*	3 Örnek'te de pointer eþitliði yapýldý.	*/
	/*	1	*/
	A *pA = new B();

	/*	2	*/
	D d;
	C * pC = &d;

	/*	3	*/
	F *pF = new F();
	E * pE = pF;
}
/*

*/