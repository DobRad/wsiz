#include<iostream>


using namespace std;

int main()
{
	srand(time(NULL));
	int tab[10], min;
	for (int i = 0; i < 10; i++)
	{
		tab[i] = rand() % 74 - 23;
	}


	min = tab[0]; 

	for (int i = 1; i < 10; i++)
	{
		if (min > tab[i])
		{
			min = tab[i];
		}
	}
	cout << "Min wartosc tablicy: " << min << endl;

	return 0;
}