#include <iostream>

using namespace std;

int toplam(void);

int main()
{
	cout << "Toplam: " << toplam();	
	return 0;
}

int toplam()
{
	int sayi,toplam=0;
	
	for(int i=0;i<10;i++)
	{
		cout << "Sayi gir :";
		cin  >> sayi;
		toplam += sayi;
	}
	
	return toplam;
}
