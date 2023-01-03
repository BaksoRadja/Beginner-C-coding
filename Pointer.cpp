#include <iostream>

using namespace std;

int main() {
	int* pta, a;
	pta = &a;
	a = 10;

	cout << "Nilai variabel 'a' : " << a << endl
		<< "Address variabel 'a' : " << &a << endl
		<< "Nilai variabel 'a' (diakses lewat variabel pointer 'pta') : " << *pta << endl
		<< "Nilai variabel pointer 'pta' (address variabel a yang disimpan di variabel pointer 'pta')" << pta;
}