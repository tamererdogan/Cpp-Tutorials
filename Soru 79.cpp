#include <iostream>

using namespace std;

class dizgi{
	
	private:
		string x,y;
	public:
		
		dizgi(string x,string y)
		{
			this->x = x;
			this->y = y;
		}
		
		dizgi(){}
		
		dizgi operator+(dizgi nesne)
		{
			int i=0,j=0,k=-1;
			dizgi don_nesne;
			
			don_nesne.x = this->x + nesne.x;
			don_nesne.y = this->y + nesne.y;
			
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
	dizgi nesne1("tam","erdo"),nesne2("er","gan"),nesne3;
	
	nesne3 = nesne1+nesne2;
	nesne3.yaz();
	
	return 0;
}
