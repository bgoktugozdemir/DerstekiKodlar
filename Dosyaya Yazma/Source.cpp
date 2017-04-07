#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void main()
{
	ifstream dosyaOku("veriler.txt");
	if (dosyaOku.is_open())
	{
		int id;
		string ad, soyad;
		while (!dosyaOku.eof())
		{
			dosyaOku >> id >> ad >> soyad;
			cout << id << " " << ad << " " << soyad << endl;
		}
	}

	system("pause");
}
