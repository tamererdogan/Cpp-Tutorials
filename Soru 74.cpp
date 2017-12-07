#include <iostream>
#include <locale.h> //setlocale fonskiyonunun baþlýk dosyasý

using namespace std;

int carpma(int* carp);
double carpma(double* carp);

int main()
{
	setlocale(LC_ALL,"Turkish"); //türkçe karakter kullanmamiz için gerekli fonksiyon
	
	int tamsayi[3];
	double ondaliksayi[3];
	
	for(int i=0;i<6;i++)
	{
		if(i>=3)
		{
			cout << i-2 << ". Ondalýk gir:";
			cin  >> ondaliksayi[i-3];	
		}
		else
		{
			cout << i+1 << ". Tamsayý gir:";
			cin  >> tamsayi[i];	
		}
	}
	
	cout << "\n*--------------------------------------*\n";
	cout << "Tamsayýlarýn çarpýmý: " << carpma(tamsayi)<<endl;
	cout << "Ondalýk sayýlarýn çarpýmý: " << carpma(ondaliksayi);
	
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
