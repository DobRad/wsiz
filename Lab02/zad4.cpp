#include<iostream>

using namespace std;

int main()
{
	int tab[10], ilosc_ujemn = 0, ilosc_dodatnich = 0, suma_u = 0, suma_d = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Podaj liczbe " << i + 1 << ": ", cin >> tab[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (tab[i] < 0)
		{
			ilosc_ujemn++;
			suma_u += tab[i];
		}
		else
		{
			ilosc_dodatnich++;
			suma_d += tab[i];
		}
	}
	cout << "Ilosc liczb ujemnych: " << ilosc_ujemn << endl;
	cout << "Suma liczb ujemnych: " << suma_u << endl;
	cout << "Ilosc liczb dodatnich: " << ilosc_dodatnich << endl;
	cout << "Suma liczb dodatnich: " << suma_d << endl;
	cout << "Suma sumy dodatnich i ujemnych: " << suma_d + suma_u << endl;

	return 0;
}