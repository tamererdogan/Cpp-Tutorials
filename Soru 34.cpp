#include <iostream>

using namespace std;

int main()
{
	int dizi[8] = {12,31,25,75,32,81,1,44};
	int degistir;
	
	for(int i=0;i<8;i++) //Tutucu say�y� belirleyen d�ng�
	{
		for(int j=i;j<=7;j++) //Gezici say�y� belirleyen d�ng�
		{
			if(dizi[i] > dizi[j]) //Tutucu say� gezici say�dan b�y�kse
			{
				//�ki say�n�n yerini de�i�tir
				degistir = dizi[i];
				dizi[i]  = dizi[j];
				dizi[j]  = degistir;
		    }
		}
	}
	
	//S�ralanm�� diziyi ekrana yazd�rma
	for(int z=0;z<=7;z++)
		cout << dizi[z] << endl;
	
	return 0;
}
