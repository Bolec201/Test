#include <iostream>
using namespace std;
int p = 0;
char napis[100];
void Palindrom(char napis[100])
{
	int dlugosc = strlen(napis);
	int n = dlugosc / 2;
	for (int i = 0; i < n; i++)
	{
		if (napis[i] == napis[dlugosc - i - 1])p++;
	}

	if (p == n)
	{
			cout << "wprowadzony prze uzytkownika wyraz jest palindromem" << endl;
	}
	else
	{
	cout << "wprowadzony przez uzytkownika wyraz nie jest palindromem" << endl;
	}
}
int main()
{
	cout << "prosze wprowadzic wyraz o max 100 znakach" << endl;
	cin >> napis;
	Palindrom(napis);
	return 0;
}