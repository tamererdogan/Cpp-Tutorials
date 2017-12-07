#include <iostream>

using namespace std;

int main()
{
	//0 1 1 2 3 5 8 13 21 35 56
	int bir=1,iki=0,degistir,yaz[15]={0};
	
	for(int i=1;i<15;i++)
	{
		yaz[i] = bir+iki;
		degistir = iki;
		iki = bir;
		bir = degistir;
		iki = yaz[i];
	}
	
	for(int j=0;j<15;j++)
	{
		cout << yaz[j] << " ";
	}

	return 0;
}
