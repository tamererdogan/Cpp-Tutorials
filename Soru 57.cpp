#include <iostream>

using namespace std;

struct ogrenci
{
	char ad[10],soyad[10];
	int vize,final,notu;
};

int main()
{
	ogrenci ogr[3];
	
	for(int i=0;i<3;i++)
	{
		cout <<"Ad:";
		cin  >> ogr[i].ad;
		cout <<"Soyad:";
		cin  >> ogr[i].soyad;
		cout <<"Vize:";
		cin  >> ogr[i].vize;
		cout <<"Final:";
		cin  >> ogr[i].final;
		ogr[i].notu = ogr[i].vize*0.3 + ogr[i].final*0.7;
	}
	
	cout <<"------------------------------------------------\n";
	
	for(int i=0;i<3;i++)
	{
		if(ogr[i].notu>=60)
			cout << ogr[i].ad <<" "<<ogr[i].soyad<<" gecti\n";
		else
			cout << ogr[i].ad <<" "<<ogr[i].soyad<<" kaldi\n";
	}
	
	return 0;
}
