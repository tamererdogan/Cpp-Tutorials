#include <iostream>

using namespace std;

class personel{
	
	public:
		string ad,soyad;
		int maas;
		
		void goster()
		{
			cout << ad << " " << soyad << " " << maas << endl;  
		}
};

int main()
{
	int sayac=0,karar=0,degis;
	int maas[100];
	personel pers[100];
	
	while(1)
	{
		cout << "Ad: ";
		cin  >>  pers[sayac].ad;
		cout << "Soyad: ";
		cin  >>  pers[sayac].soyad;
		cout << "Maas: ";
		cin  >>  pers[sayac].maas;
		cout << "Cikmak icin -1 gir: ";
		cin  >>  karar;
		
		sayac++;
		
		if(karar==-1)
			break;
	}
	
	for(int i=0;i<sayac;i++)  //Personel maaþlarý maas dizisine alýndý
	{
		maas[i] = pers[i].maas;
	}
	
	for(int j=0;j<sayac;j++) //maas dizisi büyükten küçüge dogru sýralandý
	{
		for(int y=0;y<sayac;y++)
		{
			if(maas[j]>maas[y])
			{
				degis = maas[j];
				maas[j] = maas[y];
				maas[y] = degis;
			}
		}
	}	
	
	for(int k=0;k<sayac;k++)  //maas dizisindeki sýraya uyan personeller yazdýrýlýyor
	{
		for(int z=0;z<sayac;z++)
		{
			if(maas[k] == pers[z].maas)
			{
				pers[z].goster();
				pers[z].maas = -2; 
			}
		}
	}

	return 0;

}
