#include <iostream>

using namespace std;

class calisan{
	
	private:
		
		string ad,soyad;
	
	public:
		
		calisan(string a,string s)
		{
			ad	  = a;
			soyad = s;
		}
		
		void calisan_yaz()
		{
			cout << "Ad:" 	 << ad 	  << endl;
			cout << "Soyad:" << soyad << endl;
		}		
};

class isci:private calisan{
	
	private:
		
		int maas;
	
	public:
		
		isci(string a,string s,int m):calisan(a,s)
		{
			maas = m;
		}
		
		void isci_yaz(void)
		{
			calisan_yaz();
			cout << "Maas:" << maas <<endl;
		}
};

int main()
{
	isci nesne1("ad","soyad",1580),nesne2("ad2","soyad2",2000);
	
	nesne1.isci_yaz();
	cout << "---------------------\n";
	nesne2.isci_yaz();

	return 0;
}
