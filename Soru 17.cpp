#include <iostream>

using namespace std;

int main()
{
	string ad,soyad;
	int yas;
	
	cout << "Adiniz:";
	cin >> ad;
	cout << "Soyadiniz:";
	cin >> soyad;
	cout << "Yasiniz:";
	cin >> yas;
	
	if(yas>=18)
	{
		cout << "Sayin "<<ad << " " << soyad <<" Oy kullanabilirsiniz";
	}
	else
	{
		cout << "Yasiniz tutmuyor\n";
		
		//Ya� 18'den b�y�k olana kadar 3'er 3'er artt�rma
		while(yas<18)
		{
			cout << "Yasiniz 3 arttiriliyor:";
			yas+=3;
			cout << yas << endl;
		}
		cout << "Sayin "<<ad << " " << soyad <<" Oy kullanabilirsiniz";
	}
	
	return 0;
}
