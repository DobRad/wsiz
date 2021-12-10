#include<iostream>

using namespace std;

int main()
{
	int tab[10], suma1=0, SUMA=0;
	for (int i = 0; i < 2; i++)
	{
		cout << "Podaj wartosc nr " << i + 1 << ": ", cin >> tab[i];
		suma1 += tab[i];
	}
	cout << "SUMA 0 i 1: " << suma1<<endl;
	for (int i = 2; i < 10; i++)
	{
		tab[i] = tab[i - 1] + tab[i - 2];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << " " << i + 1 << ": " << tab[i] << endl;
	}

	return 0;
}