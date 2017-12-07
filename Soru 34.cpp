#include <iostream>

using namespace std;

int main()
{
	int dizi[8] = {12,31,25,75,32,81,1,44};
	int degistir;
	
	for(int i=0;i<8;i++) //Tutucu sayýyý belirleyen döngü
	{
		for(int j=i;j<=7;j++) //Gezici sayýyý belirleyen döngü
		{
			if(dizi[i] > dizi[j]) //Tutucu sayý gezici sayýdan büyükse
			{
				//Ýki sayýnýn yerini deðiþtir
				degistir = dizi[i];
				dizi[i]  = dizi[j];
				dizi[j]  = degistir;
		    }
		}
	}
	
	//Sýralanmýþ diziyi ekrana yazdýrma
	for(int z=0;z<=7;z++)
		cout << dizi[z] << endl;
	
	return 0;
}
