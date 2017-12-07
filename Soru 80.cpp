#include <iostream>

using namespace std;

class nokta{
	
	private:

		int x,y;

	public:
		
		nokta(int x,int y)
		{
			this->x = x;
			this->y = y;
		}
		
		nokta operator*(nokta nesne)
		{
			nokta don_nesne(0,0);
			
			don_nesne.x = this->x * nesne.x;
			don_nesne.y = this->y * nesne.y; 
			
			return don_nesne;
		}

		nokta operator/(nokta nesne)
		{
			nokta don_nesne(0,0);
			
			don_nesne.x = this->x / nesne.x;
			don_nesne.y = this->y / nesne.y; 
			
			return don_nesne;
		}		
		
		void yaz(void)
		{
			cout << "X:" << x << endl;
			cout << "Y:" << y << endl;
		}
};

int main()
{
	nokta nesne1(5,5),nesne2(3,13),nesne3(0,0);
	
	cout << "Carpim---"<<endl;
	nesne3 = nesne1*nesne2;
	nesne3.yaz();
	cout << "Bolum---"<<endl;
	nesne3 = nesne1/nesne2;
	nesne3.yaz();
	
	return 0;
}
