#include <iostream>

using namespace std;

int ebob(int bir,int iki);

int main()
{
	int sayi1,sayi2;
	
	cout << "Birinci sayi :";
	cin  >> sayi1;
	cout << "Ikinci sayi :";
	cin  >> sayi2;
	cout << "EBOB :" << ebob(sayi1,sayi2);
	return 0;
}

int ebob(int sayi1,int sayi2)
{
	int ebob[50],sayac=0,saydir;
	
	if(sayi1 > sayi2)
	{
		saydir = sayi1;
	}
	else
	{
		saydir = sayi2;
	}
	
	for(int i=saydir;i>=1;i--)
	{
		if(sayi1%i==0 && sayi2%i==0)  //Ortak bölen varsa ebob'ta saklanır
		{
			ebob[sayac] = i;
			sayac++;
	    }
	}

	return ebob[0];
}
