#include <iostream>

using namespace std;

class katar{
	
	private:
		
		string x;
	
	public:
		
		katar(string x)
		{
			this->x = x;
		}
		
		bool operator>(katar nesne)
		{
			if(x>nesne.x)
				return 1;
			else
				return 0;
		}	
		
		bool operator<(katar nesne)
		{
			if(x<nesne.x)
				return 1;
			else
				return 0;			
		}	
};

int main()
{
	katar nesne1("a"),nesne2("b");
	
	if(nesne1>nesne2)
		cout << "Nesne1 buyuk" << endl;
	if(nesne1<nesne2)
		cout << "Nesne1 kucuk" << endl;
	
	return 0;
}
