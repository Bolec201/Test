#include <iostream>
using namespace std;

char  wyraz[100];
void Switch(char wyraz max 100)
{
	int liczba_a = 0;
	int liczba_b = 0;
    
	int dlugosc = strlen(wyraz);

	for (int i = 0; i < dlugosc; i++)
	{


		switch ((int)wyraz[i])
	
		{
		case 'a':
			liczba_a++;
				break;
		case 'b':
			liczba_b++;
				break;
			default:
				cout << "Niema ani jednej litery a lub b" << endl;
				break;
		}
	}
	cout << "Liczba liter a to:" << liczba_a;
	cout << "Liczba liter b to:" << liczba_b;
}
int main()
{
	cout << "wprowadz wyraz max 100 znakow" << endl;
	cin >> wyraz;
	Switch(wyraz);
	system("pause");
	return 0;
}