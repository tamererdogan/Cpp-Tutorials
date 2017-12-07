#include <iostream>

using namespace std;

class personel{
	
	private:
		string ad,soyad;
		int yas;
	
	public:
		
		personel(string a,string s,int y)
		{
	   		ad    = a;
	   		soyad = s;
	   		yas   = y;
		}
		
		personel(){}
		
		void goster()
		{
			cout << ad << " " << soyad << " " << yas;
		}
};

int main()
{
	personel bir("Tamer","Erdogan",18),iki;
	
	iki = bir;
	iki.goster();
	
	return 0;
}
