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
	
	//En b�y�k say�y� bulma
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
	
	//Say�lar�n toplam�yla en b�y�k say�y� kar��la�t�rma
	if( (a+b+c)>enb )
		cout << "tebrikler";
	else
		cout << "malesef";
	
	return 0;
}
