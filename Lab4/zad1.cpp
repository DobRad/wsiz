#include<iostream>

using namespace std;

double kolo(double r)
{
	double p = 3.14 * r * r;
	return p;
}
double prostokat(double a, double b)
{
	double p = a * b;
	return p;
}
double trojkat(double a, double h)
{
	double p = (a * h) / 2;
	return p;
}
double szescianp(double a)
{
	double p = 6 * a * a;
	return p;
}
double szesciano(double a)
{
	double v = a * a * a;
	return v;
}
int main()
{
	double r;
	cout << "Podaj promien kola: ", cin >> r;
	cout << "\nPole kola: " << kolo(r) << endl;
	cout << "------------------\n";
	double a, b;
	cout << "Podaj bok a: ", cin >> a;
	cout << "Podaj bok b: ", cin >> b;
	cout << "\nPole prostokata: " << prostokat(a, b) << endl;
	cout << "------------------\n";
	double a1, h;
	cout << "Podaj bok a: ", cin >> a1;
	cout << "Podaj wysokosc h: ", cin >> h;
	cout << "\nPole trojkata: " << trojkat(a1, h) << endl;
	cout << "------------------\n";
	double a2;
	cout << "Podaj bok a: ", cin >> a2;
	cout << "\nPole szescianu: " << szescianp(a2) << endl;
	cout << "\nObjetosc szescianu: " << szesciano(a2) << endl;
	cout << "------------------\n";
	double r1, h1, pc, v, pp;
	cout << "Podaj promien podstawy: ", cin >> r1;
	cout << "\nPodaj wysokosc h: ", cin >> h1;
	pp = kolo(r1);
	v = pp * h1;
	pc = (2 * 3.14 * r1 * r1) + (2 * 3.14 * r1 * h1);
	cout << "\nPole walca: " << pc << endl;
	cout << "\nObjetosc walca: " << v << endl;
	cout << "------------------\n";

	return 0;
}