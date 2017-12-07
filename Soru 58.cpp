#include <iostream>

#define OGRENCISAYISI 3  //Program�n ka� �grenciyi kar��la�t�racag� burdan degi�tirilebilir
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
	
	for(int i=0;i<OGRENCISAYISI;i++)   //Kullan�c�dan bilgileri al�yoruz
	{
		cout <<"Ad:";
		cin  >> ogr[i].ad;
		cout <<"Soyad:";
		cin  >> ogr[i].soyad;
		cout <<"Not:";
		cin  >> ogr[i].notu;
	}
	
	for(int a=0;a<OGRENCISAYISI;a++)  //Yapidaki notlar� diziye al�yoruz
	{
		notlar[a] = ogr[a].notu;
	}
	
	for(int b=0;b<OGRENCISAYISI;b++)  //Diziyi s�ral�yoruz
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
	
	//S�ral� dizideki notlar�n sahibini bulup yazd�r�yoruz
	for(int d=0;d<OGRENCISAYISI;d++) 
	{										
		for(int e=0;e<OGRENCISAYISI;e++)
		{
			if(notlar[d]==ogr[e].notu)
			{
				cout <<  ogr[e].ad <<" "<< ogr[e].soyad <<" "<< ogr[e].notu << endl;
				cout <<endl << "-----------------------------------" << endl; 
				ogr[e].notu = -1; //Yazd�rd�g�m�z �grencinin notunu -1 yap�yoruz ki bir sonraki taramada gene ayn� not i�in ayn� isim yaz�lmas�n
				break;
			}
		}	
	}
	
	return 0;
}
