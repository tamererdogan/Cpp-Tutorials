#include <iostream>

using namespace std;

int main()
{
	int a,b,c,d,e;
	cout << "Bir sayi giriniz:";
	cin >> a;
	cout << "Bir sayi giriniz:";
	cin >> b;
	cout << "Bir sayi giriniz:";
	cin >> c;
	cout << "Bir sayi giriniz:";
	cin >> d;
	e = (((--a+b)+(++c*d)) % 2);
	cout <<"Sonuc: " << e;
	
	return 0;
}
