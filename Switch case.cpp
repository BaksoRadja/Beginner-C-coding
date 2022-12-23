#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int op = 10, op2 = 5, hasil, operasi;

    cout << "1. Operasi Penjumlahan" << endl;
    cout << "2. Operasi Pengurangan" << endl;
    cout << "2. Operasi Perkalian" << endl;
    cout << "2. Operasi Pembagian" << endl;
    cout << "Pilih Operasi : " << endl;
    cin >> operasi;

    switch (operasi) {
    case 1:
        hasil = op + op2;
        cout << "Hasil Penjumlahan : " << hasil << endl;
        break;
    case 2:
        hasil = op - op2;
        cout << "Hasil Pengurangan : " << hasil << endl;
        break;
    case 3:
        hasil = op * op2;
        cout << "Hasil Perkalian : " << hasil << endl;
        break;
    case 4:
        hasil = op / op2;
        cout << "Hasil Pembagian : " << hasil << endl;
        break;
    }

    return 0;
}