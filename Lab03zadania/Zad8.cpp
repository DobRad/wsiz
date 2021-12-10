#include<iostream>

using namespace std;

int main()
{
	srand(time(NULL));
	int tab1[5][5], tab2[5][5], tabSuma[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			tab1[i][j] = rand() % 21 - 10;
			tab2[i][j] = rand() % 31 - 6;
			tabSuma[i][j] = tab1[i][j] + tab2[i][j];
		}
	}
	cout << "Macierz 1:" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << tab1[i][j] << "	 ";
		}
		cout << endl;
	}
	cout << "\nMacierz 2:" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << tab2[i][j] << "	 ";
		}
		cout << endl;
	}
	cout << "Wynik sumy macierzy 1 i macierzy 2:" << endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << tabSuma[i][j] << "	 ";
		}
		cout << endl;
	}
	return 0;
}