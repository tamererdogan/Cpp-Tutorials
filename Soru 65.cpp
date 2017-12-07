#include <iostream>

using namespace std;

class sinif{
	
	int i;
	
	public:
			
		sinif(int i)
		{
			this->i = i ;
	    	cout <<"Kurucu: "<< i << endl ; 		//Constructer
		}
		
		~sinif()
		{
			cout <<"Yikici: "<< this->i << endl ;	//Destructer
	    }
		
};

int main()
{
	sinif nesne1(1),nesne2(2),nesne3(3);
	return 0;
}
