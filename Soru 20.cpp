#include <iostream>

using namespace std;

int main()
{
	int sayi;

	cout << "Bir sayi giriniz:";
	cin >> sayi;

	switch(sayi)
	{
		case 1:
			cout << "Ilkbahar";
			break;
		case 2:
			cout << "Yaz";
			break;
		case 3:
			cout << "Sonbahar";
			break;
		case 4:
			cout << "Kis";
			break;
	}
	
	return 0;
}
