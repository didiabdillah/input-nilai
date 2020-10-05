#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x;

    cout << "Masukkan Jumlah Nilai : ";
    cin >> x;

    int nilai[x];

    for (int i = 0; i < x; i++)
    {
        cout << "Masukkan Nilai Ke " << i + 1 << " : ";
        cin >> nilai[i];
    }

    for (int i = 0; i < x; i++)
    {
        cout << "Nilai " << i << "= " << nilai[i] << endl;
    }
}