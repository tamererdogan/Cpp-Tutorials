//Kullanýcýdan istenilen 5 adet kitabý bellekte tutup,verilen indise göre geri gösteren C++ programý

#include <iostream>

using namespace std;

int main()
{
    char kitaplar[5][5][50];
    int kitapNo;

    //Kitap bilgilerini aldýðýmýz for döngüsü
    for(kitapNo=0;kitapNo<5;kitapNo++)
    {
        cout <<"    "<< kitapNo+1 <<". Kitap icin bilgileri giriniz" << endl;
        cout <<"Kitap Adi:";
        cin  >> kitaplar[kitapNo][0];
        cout <<"Yazar Adi:";
        cin  >> kitaplar[kitapNo][1];
        cout <<"Turu:";
        cin  >> kitaplar[kitapNo][2];
        cout <<"Basim Evi:";
        cin  >> kitaplar[kitapNo][3];
        cout <<"Basim Yili:";
	cin  >> kitaplar[kitapNo][4];
    }
    
    //Ekraný temizlemeye yarýyan sistem fonksiyonu
    system("CLS");
    cout << "Kitap No:";
    cin  >> kitapNo;
    system("CLS");
    
    if(kitapNo>0 && kitapNo<6)
    {
	//Kitap No 1-5 arasýndaysa bilgilerinin ekrana bastýrýlmasý	
	cout <<"Kitap No:"  << kitapNo<<endl;
	cout <<"Kitap Adi:" << kitaplar[kitapNo-1][0]<<endl;
	cout <<"Yazar Adi:" << kitaplar[kitapNo-1][1]<<endl;
	cout <<"Turu:" 		<< kitaplar[kitapNo-1][2]<<endl;
	cout <<"Basim Evi:" << kitaplar[kitapNo-1][3]<<endl;
	cout <<"Basim Yili:"<< kitaplar[kitapNo-1][4]<<endl;	

    }else
    {
	//Kitap No 1-5 arasýnda deðilse verilecek hata mesajý
	cout << "Hatali KitapNo girdiniz..";
    }
	
    return 0;
}

