#include <iostream>

using namespace std;

int main()
{
    int data;
    data = 5;

    while(data < 10){
        cout << "Masukkan Nilai data : ";
        cin >> data;
    }data = 0;
    while (data < 10){
        cout << data << endl;
        data++;
    } 
    return 0;
} 