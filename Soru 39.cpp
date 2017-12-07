#include <iostream>

using namespace std;

int main()
{
	int A[2][2],B[2][2],C[2][2];
	int i,j;
	
	//A matrisinin elemanlarýný kullanýcýdan alma
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout << "A[" << i << "][" << j << "] :";
			cin  >> A[i][j];
		}
	}
	
	cout << "------------\n";
	
	//B matrisinin elemanlarýný kullanýcýdan alma
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout << "B[" << i << "][" << j << "] :";
			cin  >> B[i][j];
		}
	}
	
	cout << "------------\n";
	
	//Matrislerde çarpma iþlemi
	C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];	
	C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];	
	C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];	
	C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];
	
	//C matrisini yazdýrma
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout << "C[" << i << "][" << j << "] :";
			cout << C[i][j] << "  ";
		}
		cout << endl;
	}
	
	return 0;
}
