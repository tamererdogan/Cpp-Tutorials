#include <iostream>

using namespace std;

class ogrenci{
	
	protected:
		
		string ad,soyad;
	
	public:
		
		ogrenci(string a,string s)
		{
			ad = a;
			soyad = s;
		}
		
		void goster(void)
		{
			cout << "Ad:" << ad <<endl;
			cout << "Soyad:" << soyad <<endl;		
		}
};

class sinav:public ogrenci{
	
	private:
		
		int vize,final;
	
	public:
		
		sinav(string a,string s,int v,int f):ogrenci(a,s)
		{
			vize = v;
			final = f;
		}
		
		void sinav_goster(void)
		{	
			goster();
			cout << "Vize:" << vize <<endl;
			cout << "Final:" << final <<endl;		
		}	
};

int main()
{
//	sinav s[3] = {sinav("ad1","soyad1",10,10),sinav("ad2","soyad2",20,20),sinav("ad3","soyad3",30,30)}; //nesne dizisine ilk atama yapma 1.yol yapici ile
	sinav s[3] = {{"ad1","soyad1",10,10},{"ad2","soyad2",20,20},{"ad3","soyad3",30,30}};	//nesne dizisine ilk atama yapma 2.yol direk dizi mantýgýyla
	
	for(int i=0;i<3;i++)
	{
		s[i].sinav_goster();	
		cout << "--------------------\n";
	}
	
	return 0;
}
