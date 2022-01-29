#include<iostream>
using namespace std;

bool LiczbaPierwsza(int liczba)
{
	if (liczba < 2)
		return false;
	for (int i = 2; i * i <= liczba; i++)
		if (liczba % i == 0)
			return false;
	return true;
}

int main()
{
	int liczba;

	cout << "Podaj liczbe: ";
	cin >> liczba;

	if (LiczbaPierwsza(liczba))
		cout << "Liczba " << liczba << " jest liczba pierwsza" << endl;
	else
		cout << "Liczba " << liczba << " nie jest liczba pierwsza" << endl;

	return 0;
}