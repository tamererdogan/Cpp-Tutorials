#include <iostream>
#define FILMSAYISI 3  //Girilecek film sayýsý buradan belirlenebilir

using namespace std;

class film{
	
	public:
		string yonetmen_ad,yonetmen_soyad,film_ad,tarih;
				
		void goster()
		{
			cout << "Filmin Yonetmeni:" << yonetmen_ad << " " << yonetmen_soyad<<endl;
			cout << "Filmin Adi:"		<< film_ad<<endl;
			cout << "Filmin Tarihi:" 	<< tarih<<endl;
			cout << "*-------------------------*\n";
		}
};

int main()
{
	film filmler[FILMSAYISI];
	string ad,soyad,f_ad,tarih;
	
	for(int i=0;i<FILMSAYISI;i++)
	{
		cout << "Yonetmenin Adi:" ;
		cin  >> ad;
		cout << "Yonetmenin Soyadi:" ;
		cin  >> soyad;
		cout << "Filmin Adi:"		;
		cin  >> f_ad;
		cout << "Filmin Tarihi:" 	;
		cin  >> tarih;
		
		filmler[i].yonetmen_ad    = ad;
		filmler[i].yonetmen_soyad = soyad;
		filmler[i].film_ad		  = f_ad;
		filmler[i].tarih		  = tarih;
		
		system("CLS");
	}
	 
	for(int j=0;j<FILMSAYISI;j++)
	{
		filmler[j].goster();
	}	 
	 
	return 0;
}
