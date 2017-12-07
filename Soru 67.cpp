#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class ev{
	
	private:
		string il;
		int daireNo,katNo,kira;
	
	public:
		ev(int dNo,int kNo,int kira,string ev_il)
		{
			daireNo = dNo;
			katNo   = kNo;
			this->kira = kira;
			il = ev_il;
			goster();
		}
		
		void goster()
		{
			cout << "Bulunan Il: " << il     	 << endl;
			cout << "Daire NO: "   << daireNo    << endl;
			cout << "Kat NO: "     << katNo      << endl;
			cout << "Kira: "       << this->kira << endl;
		}
};

int main()
{
	int dNo,kNo,kira,dene,durum=1;
	string il,karar;
	
	time_t sn= time(NULL);
	srand(sn);
	
	while(durum)
	{
		dNo  = rand()%30+1;
		kNo  = rand()%5+1;
		kira = rand()%2000+500;
		dene = rand()%5;
		
		switch(dene)
		{
			case 0:
				il = "Adana";
				break;
			case 1:
				il = "Mersin";
				break;
			case 2:
				il = "Hatay";
				break;			
			case 3:
				il = "Nigde";
				break;		
			case 4:
				il = "Bursa";
				break;		
		}
		
		ev kiralik_ev(dNo,kNo,kira,il); 
		cout << "Devam Etmek Istiyor Musunuz? (Evet yada Hayir yaziniz):";
		cin  >> karar;
		
		if(karar=="Evet")
			system("CLS");
		else if(karar=="Hayir")
			durum = 0;
		else
		{
			system("CLS");
			cout << "Yanlis Komut..Yeni ev gormek icin lutfen bir tusa basin\n";
			system("PAUSE");
			system("CLS");
		}
	}
	
	return 0;
}
