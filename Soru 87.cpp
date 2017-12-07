#include <iostream>

using namespace std;

class A{
	
	public:
		
		A(){  cout << "A yapicisi" << endl; }	
		~A(){ cout << "A yikicisi" << endl; }
};

class B:public A{
		
	public:
		
		B(){  cout << "B yapicisi" << endl; }	
		~B(){ cout << "B yikicisi" << endl; }
};
int main()
{
	B nesne;
	
	return 0;
}
