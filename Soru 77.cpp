#include <iostream>

using namespace std;

class sinif{
	
	private:
		
		int sayi1,sayi2,sayi3;
	
	public:
		
		sinif()
		{
			sayi1 = 2;
			sayi2 = 3;
			sayi3 = 4;
		}
		
		sinif(int a,int b,int c)
		{
			sayi1 = a%3;
			sayi2 = b%3;
			sayi3 = c%3;
		}
		
		void goster(void)
		{
			cout << sayi1 << " " << sayi2 << " " << sayi3 << endl;
		}
	
};

int main()
{
	sinif nesne1,nesne2(5,6,7);
	nesne1.goster();
	nesne2.goster();
	
	return 0;
}
