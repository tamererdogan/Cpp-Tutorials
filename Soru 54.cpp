#include <iostream>

using namespace std;

struct kimlik
{
	char isim[10],soyad[10];
	int yas,no;
};

int main()
{
	kimlik tamer;
	
	cout << "Ad:";
	cin  >> tamer.isim;
	cout << "Soyad:";
	cin  >> tamer.soyad;	
	cout << "Yas:";
	cin  >> tamer.yas;
	cout << "No:";
	cin  >> tamer.no;	
	cout << endl;
	cout << tamer.isim <<" "<< tamer.soyad << endl;
	cout << tamer.yas  <<"  "<< tamer.no;

	return 0;
}
