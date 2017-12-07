#include <iostream>

using namespace std;

int main()
{
	int sayi1,sayi2;
	
	cout << "Bir sayi giriniz:";
	cin  >> sayi1;
	cout << "Bir oncekinden daha buyuk bir sayi giriniz:";
	cin  >> sayi2;
	
	for(;sayi1<=sayi2;sayi1++)
	{
		cout << sayi1 << endl;
	}
	
	return 0;
}
