#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

//Deklarasi namespace std
using namespace std;

//method untuk melakukan sorting
void sorting(int nilai[], int x)
{
    //sorting nilai dalam array dari kecil ke besar
    sort(nilai, nilai + x);

    //menampilkan nilai hasil sorting
    cout << "Nilai Setelah Di Sorting : ";
    for (int i = 0; i < x; ++i)
        cout << nilai[i] << " ";
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

    //panggil method sorting
    sorting(nilai, x);
}