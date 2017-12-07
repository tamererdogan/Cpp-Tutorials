#include <iostream>

using namespace std;

class A{
	
	private:
		int a,b;
	public:
		
		void deger_ata(int a,int b)
		{
			this->a = a;
			this->b = b; 
		}
		
		void yaz(void)
		{
			cout << "A:" << a << endl;
			cout << "B:" << b << endl;
		}
};

class B:public A{
	
};

int main()
{
	B nesne;
	nesne.deger_ata(3,5);
	nesne.yaz();
	
	return 0;
}
