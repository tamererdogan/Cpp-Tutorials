#include <iostream>

using namespace std;

int main()
{
	int a,b;
	bool acift,bcift;
	cout << "Bir sayi giriniz:";
	cin >> a;
	cout << "Bir sayi giriniz:";
	cin >> b;
	
	//a sayýsýnýn çift olup olmadýðý kontrol ediliyor
	if(a%2==0)
		acift = true;
	else
		acift = false;
		
	//b sayýsýnýn çift olup olmadýðý kontrol ediliyor
	if(b%2==0)
		bcift = true;
	else
		bcift = false;
	
	if(acift==false && bcift==false) //Ýkisi tek ise
		cout << "ikiside tek";
	if(acift==true && bcift==true)  //Ýkiside çift ise
		cout << "ikiside cift";
	if(acift==true && bcift==false || acift==false && bcift==true) //Biri tek biri çift ise	
		cout << "sonuclar farkli";
		
	return 0;
}
