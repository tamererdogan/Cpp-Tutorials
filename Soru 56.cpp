#include <iostream>

using namespace std;

struct yapi
{
	int tamsayi;
	float ondalik;
	double duble;
};

int main()
{
	int veriboyut,yapiboyut;
	veriboyut = sizeof(int) + sizeof(float) + sizeof(double);
	yapiboyut = sizeof(yapi);	
	
	if(veriboyut==yapiboyut)
		cout << veriboyut <<" = "<< yapiboyut <<" Esit";
	else
		cout << veriboyut <<" != "<< yapiboyut <<" Esit degil";
		
	return 0;
}
