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
		
		nokta operator^(nokta nesne)
		{
			nokta don_nesne(1,1);
			
			for(int i=0;i<nesne.x;i++)
			{
				 don_nesne.x *= x;
			}
			
			for(int j=0;j<nesne.y;j++)
			{
				 don_nesne.y *= y;
			}
			
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
	nokta nesne1(5,9),nesne2(3,2),nesne3(0,0);
	
	cout <<"---Us Hali---"<<endl;
	nesne3 = nesne1^nesne2;
	nesne3.yaz();

	return 0;
}
