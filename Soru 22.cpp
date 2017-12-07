
#include <iostream>

using namespace std;

int main()
{
	int sayi,yuzluk,onluk,birlik,onlar,yuzler,binler;
	cout << "Bir sayi giriniz:";
	cin >> sayi;
	
	yuzluk = sayi%1000;  //sayının son 3 basamagındaki sayı  
	onluk  = yuzluk%100; //sayının son 2 basamagındaki sayı
	birlik = onluk%10;	 //sayının son basamagındaki sayı
	 
	onlar  = (onluk - birlik) / 10;   //sayının onlar basamagındaki sayı
	yuzler = (yuzluk - onluk) / 100;  //sayının yüzler basamagındaki sayı
	binler = (sayi - yuzluk ) / 1000; //sayının binler basamagındaki sayı


//Eğer binler basamağı sıfır değilse
if(binler != 0)
{
	//Basamaktaki değerin yazı karşılığı ekrana bastırılır
	switch(binler)
	{

		case 2:
			cout << "iki ";
			break;	
		case 3:
			cout << "uc ";
			break;
		case 4:
			cout << "dort ";
			break;
		case 5:
			cout << "bes ";
			break;
		case 6:
			cout << "alti ";
			break;
		case 7:
			cout << "yedi ";
			break;
		case 8:
			cout << "sekiz ";
			break;
		case 9:
			cout << "dokuz ";
			break;
		case 10:
			cout << "on ";
			break;
	}

	cout << "bin ";	
}		

//Eğer yüzler basamağındaki sayı sıfır değilse
if(yuzler != 0)
{
	//Basamaktaki değerin yazı karşılığı ekrana bastırılır
	switch(yuzler)
	{
		case 2:
			cout << "iki ";
			break;	
		case 3:
			cout << "uc ";
			break;
		case 4:
			cout << "dort ";
			break;
		case 5:
			cout << "bes ";
			break;
		case 6:
			cout << "alti ";
			break;
		case 7:
			cout << "yedi ";
			break;
		case 8:
			cout << "sekiz ";
			break;
		case 9:
			cout << "dokuz ";
			break;
	}
	
	cout << "yuz ";
}	

//Eğer onlar basamağı sıfır değilse
if(onlar != 0)
{
	//Basamaktaki değerin yazı karşılığı ekrana bastırılır
	switch(onlar)
	{	
		case 1:
			cout << "on ";
			break;
		case 2:
			cout << "yirmi ";
			break;	
		case 3:
			cout << "otuz ";
			break;
		case 4:
			cout << "kirk ";
			break;
		case 5:
			cout << "elli ";
			break;
		case 6:
			cout << "altmis ";
			break;
		case 7:
			cout << "yetmis ";
			break;
		case 8:
			cout << "seksen ";
			break;
		case 9:
			cout << "doksan ";
			break;
	}
}

//Eğer birler basamağındaki sayı sıfır değilse
if(birlik != 0)
{
	//Basamaktaki değerin yazı karşılığı ekrana bastırılır
	switch(birlik)
	{
		case 1:
			cout << "bir ";
			break;
		case 2:
			cout << "iki ";
			break;	
		case 3:
			cout << "uc ";
			break;
		case 4:
			cout << "dort ";
			break;
		case 5:
			cout << "bes ";
			break;
		case 6:
			cout << "alti ";
			break;
		case 7:
			cout << "yedi ";
			break;
		case 8:
			cout << "sekiz ";
			break;
		case 9:
			cout << "dokuz ";
			break;
		case 10:
			cout << "on ";
			break;
	}
}	

//Eğer sayı sıfırsa
if(sayi == 0)
{
	cout << "Sifir";
}

	return 0;
}
