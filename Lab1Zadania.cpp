#include <iostream>

using namespace std;

int main()
{
	cout << "Cw1" << endl;

	string nr_alb = "w65473";
	cout << "Numer albumu: " << nr_alb << endl;
	cout << endl << "-----------------" << endl;
	cout << "Cw2" << endl;

	int lpn;
	cout << "Podaj liczbe: ", cin >> lpn;
	if (lpn % 2 == 0)
	{
		cout << "Liczba jest parzysta" << endl;
	}
	else
	{
		cout << "Liczba jest nieparzysta" << endl;
	}
	cout << endl << "-----------------" << endl;
	cout << "Cw3" << endl;

	double l1, l2;
	cout << "Podaj liczbe 1: ", cin >> l1;
	cout << "Podaj liczbe 2: ", cin >> l2;
	if (l1 == l2)
	{
		cout << "liczby sa rowne.";
	}
	else
	{
		if (l1 > l2)
		{
			cout << "Liczba 1 ( " << l1 << " ) jest wieksza." << endl;
		}
		else
		{
			cout << "Liczba 2 ( " << l2 << " ) jest wieksza." << endl;
		}
	}

	cout << endl << "-----------------" << endl;
	cout << "Cw4/5" << endl;
	int x;
	double p, o, i, u, w;
	cout << "Kalkulator:\n 1 - Suma\n 2 - Roznica\n 3 - Iloczyn\n 4 - Iloraz\n 5 - Srednia arytmetyczna\nOpcja: ";
	cin >> x;
	switch (x)
	{
		case 1:
		{
			cout << "-Suma-\nPodaj liczbe 1: ", cin >> p, cout << "\nPodaj liczbe 2: ", cin >> o;
			w = p + o;
			cout << endl << "Suma liczb: " << w << endl;
			break;
		}
		case 2:
		{
			cout << "-Roznica-\nPodaj liczbe 1: ", cin >> p, cout << "\nPodaj liczbe 2: ", cin >> o;
			w = p - o;
			cout << endl << "Roznica liczb: " << w << endl;
			break;
		}
		case 3:
		{
			cout << "-Iloczyn-\nPodaj liczbe 1: ", cin >> p, cout << "\nPodaj liczbe 2: ", cin >> o;
			w = p * o;
			cout << endl << "Iloczyn liczb: " << w << endl;
			break;
		}
		case 4:
		{
			cout << "-Iloraz-\nPodaj liczbe 1: ", cin >> p, cout << "\nPodaj liczbe 2: ", cin >> o;
			if (o != 0)
			{
				w = p / o;
				cout << endl << "Iloraz liczb: " << w << endl;
				break;
			}
			else
			{
				cout << "Nie dzielimy przez 0!\n";
				break;
			}
		}
		case 5:
		{
			cout << "-SrArytm-\nPodaj 4 liczby:\nLiczba 1: ", cin >> p, cout << "\nLiczba 2: ", cin >> o, cout << "\nLiczba 3: ", cin >> i, cout << "\nLiczba 4: ", cin >> u;
			w = (p + o + i + u) / 4;
			cout << "\nSrednia arytmetyczna z podanych liczb: " << w << endl;
			break;
		}
		default: 
			cout << "\nNie ma takiej opcji.\n";
			break;
	}
}