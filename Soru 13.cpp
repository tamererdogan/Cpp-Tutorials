#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	cout << "Bir sayi giriniz:";
	cin >> a;
	cout << "Bir sayi giriniz:";
	cin >> b;
	c = ((a%5)+(b%3));
	cout <<"Sonuc:" <<c*c*c;
	
	return 0;
}
