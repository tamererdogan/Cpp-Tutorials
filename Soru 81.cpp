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
		
		void operator++()
		{
			this->x++;
			this->y++;
		}
		
		void operator++(int)
		{
			++x;
			++y;
		}	

		void yaz(void)
		{
			cout << "X:" << x <<endl;
			cout << "Y:" << y <<endl;
		}
};


int main()
{
	nokta nesne(3,5);
	
	nesne++;
	nesne.yaz();
	++nesne;
	nesne.yaz();
	
	return 0;
}
