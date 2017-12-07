#include <iostream>

using namespace std;

int main()
{
	char duz[10],ters[10];
	int  kelime_uzunlugu = 0,k=0;

	cout << "Kelime gir :";
	cin  >> duz;
	
	while(true) //kelime uzunlugu bulma
	{
		if(duz[k] != '\0')
		{
			kelime_uzunlugu++;
			k++;
		}else
		{
			break;
		}
	}

	kelime_uzunlugu--;

	//Dizi boyunca gezen döngü
	for(int i=0;i<=kelime_uzunlugu;i++)
	{

		//Düz dizisinin her elemanýný Ters dizisinin son elemanýndan baþlayarak kopyalama 
		ters[kelime_uzunlugu-i] = duz[i];
	}

	//Kelimenin tersini ekrana yazdýrma
	for(int j=0; j<=kelime_uzunlugu; j++)
	{
		cout << ters[j];
	}

	return 0;
}
