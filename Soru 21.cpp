#include <iostream>

using namespace std;

int main()
{
	int sayi,sonuc;
	
	cout << "Bir sayi giriniz:";
	cin >> sayi;
	
	sonuc = sayi*0.35; //sayýnýn %35'i
	
	if(sonuc > 1000)
	{
		cout << "Buyuk";
	}
	else
	{
		cout << "Kucuk";
	}
	
	return 0;
}
