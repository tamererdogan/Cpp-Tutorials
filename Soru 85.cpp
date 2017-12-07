#include <iostream>

using namespace std;

class user{
	
	private:
		
		string id,pw;
	
	public:
		
		user(string i,string p)
		{
			id = i;
			pw = p;
		}
		
		bool operator&&(user nesne)	//her ikiside dogru olunca true deger döndüren aşırı yükleme
		{
			if(this->id == nesne.id && this->pw == nesne.pw)
				return 1;
			else
				return 0;
		}
		
		bool operator||(user nesne)  //her ikisinden biri yanlış ise true deger döndüren aşırı yükleme
		{
			if(this->id != nesne.id || this->pw != nesne.pw)
				return 1;
			else
				return 0;
		}		
};

int main()
{	
	string giris_id,giris_pw;
	user temel("user","pass");
	
	cout << "ID Gir:";
	cin  >> giris_id;
	cout << "PW Gir:";
	cin  >> giris_pw;
	cout << "----------------\n";
	
	user kullanici(giris_id,giris_pw);
	
	if(temel && kullanici)
		cout << "Kullanici adi ve sifre dogru!" <<endl;
	if(temel || kullanici)
		cout <<	"Kullanici adi ve sifre yanlis!";
		
	return 0;
}
