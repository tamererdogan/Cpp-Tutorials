#include <iostream>
#include <string>

using namespace std;

class ogrenci{
	
	private:
		
		string ad,bolum,tc;

	public:
		
		void al()
		{
			string ad,bolum,tc;
			
			cout << "Ad gir:";
			cin  >> ad;
			cout << "Tc gir:";
			cin  >> tc;
			cout << "Bolum gir:";
			cin  >> bolum;
			
			this-> ad    = ad;
			this-> bolum = bolum;
			this-> tc    = tc;	
		}

		void goruntule()
		{
			cout << "Ad:" << ad <<endl<< "TC:"<< tc <<endl<< "Bolum:" << bolum << endl;
		}
};

int main()
{
	ogrenci ogr1,ogr2,ogr3;
	ogr1.al();
	ogr2.al();
	ogr3.al();
	
	cout << endl << endl;
	
	ogr1.goruntule();
	ogr2.goruntule();
	ogr3.goruntule();
	
	return 0;
}
