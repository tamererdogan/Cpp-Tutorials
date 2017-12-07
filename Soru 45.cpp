#include <iostream>

using namespace std;

int ekok(int bir,int iki);

int main()
{
	int sayi1,sayi2;
	
	cout << "Birinci sayi :";
	cin  >> sayi1;
	cout << "Ikinci sayi :";
	cin  >> sayi2;
	cout << "EKOK :" << ekok(sayi1,sayi2);
	return 0;
}

int ekok(int sayi1,int sayi2)
{
	int ekok1[50],ekok2[50],ekok,i=1;
	bool kosul=true;
	
	while(kosul)
	{
		ekok1[i-1] = sayi1*i;
		ekok2[i-1] = sayi2*i;
		
		for(int j=0;j<i;j++)
		{
			for(int k=0;k<i;k++)
			{
				if(ekok1[j]==ekok2[k])
				{
					ekok = ekok1[j];
					kosul = false;
					break;
				}
			}
			
			if(!kosul)
			{
				break;	
			}
		}
		i++;
	}

	return ekok;
}
