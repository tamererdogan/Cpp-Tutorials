#include <iostream>
#include <locale.h> //setlocale fonskiyonunun ba�l�k dosyas�

using namespace std;

int carpma(int* carp);
double carpma(double* carp);

int main()
{
	setlocale(LC_ALL,"Turkish"); //t�rk�e karakter kullanmamiz i�in gerekli fonksiyon
	
	int tamsayi[3];
	double ondaliksayi[3];
	
	for(int i=0;i<6;i++)
	{
		if(i>=3)
		{
			cout << i-2 << ". Ondal�k gir:";
			cin  >> ondaliksayi[i-3];	
		}
		else
		{
			cout << i+1 << ". Tamsay� gir:";
			cin  >> tamsayi[i];	
		}
	}
	
	cout << "\n*--------------------------------------*\n";
	cout << "Tamsay�lar�n �arp�m�: " << carpma(tamsayi)<<endl;
	cout << "Ondal�k say�lar�n �arp�m�: " << carpma(ondaliksayi);
	
	return 0;
}

int carpma(int* carp)
{
	return carp[0]*carp[1]*carp[2];
}

double carpma(double* carp)
{
	return carp[0]*carp[1]*carp[2];
}
