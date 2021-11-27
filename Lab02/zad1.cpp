#include <iostream>

using namespace std;

int main()
{
    int n, i = 1;
    float srPkt = 0, pkt = 0;
    cout << "Podaj liczbe studentow: ", cin >> n, cout << endl;
    int temp = n;
    if (n <= 0) return 0;
    while (n > 0)
    {
        cout << "Podaj liczbe pkt dla studenta " << i << ": ", cin >> pkt;
        srPkt += pkt;
        n--; i++;
        if(n==0) cout << "Srednia pkt studentow jest rowna: " << srPkt/temp << endl;
    }
    

    return 0;
}
