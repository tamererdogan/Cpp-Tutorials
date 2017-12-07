#include <iostream>

using namespace std;

int main()
{
	int sayi;
	
	cout << "Sayi gir :";
	cin  >> sayi;
	cout << "Girdiginiz sayinin adresi :" << &sayi;
	
	return 0;
}
