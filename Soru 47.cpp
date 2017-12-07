#include <iostream>

using namespace std;

int permutasyon(int n,int r);
int faktoriyel(int sayi);

int main()
{
	int n,r;
	
	cout << "N :";
	cin  >> n;
	cout << "R :";
	cin  >> r;
	cout << "N'in R'li Permutasyonu :" << permutasyon(n,r);
	return 0;
}

int permutasyon(int n,int r)
{
	return faktoriyel(n)/faktoriyel(n-r);
}

int faktoriyel(int sayi)
{
	int faktoriyel=1;
	for(int i=1;i<=sayi;i++)
	{
		faktoriyel*=i;
	}
	return faktoriyel;
}

