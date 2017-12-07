#include <iostream>

using namespace std;

int main()
{
	int sayi1,sayi2,toplam;
	
	cout << "Aralik giriniz: ";
	cin  >> sayi1;
	cout << "Aralik giriniz: ";
	cin  >> sayi2;
	
	for(;sayi1<=sayi2;sayi1++)  //Alýnan 2 sayý arasýnda gezen döngü
	{
		toplam=0;
		
		for(int i=1;i<sayi1;i++)  //Pozitif tam bölenlerini bulan döngü
		{
			if(sayi1%i == 0)   //i sayýsý sayi1'in pozitif tam böleni ise toplam'a eklenir
			{
				toplam += i;
			}
		}
		
		if(toplam == sayi1) //Tam bölenlerinin toplamý sayýnýn kendine eþitse
		{
			cout << "--" << sayi1 << endl;
		}
	}
	
	return 0;
}
