#include <iostream>

using namespace std;

int main()
{
	bool asalmi;

	for(int i=2;i<=500;i++)
	{
		asalmi = true;
		
		for(int j=2;j<=i;j++)
		{
			if(i%j==0 && i!=j)  //Asal deðilse
				asalmi = false;
		}
		
		if(asalmi)
			cout << "Asal :" << i << endl;
	}
	
	return 0;
}
