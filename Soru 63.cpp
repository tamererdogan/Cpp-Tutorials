#include <iostream>

using namespace std;

class ogrenci{
	
	private:
		
		int notu;
	
	public:
		
		friend void al(ogrenci* ogr);
		friend void goster(ogrenci* ogr);
};

void al(ogrenci* ogr)
{
	for(int i=0;i<3;i++)
	{
		cout << "Ogrenci notu gir:";
		cin >> ogr[i].notu;
	}
}

void goster(ogrenci* ogr)
{
	for(int i=0;i<3;i++)
	{
		cout << "Ogrenci notu:" << ogr[i].notu << endl;
	}
}

int main()
{	
	ogrenci ogr[3];
	
	al(ogr);
	goster(ogr);
	
	return 0;
}
