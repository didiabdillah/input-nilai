#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

void sorting(int nilai[], int x)
{
    sort(nilai, nilai + x);
    cout << "Nilai Setelah Di Sorting : ";
    for (int i = 0; i < x; ++i)
        cout << nilai[i] << " ";
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

    sorting(nilai, x);
}