#include <iostream>

using namespace std;

class A{
	
	private:
		
		int a;
	
	public:
		
		A(int a)
		{
			this->a = a;
		}
		
		void goster1(void)
		{
			cout << "A:" << a << endl;	
		}	
};

class B{

	private:
		
		int b,b1;
	
	public:
		
		B(int b,int b1)
		{
			this->b = b;
			this->b1 = b1;
		}
		
		void goster2(void)
		{
			cout << "B:" << b << endl;
			cout << "B1:" << b1 << endl;
		}	
};

class C:public A,public B{
	
	public:
		
		C(int a,int b):A(a),B(a,b){ }
};

int main()
{
	C nesne(10,22);
	
	nesne.goster1();
	nesne.goster2();
	
	return 0;
}
