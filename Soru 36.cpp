#include <iostream>

using namespace std;

int main()
{
	int dizi[10] = {1,2,3,4,5,10,9,7,6,8};
	int carpim=1;
	
	for(int i=0;i<10;i++)
	{
		carpim *= dizi[i];
	}
	
	cout << "Carpim :" << carpim;
	
	return 0;
}
