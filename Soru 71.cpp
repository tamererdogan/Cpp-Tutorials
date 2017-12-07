#include <iostream>

using namespace std;

class ogrenci{
	
	private:
		int numara;
		string ad;
	public:
		ogrenci(string isim,int no)
		{
			ad = isim;
			numara = no;
		}
		
		void karsilastir(string girilen_ad,int girilen_no)
		{	
			int sayac=0;
		
			if(girilen_ad==ad && girilen_no==numara)
				cout << "Bulundu..";
		}
};

int main()
{
	string ad;
	int no;
	ogrenci ogr[5] = {ogrenci("Tamer",174),ogrenci("Tugce",126),ogrenci("Tufan",1024),ogrenci("Furkan",251),ogrenci("Mustafa",141),};
	
	cout << "Ad gir:";
	cin  >> ad;
	cout << "Numara gir:";
	cin  >> no;
	
	for(int i=0;i<5;i++)
	{
		ogr[i].karsilastir(ad,no);
	}
		
	return 0;
}
