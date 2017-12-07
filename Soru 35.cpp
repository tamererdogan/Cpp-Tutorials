#include <iostream>

using namespace std;

int main()
{
	int dizi[10];
	
	for(int i=0;i<10;i++)
	{
		cout << "Sayi gir :";
		cin  >> dizi[i];
	}
	
	for(int j=0;j<10;j++)
	{
		cout << "Dizi :" << dizi[j] << endl;
	}
	
	return 0;
}
