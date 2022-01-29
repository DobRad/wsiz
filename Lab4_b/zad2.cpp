#include <iostream>

using namespace std;

int rek(int a, int b) {
	if (a == b)
		return a;
	else
		if (a > b)
			return rek(a - b, b);
		else
			return rek(a, b - a);
}
int main() {
	int x, y;
	cout << "Podaj 2 liczby ", cin >> x, cin >> y;
	cout << "NWD wynosi " << rek(x, y);

	return 0;
}