//2 ��rencinin cevaplar�n�,cevap anahtar� ile kar��la�t�r�p do�ru say�s�n� ekrana yazd�ran C++ program�

#include <iostream>
#include <String>

using namespace std;

int dogruCevapSay();

int main(int argv,char** args)
{
	string cevap1,cevap2,cevapAnahtari;
	int ogrCevapSayaci1 = 0 ,ogrCevapSayaci2 = 0;
	
	cout <<"1. ogrencinin cevap anahtarini giriniz:";
	cin  >> cevap1;
	cout <<"2. ogrencinin cevap anahtarini giriniz:";
	cin  >> cevap2;
	cout <<"Sinavin cevap anahtarini giriniz:";
	cin  >> cevapAnahtari;
	
	for(int i=0;i<10;i++)
	{
		if(cevap1[i] == cevapAnahtari[i])
		{
			ogrCevapSayaci1++;
		}
	}
	
	for(int j=0;j<10;j++)
	{
		if(cevap2[j] == cevapAnahtari[j])
		{
			ogrCevapSayaci2++;
		}
	}	
	
	cout << "----------------------\n Sonuc Tablosu \n---------------------- \n";
	
	cout << "1. ogrencinin dogru cevap sayisi: " << ogrCevapSayaci1 << endl;
	cout << "2. ogrencinin dogru cevap sayisi: " << ogrCevapSayaci2 << endl;
	
	return 0;
}