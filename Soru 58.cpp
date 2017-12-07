#include <iostream>

#define OGRENCISAYISI 3  //Programýn kaç ögrenciyi karþýlaþtýracagý burdan degiþtirilebilir
#define ADBOYUT	10		 //isim boyutu belirlenebilir

using namespace std;

struct ogrenci
{
	char ad[ADBOYUT],soyad[ADBOYUT];
	int notu,sira=0;
};

int main()
{
	ogrenci ogr[OGRENCISAYISI];
	ogrenci sirali[OGRENCISAYISI];
	int degistir,index;
	int notlar[OGRENCISAYISI];
	
	for(int i=0;i<OGRENCISAYISI;i++)   //Kullanýcýdan bilgileri alýyoruz
	{
		cout <<"Ad:";
		cin  >> ogr[i].ad;
		cout <<"Soyad:";
		cin  >> ogr[i].soyad;
		cout <<"Not:";
		cin  >> ogr[i].notu;
	}
	
	for(int a=0;a<OGRENCISAYISI;a++)  //Yapidaki notlarý diziye alýyoruz
	{
		notlar[a] = ogr[a].notu;
	}
	
	for(int b=0;b<OGRENCISAYISI;b++)  //Diziyi sýralýyoruz
	{	
		for(int c=b;c<OGRENCISAYISI;c++)
		{
			if(notlar[b] < notlar[c])
			{
				degistir = notlar[c];
				notlar[c]  = notlar[b];
				notlar[b]  = degistir;
	    	}
		}
	}
	
	cout <<endl << "******************************"<< endl;
	
	//Sýralý dizideki notlarýn sahibini bulup yazdýrýyoruz
	for(int d=0;d<OGRENCISAYISI;d++) 
	{										
		for(int e=0;e<OGRENCISAYISI;e++)
		{
			if(notlar[d]==ogr[e].notu)
			{
				cout <<  ogr[e].ad <<" "<< ogr[e].soyad <<" "<< ogr[e].notu << endl;
				cout <<endl << "-----------------------------------" << endl; 
				ogr[e].notu = -1; //Yazdýrdýgýmýz ögrencinin notunu -1 yapýyoruz ki bir sonraki taramada gene ayný not için ayný isim yazýlmasýn
				break;
			}
		}	
	}
	
	return 0;
}
