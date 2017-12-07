#include <iostream>

using namespace std;

int main()
{
	int a,b,c,enb;
	cout << "Bir sayi giriniz:";
	cin >> a;
	cout << "Bir sayi giriniz:";
	cin >> b;
	cout << "Bir sayi giriniz:";
	cin >> c;
	
	//En büyük sayýyý bulma
	if(a>b && a>c)
	{
		enb = a;
		a = 0;
	}
	else if(b>a && b>c)
	{
		enb = b; 
		b = 0;
	}	
	else
	{
		enb = c;
		c = 0;
	}	
	
	//Sayýlarýn toplamýyla en büyük sayýyý karþýlaþtýrma
	if( (a+b+c)>enb )
		cout << "tebrikler";
	else
		cout << "malesef";
	
	return 0;
}
