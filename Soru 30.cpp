#include <iostream>

using namespace std;

int main()
{
	int toplam=0;
	
	for(int i=40;i>=4;i--)
	{
		if(i%2==0)  //Çiftse
		{
			toplam += i;
		}
	}
	
	cout << toplam;
	
	return 0;
}
