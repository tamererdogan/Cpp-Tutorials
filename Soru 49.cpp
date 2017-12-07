#include <iostream>

using namespace std;

int main()
{
	char isim[5];
	char* ptrisim;
	cout << "Isim gir:";
	cin  >> isim;
	ptrisim = isim;
	
	for(int i=0;i<5;i++)
	{
		cout << *(ptrisim+i);
	}
	
	return 0;
}
