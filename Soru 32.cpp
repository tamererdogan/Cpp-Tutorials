#include <iostream>

using namespace std;

int main()
{
	int sayi1,sayi2,toplam;
	
	cout << "Aralik giriniz: ";
	cin  >> sayi1;
	cout << "Aralik giriniz: ";
	cin  >> sayi2;
	
	for(;sayi1<=sayi2;sayi1++)  //Al�nan 2 say� aras�nda gezen d�ng�
	{
		toplam=0;
		
		for(int i=1;i<sayi1;i++)  //Pozitif tam b�lenlerini bulan d�ng�
		{
			if(sayi1%i == 0)   //i say�s� sayi1'in pozitif tam b�leni ise toplam'a eklenir
			{
				toplam += i;
			}
		}
		
		if(toplam == sayi1) //Tam b�lenlerinin toplam� say�n�n kendine e�itse
		{
			cout << "--" << sayi1 << endl;
		}
	}
	
	return 0;
}
