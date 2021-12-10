#include<iostream>

using namespace std;

int main()
{
	int tab[20]{1,2,3,4,5,6,7,8,9,10}, temp;
	for (int i = 10; i < 20; i++)
	{
		tab[i] = tab[i - 10];
		
		
	}
	for (int i = 0; i < 20; i++)
	{
		cout << " " << i + 1 << ": " << tab[i] << endl;
	}
	return 0;
}