#include <iostream>

using namespace std;

int main()
{
    int n, i = 1;
    float srPkt = 0, pkt = 0;
    cout << "Podaj liczbe studentow: ", cin >> n, cout << endl;
    int temp = n;
    if (n <= 0) return 0;
    while (true)
    {
        cout << "Podaj liczbe pkt dla studenta " << i << ": ", cin >> pkt;
        if (pkt >= 0 && pkt <= 100)
        {
            srPkt += pkt;
            n--; i++;
            if (n == 0) cout << "Srednia pkt studentow jest rowna: " << srPkt / temp << endl;

        }
        else
        {
            cout << "Liczba pkt musi miescic sie w zakresie od 0 do 100." << endl;
            continue;
        }
    }

    return 0;
}
