#include <iostream>
using namespace std;

void dtb(int liczba)
{
	if (liczba > 0)
	{
		dtb(liczba / 2);
		cout << liczba % 2;
	}
}

int main()
{
	int liczba;

	cout << "Podaj liczbe: ", cin >> liczba;
	cout << "Postac binarna liczby " << liczba << ": ";
	dtb(liczba);
	cout << endl;

	return 0;
}