#include <iostream>

using namespace std;

void mukemmelsayi(void);

int main()
{
	mukemmelsayi();
	return 0;
}

void mukemmelsayi(void)
{
	int toplam;
		
	for(int i=1;i<=100;i++)  //1-100 arasý dolaþan döngü
	{
		toplam=0;
		
		for(int j=1;j<i;j++)  //Pozitif tam bölenlerini bulan döngü
		{
			if(i%j == 0)   //i sayýsý sayi1'in pozitif tam böleni ise toplam'a eklenir
			{
				toplam += j;
			}
		}
		
		if(toplam == i) //Tam bölenlerinin toplamý sayýnýn kendine eþitse
		{
			cout << "--" << i << endl;
		}
	}
}
