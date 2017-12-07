#include <iostream>

using namespace std;

class Tarih{
	private:
	
		string trh;
	
	public:
		
		Tarih(string Komple)
		{
			trh = Komple;
			cout << "Tarih: " << trh<<endl;
		}	
		
		Tarih(int g,double a_y)
		{
			cout << "Tarih: " << g << "."<< a_y<<endl;
		}
};

int main()
{
	Tarih tarih("01/01/2012");
	Tarih tarih2(01,01.2012);
	
	return 0;
}
