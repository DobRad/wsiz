#include<iostream>

using namespace std;

int main()
{
	int n, li = 0, suma = 0;
	cout << "Podaj dl ciagu: ", cin >> n, cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "Podaj " << i + 1 << " liczbe: ", cin >> li;
		if (li % 2 == 0)
		{
			suma += li;
		}
	}
	cout << "Suma liczb parzystych: " << suma << endl;

	return 0;
}