#include <iostream>

using namespace std;

int main()
{
    string nama;
    char pilih;
    nama = "telkom";
    pilih = 'n';
    
    do{
        cout << nama << endl;
        cout << "ulangi lagi? (y/n) ";
        cin >> pilih;
    }
    while (pilih == 'y');
    
    return 0;
} 