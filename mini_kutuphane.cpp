//Kullan�c�dan istenilen 5 adet kitab� bellekte tutup,verilen indise g�re geri g�steren C++ program�

#include <iostream>

using namespace std;

int main()
{
    char kitaplar[5][5][50];
    int kitapNo;

    //Kitap bilgilerini ald���m�z for d�ng�s�
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
    
    //Ekran� temizlemeye yar�yan sistem fonksiyonu
    system("CLS");
    cout << "Kitap No:";
    cin  >> kitapNo;
    system("CLS");
    
    if(kitapNo>0 && kitapNo<6)
    {
	//Kitap No 1-5 aras�ndaysa bilgilerinin ekrana bast�r�lmas�	
	cout <<"Kitap No:"  << kitapNo<<endl;
	cout <<"Kitap Adi:" << kitaplar[kitapNo-1][0]<<endl;
	cout <<"Yazar Adi:" << kitaplar[kitapNo-1][1]<<endl;
	cout <<"Turu:" 		<< kitaplar[kitapNo-1][2]<<endl;
	cout <<"Basim Evi:" << kitaplar[kitapNo-1][3]<<endl;
	cout <<"Basim Yili:"<< kitaplar[kitapNo-1][4]<<endl;	

    }else
    {
	//Kitap No 1-5 aras�nda de�ilse verilecek hata mesaj�
	cout << "Hatali KitapNo girdiniz..";
    }
	
    return 0;
}

