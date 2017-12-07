#include <iostream>

using namespace std;

int main()
{
	int dizi[11][11];
	
	//Çarpým tablosu deðerlerini diziye atama
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			dizi[i][j] = i*j; 	
		}
	}
	
	//Diziyi ekrana yazdýrma
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			cout << i << "x" << j << ":" << dizi[i][j] << endl;	
		}
		cout <<"---------------\n";
	}
	
	return 0;
}
