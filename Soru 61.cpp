#include <iostream>

using namespace std;

class dikdortgen{
	
	private:
		
		int kenar1,kenar2,cevre,alan;
	
	public:
		
		dikdortgen(int ken1,int ken2)
		{
			kenar1 = ken1;
			kenar2 = ken2;
			cevre_al();
			alan_al();
		}
		
		void cevre_al(void)
		{
			cevre = (kenar1*2)+(kenar2*2);
		}
		
		void alan_al(void)
		{
			alan = kenar1*kenar2;
		}
	
		friend void goruntule(dikdortgen d);
};

void goruntule(dikdortgen d)
{
	cout << "Cevre: " << d.cevre << endl << "Alan: " << d.alan ;
}

int main()
{	
	int ken1,ken2;
	
	cout << "Kenar 1:";
	cin  >> ken1;
	cout << "Kenar 2:";
	cin  >> ken2;
	
	dikdortgen d(ken1,ken2);
	goruntule(d);
	
	return 0;
}

