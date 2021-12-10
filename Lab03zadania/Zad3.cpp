#include <iostream>

using namespace std;

int main()
{
	int tab[10], a;

	cout << "Podaj wartosc a: ", cin >> a;
	for (int i = 9; i >= 0; i--)
	{
		tab[i] = a;
		a -= 5;
		
		
			cout << tab[i] << endl;
		
	}

	return 0;
}
