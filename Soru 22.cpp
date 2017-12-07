
#include <iostream>

using namespace std;

int main()
{
	int sayi,yuzluk,onluk,birlik,onlar,yuzler,binler;
	cout << "Bir sayi giriniz:";
	cin >> sayi;
	
	yuzluk = sayi%1000;  //say�n�n son 3 basamag�ndaki say�  
	onluk  = yuzluk%100; //say�n�n son 2 basamag�ndaki say�
	birlik = onluk%10;	 //say�n�n son basamag�ndaki say�
	 
	onlar  = (onluk - birlik) / 10;   //say�n�n onlar basamag�ndaki say�
	yuzler = (yuzluk - onluk) / 100;  //say�n�n y�zler basamag�ndaki say�
	binler = (sayi - yuzluk ) / 1000; //say�n�n binler basamag�ndaki say�


//E�er binler basama�� s�f�r de�ilse
if(binler != 0)
{
	//Basamaktaki de�erin yaz� kar��l��� ekrana bast�r�l�r
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

//E�er y�zler basama��ndaki say� s�f�r de�ilse
if(yuzler != 0)
{
	//Basamaktaki de�erin yaz� kar��l��� ekrana bast�r�l�r
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

//E�er onlar basama�� s�f�r de�ilse
if(onlar != 0)
{
	//Basamaktaki de�erin yaz� kar��l��� ekrana bast�r�l�r
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

//E�er birler basama��ndaki say� s�f�r de�ilse
if(birlik != 0)
{
	//Basamaktaki de�erin yaz� kar��l��� ekrana bast�r�l�r
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

//E�er say� s�f�rsa
if(sayi == 0)
{
	cout << "Sifir";
}

	return 0;
}
