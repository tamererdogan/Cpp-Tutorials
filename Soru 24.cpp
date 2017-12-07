#include <iostream>

using namespace std;

int main()
{
	int sifre = 312150;
	int pass,hak = 3;
	
	while(hak)
	{
		cout << "Giris icin rakamlardan oluşan sifreyi giriniz: ";
		cin  >> pass;
	
		if(sifre == pass)
		{
			cout << "Hosgeldiniz" << endl;
			break;
		}
		else
		{
			cout << "Hatali sifre" << endl;
			hak--;
		}
	}
	
	return 0;
}

