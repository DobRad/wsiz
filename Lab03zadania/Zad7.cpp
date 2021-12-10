#include<iostream>

using namespace std;

int main()
{
	srand(time(NULL));
	int tab[5][5], suma=0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			tab[i][j]=rand()%21-10;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << tab[i][j] << "	";
		}
		cout<<endl;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == j)
			{
				suma += tab[i][j];
			}
		}
	}
	cout << "\nSUMA EL.PRZEKATNEJ: " << suma << endl;
	return 0;
}