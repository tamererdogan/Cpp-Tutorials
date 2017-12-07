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
		
		//Yaþ 18'den büyük olana kadar 3'er 3'er arttýrma
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
