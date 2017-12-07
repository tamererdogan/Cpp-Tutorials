#include <iostream>

using namespace std;

int main()
{
	int sayi,faktoriyel=1;
	cout << "Faktoriyeli alinacak sayiyi gir:";
	cin  >> sayi;
	for(int i=1;i<=sayi;i++)
	{
		faktoriyel*=i;
	}
	cout << "Faktoriyel:" << faktoriyel;

	return 0;
}
