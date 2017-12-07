#include <iostream>

using namespace std;

class nokta{
	
	private:

		int x,y;

	public:
		
		nokta(){}
		
		nokta(int x,int y)
		{
			this->x = x;
			this->y = y;
		}
		
		nokta operator+=(nokta nesne)
		{
			nokta don_nesne(0,0);
			
			don_nesne.x = (x+nesne.x);
			don_nesne.y = (y+nesne.y);
						
			return don_nesne;
		}

		nokta operator-=(nokta nesne)
		{
			nokta don_nesne(0,0);
			
			don_nesne.x = (x-nesne.x);
			don_nesne.y = (y-nesne.y);

			return don_nesne;
		}
		
		nokta operator*=(nokta nesne)
		{
			nokta don_nesne(0,0);
			
			don_nesne.x = (x*nesne.x);
			don_nesne.y = (y*nesne.y);			

			return don_nesne;
		}
		
		nokta operator/=(nokta nesne)
		{
			nokta don_nesne(0,0);
			
			don_nesne.x = x/nesne.x;
			don_nesne.y = y/nesne.y;

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
	nokta nesne1(5,5),nesne2(10,6),nesne3(4,2),nesne4(16,22);
	nokta don1,don2,don3,don4;
	
	don1 = nesne1+=nesne2;
	don2 = nesne2-=nesne3;
	don3 = nesne3*=nesne4;
	don4 = nesne4/=nesne3;
	
	don1.yaz();
	cout << endl << endl;
	don2.yaz();
	cout << endl << endl;
	don3.yaz();
	cout << endl << endl;
	don4.yaz();
	
	return 0;
}
