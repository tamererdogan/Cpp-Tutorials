#include <iostream>

using namespace std;

int main()
{
	int r,h;
	float const pi = 3.14;
	float daire,koni;
	cout <<"Yaricap:";
	cin >> r;
	cout <<"Yukseklik:";
	cin >> h;
	daire = (4*pi*r*r)/3;
	koni  = (pi*r*r*h)/3;
	
	if(daire>koni)
	{
		cout << "Daire buyuk";
	}
	else
	{
		cout << "Koni buyuk";
	}	
	
	return 0;
}
