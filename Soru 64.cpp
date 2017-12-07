#include <iostream>

using namespace std;

class sinif{
	
	private:
		
		int x=0,y=0,z=0;
	
	public:
		
		sinif(int x,int y)
		{
			this->x  = x;
			this->y  = y;
		}
		
		sinif(int x,int y,int z)
		{
			this->x  = x;
			this->y  = y;
			this->z  = z;
		}
		
		friend void goster(sinif nesne);
};

void goster(sinif nesne)
{
	cout << nesne.x << " " << nesne.y << " " << nesne.z;
}

int main()
{
	sinif nesne1(1,2,3),nesne2(3,2);
	
	goster(nesne1);
	cout << "\n*----------------------*\n";
	goster(nesne2);
	
	return 0;
}
