#include <iostream>

using namespace std;

struct calisan
{
	char isim[10],soyad[10];
	float yas,maas;
};

int main()
{
	calisan memur[5];
	
	for(int i=0;i<5;i++)
	{
		cout << "Ad:";
		cin  >> memur[i].isim;
		cout << "Soyad:";
		cin  >> memur[i].soyad;	
		cout << "Yas:";
		cin  >> memur[i].yas;
		cout << "Maas:";
		cin  >> memur[i].maas;
		memur[i].yas+=5;
		for(int j=0;j<5;j++)
		{
			memur[i].maas += memur[i].maas * 0.1 ;
		} 
	}
	
	cout << "\n";

	for(int k=0;k<5;k++)
	{
		cout << memur[k].isim <<" "<< memur[k].soyad <<" "<< memur[k].yas << " " << memur[k].maas << endl;
	}
		
	return 0;
}

