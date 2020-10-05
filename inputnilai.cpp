#include <iostream>
#include <math.h>

//Deklarasi namespace std
using namespace std;

//method untuk menentukan ganjil-genap
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

//method utama
int main()
{
    // deklarasi variabel x
    int x;

    //input memasukkan nilai x
    cout << "Masukkan Jumlah Nilai : ";
    cin >> x;

    // deklarasi variabel array nilai
    int nilai[x];

    //input nilai sebanyak x
    for (int i = 0; i < x; i++)
    {
        cout << "Masukkan Nilai Ke " << i + 1 << " : ";
        cin >> nilai[i];
    }

    //panggil method ganjil-genap
    ganjilgenap(nilai, x);
}
