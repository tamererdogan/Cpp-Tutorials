#include <iostream>

using namespace std;

int main()
{
	char karakter;
	cout << "Bir karakter giriniz:";
	cin >> karakter;
	
	switch(karakter)
	{
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case '0':
			cout << "Rakam";
			break;
		case '.':
		case ',':
		case '+':
		case '$':
		case '%':
		case '&':
		case '/':
		case '(':
		case '[':
		case ')':
		case ']':
		case '=':
		case '"':
		case '!':
		case '^':
		case '#':
		case '{':
		case '}':
		case '*':
		case '?':
		case '-':
		case '_':
			cout << "Ozel Karakter";
			break;
		default:
			cout << "Harf";
	}
	
	return 0;
}
