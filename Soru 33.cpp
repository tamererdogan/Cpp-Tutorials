#include <iostream>

using namespace std;

int main()
{
	int birler,onlar,yuzler,birlik,onluk,yuzluk,toplam;
	
	for(int i=100;i<1000;i++) //3 basamakl� say�lar�n hepsini dola�an d�ng�
	{
		toplam = 0;
		
		//Say�n�n basamaklar�n� bulma
		birler = i%10;
		onluk  = i-birler;		
		onlar  = onluk%100;
		onlar  = onlar/10;	
		yuzluk = i- (onlar*10+birler);
		yuzler = yuzluk / 100; 	
		
		//Her basama��n k�plerinin toplam�n� bulma 
		toplam = (yuzler*yuzler*yuzler)+(onlar*onlar*onlar)+(birler*birler*birler);
				
		if(toplam==i)  //Toplam say�n�n kendisine e�itse Armstrong say�d�r
		{
			cout << i << endl;
		} 
	} 
	
	return 0;
}
