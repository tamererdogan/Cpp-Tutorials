#include <iostream>

using namespace std;

float alanbul(int h);

int main()
{
	int h;
	
	cout << "Yukseklik gir :";
	cin  >> h;
	cout << "Alan :" << alanbul(h);
	
	return 0;
}

float alanbul(int h)
{	
	float deger = 0.433; //K�k 3 b�l� 4'�n de�eri
	return h*h*deger;
}
