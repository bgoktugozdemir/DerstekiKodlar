#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void main()
{
	ofstream dosyaYaz("veriler.txt",ios::app);//ios::app yazmazsak eskisini silip yenisini yazar. (ofstream dosyaYaz("veriler.txt");)
	int id=1;
	string ad="Ahmet";
	string soyad="Bilir";
	dosyaYaz << id << " " << ad << " " << soyad << endl;
	int id2 = 2;
	string ad2 = "Mehmet";
	string soyad2 = "Bilir";
	dosyaYaz << id2 << " " << ad2 << " " << soyad2 << endl;

	dosyaYaz.close();


	system("pause");
}