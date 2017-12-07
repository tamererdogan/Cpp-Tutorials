#include <iostream>

#define KESIRSAYISI 3

using namespace std;

class ondalik{
	
	private:
		int pay,payda;
		float ondalik;
			
	public:
		void kesir_al(int py,int pyda)
		{
			pay = py;
			payda =pyda;
			ondalik = ondalik_yap();
		}
		
		float ondalik_yap()
		{
			return (float)pay/payda;
		}
		
		void goster(void)
		{
			cout << pay << " / " << payda << " = " << ondalik << endl;
			cout << "*-------------------*\n";
		}
};

int main()
{
	ondalik bolme[KESIRSAYISI];
	int pay,payda;
	
	for(int i=0;i<KESIRSAYISI;i++)
	{
		cout << "Pay Giriniz:";
		cin  >> pay;
		cout << "Payda Giriniz:";
		cin  >> payda;
		cout << "*----------------------*\n";
		
		bolme[i].kesir_al(pay,payda);
	}
	
	system("CLS");
	
	for(int j=0;j<KESIRSAYISI;j++)
	{
		bolme[j].goster();
	}
	
	return 0;
}
