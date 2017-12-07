#include <iostream>

using namespace std;

class diziler{
	
	private:
		
		char alfabe;
		
	public:
		
		diziler()
		{
			alfabe = 'v';
		}
		
		diziler(char harf)
		{
			alfabe = harf;
		}
		
		void goster(void)
		{
			cout << alfabe << " ";
		}
};

int main()
{
	int sayac=0;
	diziler dizi1[15];
	diziler dizi2[15] = {'a','b','c','d','e','f','g','h','y','t','n','m','k','l','p'};
	
	while(sayac<30)
	{
		if(sayac<15)
		{
			dizi1[sayac].goster();
		}
		else
		{
			dizi2[sayac-15].goster();
		}
			
		sayac++;
	}
	
	return 0;
}
