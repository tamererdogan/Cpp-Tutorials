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

	//Dizi boyunca gezen d�ng�
	for(int i=0;i<=kelime_uzunlugu;i++)
	{

		//D�z dizisinin her eleman�n� Ters dizisinin son eleman�ndan ba�layarak kopyalama 
		ters[kelime_uzunlugu-i] = duz[i];
	}

	//Kelimenin tersini ekrana yazd�rma
	for(int j=0; j<=kelime_uzunlugu; j++)
	{
		cout << ters[j];
	}

	return 0;
}
