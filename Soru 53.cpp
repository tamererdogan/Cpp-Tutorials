#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char* isim[5] = {"Tamer","Emre","Azmi","Tufan","Murat"};
	char ad[10];
	int val=1;
	
	cout << "Ad gir :";
	cin  >> ad;
	
	for(int i=0;i<5;i++)
	{
		if(strcmp(ad,isim[i]) == 0)
		{
			cout << "Ad Bulundu..";
			val = 0;
			break;
		}
	}
	
	if(val)
		cout << "Ad Bulunmadi..";
	
	return 0;
}
