#include <iostream>

using namespace std;

class varsayilansinif{
	
	private:
		string ad,soyad;
		int yas;
	
	public:	
	
		void varsayilan(string a="NuLL",string s="NuLL",int y=0)
		{
			ad=a;
			soyad=s;
			yas=y;	
		}
		
		void goster(void)
		{
			cout << "Ad:"    << ad    << endl;
			cout << "Soyad:" << soyad << endl;
			cout << "Yas:"   << yas   << endl;
			cout <<"\n*--------------------------------*\n";
		}
};

int main()
{
	varsayilansinif sinif;
	
	sinif.goster();
	sinif.varsayilan();
	sinif.goster();
	sinif.varsayilan("Tamer");
	sinif.goster();
	sinif.varsayilan("Tamer","Erdogan");
	sinif.goster();
	sinif.varsayilan("Tamer","Erdogan",18);	
	sinif.goster();
	
	return 0;
}
