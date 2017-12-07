#include <iostream>

using namespace std;


class zaman{
	
	private:
		int saat,dakika,saniye;
	
	public:
		zaman(int s,int dk,int sn) //Yapýcý fonksiyon
		{
			saat   = s;
			dakika = dk;
			saniye = sn;
		}
		
		void yaz()
		{
			cout << "Saat:" << saat <<" "<< "Dakika:" << dakika << " " << "Saniye:" << saniye <<endl; 	
		}
		
};

int main()
{
	int s,dk,sn;
	
	cout << "Saat:";
	cin  >> s;
	cout << "Dakika:";
	cin  >> dk;
	cout << "Saniye:";
	cin  >> sn;
	
	zaman tarih(s,dk,sn);
	tarih.yaz();
	
	return 0;
}
