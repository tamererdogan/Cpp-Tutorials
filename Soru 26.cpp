#include <iostream>

using namespace std;

int main()
{
	int toplam=0,sayi,sayi2,sayac=0;
	
	cout << "Kac sayi toplanilsin istiyorsun: ";
	cin  >> sayi;
	
	while(sayac!=sayi)
	{
		cout << "Sayi gir:";
		cin  >> sayi2;
		toplam += sayi2;
		sayac++;
	}	
	
	cout <<"Toplami: " << toplam;
	
	return 0;
}
