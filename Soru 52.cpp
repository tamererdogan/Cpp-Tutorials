#include <iostream>

using namespace std;

void faktoriyel(int,int*);

int main()
{	
	int  sayi;	
	cout << "Sayi gir :";
	cin  >> sayi;
	faktoriyel(sayi,&sayi);
	cout << "Sayinin faktoriyeli :" << sayi;
	
	return 0;
}

void faktoriyel(int sayi,int* atanacak_adres)
{	
	int faktoriyel=1;
	for(int i=1;i<=sayi;i++)
	{
		faktoriyel*=i;
	}
	
	*atanacak_adres = faktoriyel;
}
