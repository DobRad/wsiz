#include <iostream>

using namespace std;

int main()
{
	int tab[10], n = 3;
	for (int i = 0; i < 10; i++)
	{
		tab[i] = n;
		n += 3;
		if (i%2==1)
		{
			cout << tab[i] << endl;
		}
	}

	return 0;
}
