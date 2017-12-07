/*
A�a��daki Matrisin X De�erlerini Cramer Metoduyla Bulan C++ Program�
	x1 + 2x2 + 3X3 = 1
	3x1 + 2x2 + x3 = 2
	2x2 = 3
*/

#include <iostream>

using namespace std;

int determinantBul(int matris[3][3]);

int main()
{	
	/*
		A Katsay�lar Matrisi		B Matrisi
		1 2 3						1
		3 2 1						2
		0 2 0						3
	*/
	
	float x1,x2,x3,a;
	int  A[3][3] = { {1,2,3},{3,2,1},{0,2,0} };
	
	//A1-A2-A3 matrisleri A matrisinin 1-2-3. sat�rlar�na B matrisinin yaz�lmas�yla olu�turulmu� matrislerdir.
	int A1[3][3] = { {1,2,3},{2,2,1},{3,2,0} };
	int A2[3][3] = { {1,1,3},{3,2,1},{0,3,0} };
	int A3[3][3] = { {1,2,1},{3,2,2},{0,2,3} };
		
	//A matrisin determinant� bulunur.
	a = determinantBul(A);  
	
	//A1-A2-A3 matrislerinin determinant�n�n A matrisinin determinant�na b�l�nmesi sonucu x1-x2-x3 de�erleri bulunur.
	x1 = determinantBul(A1)/a;
	x2 = determinantBul(A2)/a;
	x3 = determinantBul(A3)/a;
			
	//Sonu�lar� yazd�rma
	cout << "Matrisin X' Degerleri:" << endl << "X1:"<< x1 << endl << "X2:"<< x2<< endl << "X3:"<<x3;  
	
	return 0;
}

int determinantBul(int matris[3][3])
{
	int sag,sol;
	
	sag = ( matris[0][0] * matris[1][1] * matris[2][2] ) + ( matris[1][0] * matris[2][1] * matris[0][2] ) + ( matris[2][0] * matris[0][1] * matris[1][2] );
	sol = ( matris[0][2] * matris[1][1] * matris[2][0] ) + ( matris[1][2] * matris[2][1] * matris[0][0] ) + ( matris[2][2] * matris[0][1] * matris[1][0] );
		
	return (sag-sol);
}
