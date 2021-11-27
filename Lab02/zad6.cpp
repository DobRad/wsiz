#include<iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int n, liczba, suma = 0;
	cout << "Podaj dl ciagu: ", cin >> n, cout << endl;

	for (int i = 0; i < n; i++)
	{
		liczba = rand() % 56 - 10;
		cout << i + 1 << ". Wylosowana liczba: " << liczba << endl;
		if (liczba % 2 == 0)
		{
			suma += liczba;
		}
	}
	cout << "Suma liczb parzystych: " << suma << endl;

	return 0;
}