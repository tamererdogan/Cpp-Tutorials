#include <iostream>

#define KISISAYISI 10

using namespace std;

class notlar{
	
	public:
		string ad,soyad;
		int vize,final;
	
		void bilgi_gir(string ad,string soyad,int vize,int final)
		{
			this->ad = ad;
			this->soyad = soyad;
			this->vize = vize;
			this->final = final;
		}
		
		void bilgi_goster(void)
		{	
			cout << "Ad: "	  << ad	   << " ";
			cout << "Soyad: " << soyad << endl;
			cout << "Vize: "  << vize  << " ";	
			cout << "Final: " << final << endl;
			cout << "*------------------*\n";
		}
};

int main()
{
	string ad,soyad;
	int vize,final;
	notlar nots[KISISAYISI];
	
	for(int i=0;i<KISISAYISI;i++)
	{
		cout << "Ad: ";
		cin  >> ad;
		cout << "Soyad: ";
		cin  >> soyad;	
		cout << "Vize: ";
		cin  >> vize;	
		cout << "Final: ";
		cin  >> final;
		cout << "*----------------------*\n";
		
		nots[i].bilgi_gir(ad,soyad,vize,final);
	}
	
	system("CLS");
	
	for(int j=0;j<KISISAYISI;j++)
	{
		nots[j].bilgi_goster();	
	}
	
	return 0;
}
