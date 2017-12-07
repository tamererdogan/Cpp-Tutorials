#include <iostream>

using namespace std;

class tasit{
	
	private:
		int hiz,model,fiyat;
		string plaka;
		
	public:
		
		tasit(string p,int m,int h,int f)
		{
			hiz    = h;
			model  = m;
			plaka  = p;
			fiyat  = f;
		
			goster();	
		}
		
		void goster()
		{
			cout << "Plaka: " << plaka <<endl;
			cout << "Model: " << model <<endl;
			cout << "Hiz: "   << hiz   <<endl;
			cout << "Fiyat: " << fiyat <<endl;
			cout << "*-------------------------*\n";
		}
};

int main()
{
	tasit Tofas[5] = {tasit("01tf",2000,120,1000),tasit("02tf",2001,130,1100),tasit("03tf",2002,150,1200),tasit("04tf",2003,170,2000),tasit("05tf",2004,180,2500)};
	tasit Audi[5]  = {tasit("06au",2005,200,2000),tasit("07au",2006,220,2200),tasit("08au",2007,240,2300),tasit("09au",2008,270,2500),tasit("10au",2010,300,3000)};
	
	return 0;
}
