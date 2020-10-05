#include <iostream>
#include <math.h>

using namespace std;

void ganjilgenap(int nilai[], int x)
{
    string jenisnilai;

    for (int i = 0; i < x; i++)
    {
        if (nilai[i] % 2 == 0)
        {
            jenisnilai = "Genap";
        }
        else
        {
            jenisnilai = "Ganjil";
        }
        cout << "Nilai " << nilai[i] << " = " << jenisnilai << endl;
    }
}

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

    ganjilgenap(nilai, x);
}
