#include <iostream>

using namespace std;

class A{
	
	private:
		
		int a;
	
	public:
		
		void atama_yap(int al)
		{
			a = al;
		}
		
		void goster(void)
		{
			cout << "A:" << a << endl;	
		}	
};

class B:virtual public A{
	
};

class C:virtual public A{
	
};

class D:public B,public C{
	
};

int main()
{
	D nesne;
	
	nesne.atama_yap(5);
	nesne.goster();
	
	return 0;
}
