#include <iostream>

using namespace std;

int main(void)
{
    int al1,al2,kcksayi;
    cout << "Bir sayi giriniz:";
    cin >> al1;
    cout << "Bir sayi giriniz:";
    cin >> al2;

    if(al1 > al2)
    {
        kcksayi = al2;
    }
    else
    {
        kcksayi = al1;
    }

    cout << "Kucuk sayi " << kcksayi << endl;

    if(kcksayi%2 == 0)
    {
        cout << "Sayi Cift" ;
    }
    else
    {
        cout << "Sayi Tek" ;
    }

    return 0;
}

