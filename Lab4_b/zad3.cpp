#include<iostream>

using namespace std;

long long int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;

    cout << "Podaj numer wyrazu ciagu fibonacciego do obliczenia: ", cin >> n;
    cout << fib(n) << endl;

    return 0;
}