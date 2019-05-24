#include <iostream>
#include <string>
// Aleksander Wawrzyniec i Kacper Kaźmierczak
using namespace std;

int main()
{
	string tekst;
	int liczba_sp = 0;

	cout << "Podaj tekst: ";
	getline(cin, tekst);

	for (int i = 0; i < tekst.length(); i++)
	{
		if (tekst[i] == ' ')
			liczba_sp++;
	}

	cout << "Ilosc spacji: " << liczba_sp;

	system("pause");
}

