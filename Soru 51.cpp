#include <iostream>

using namespace std;

void faktoriyel_hesap(int*);

int main()
{
	int dizi[10];
	
	for(int i=0;i<10;i++)
	{
		cout << "Sayi gir :";
		cin  >> dizi[i];
	}
	
	faktoriyel_hesap(dizi);
	
	for(int i=0;i<10;i++)
	{
		cout << dizi[i] << " ";
	}
	
	return 0;
}

void faktoriyel_hesap(int* faktoriyel)
{
	int sayi;
	
	for(int i=0;i<10;i++)
	{   
		int sayi2=1;
		sayi = *(faktoriyel+i);   //Dizinin eleman�n� say� de�i�kenine ald�k
		for(int j=1;j<=sayi;j++)  //Say�n�n fakt�riyelini bulup sayi2'ye atad�k
		{
			sayi2*=j;
		}	
		*(faktoriyel+i) = sayi2;  //sayi2'deki fakt�riyeli dizideki eleman�n yerine atad�k
	}
}
