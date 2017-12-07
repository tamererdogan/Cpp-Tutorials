#include <iostream>

using namespace std;

int main()
{
	int sayac=0,toplam=0;
	
	for(int i=1;i<=1000;i++)  
	{		
		if(i%5==0 && i%7!=0)  //5'e bölünen ve 7'ye bölünmeyen sayýlar
		{
			sayac++;
			toplam+=i;
			cout << "--" << i << endl; 
		}
	}
	
	cout << "Toplam :" << toplam << endl << "Sayac :" << sayac << endl;
	
	return 0;
}
