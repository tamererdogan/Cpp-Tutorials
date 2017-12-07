#include <iostream>

using namespace std;

int main()
{
	int birler,onlar,yuzler,birlik,onluk,yuzluk,toplam;
	
	for(int i=100;i<1000;i++) //3 basamaklý sayýlarýn hepsini dolaþan döngü
	{
		toplam = 0;
		
		//Sayýnýn basamaklarýný bulma
		birler = i%10;
		onluk  = i-birler;		
		onlar  = onluk%100;
		onlar  = onlar/10;	
		yuzluk = i- (onlar*10+birler);
		yuzler = yuzluk / 100; 	
		
		//Her basamaðýn küplerinin toplamýný bulma 
		toplam = (yuzler*yuzler*yuzler)+(onlar*onlar*onlar)+(birler*birler*birler);
				
		if(toplam==i)  //Toplam sayýnýn kendisine eþitse Armstrong sayýdýr
		{
			cout << i << endl;
		} 
	} 
	
	return 0;
}
