#include <iostream>

using namespace std;

class asker{
	
	private:
		
		string ad,soyad;
		int yas;
		
	public:
		
		asker(string a,string s,int y)
		{
			ad    = a;
			soyad = s;
			yas   = y;
			yaz();
		}
	
		void yaz(void)	
		{
			cout << ad << endl << soyad << endl << yas ;
		}
};

int main()
{
	asker tamer("Tamer","Erdogan",18);
	return 0;
}
