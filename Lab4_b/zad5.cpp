#include<iostream>
using namespace std;

double ciag(int n)
{
	if (n == 1)
		return 0;
	if (n == 2)
		return 0.5;

	return -ciag(n - 1) * ciag(n - 2);
}

int main()
{
	int n;

	cout << "Podaj n: ", cin >> n;
	cout << n << " wyraz ciagu ma wartosc " << ciag(n) << endl;

	return 0;
}