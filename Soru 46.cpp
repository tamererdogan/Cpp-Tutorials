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
		
	for(int i=1;i<=100;i++)  //1-100 aras� dola�an d�ng�
	{
		toplam=0;
		
		for(int j=1;j<i;j++)  //Pozitif tam b�lenlerini bulan d�ng�
		{
			if(i%j == 0)   //i say�s� sayi1'in pozitif tam b�leni ise toplam'a eklenir
			{
				toplam += j;
			}
		}
		
		if(toplam == i) //Tam b�lenlerinin toplam� say�n�n kendine e�itse
		{
			cout << "--" << i << endl;
		}
	}
}
