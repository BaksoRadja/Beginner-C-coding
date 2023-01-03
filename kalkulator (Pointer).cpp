#include <iostream>

using namespace std;

void penjumlahan(int* pta,int* ptb) {
	cout << "\n\n\t\t\tHasil Operasi Hitung : " << *pta + *ptb;
}
void pengurangan(int* pta, int* ptb) {
	cout << "\n\n\t\t\tHasil Operasi Hitung : " << *pta - *ptb;
}
void perkalian(int* pta, int* ptb) {
	cout << "\n\n\t\t\tHasil Operasi Hitung : " << *pta * *ptb;
}
void pembagian(int* pta, int* ptb) {
	cout << "\n\n\t\t\tHasil Operasi Hitung : " << *pta / *ptb;
}
int main() {
	int a, b, pilihan;
	int* pta, * ptb, * ptrhasil;
	pta = &a, ptb = &b;
	
	cout << "\t\t\tKALKULATOR SEDERHANA MENGGUNAKAN POINTER" << endl
         << "\t\t\tMasukkan Nilai a : ";
	cin >> a;
	cout << "\t\t\tMasukkan Nilai b : ";
	cin >> b;
	cout << "\t\t\tOperasi Hitung" << endl
		<< "\t\t\t1. a + b" << endl
		<< "\t\t\t2. a - b" << endl
		<< "\t\t\t3. a * b" << endl
		<< "\t\t\t4. a / b" << endl
		<< "\t\t\tMasukkan Operasi Hitung Yang Dipilih : ";
	cin >> pilihan;
	switch (pilihan) {
	case 1:
		penjumlahan(pta, ptb);
		break;
	case 2:
		pengurangan(pta, ptb);
		break;
	case 3:
		perkalian(pta, ptb);
		break;
	case 4:
		pembagian(pta, ptb);
		break;
	default:
		char yn;
		cout << "Pilihan Tidak Tersedia, Ulangi? (y/n)";
		cin >> yn;
		if (yn == 'y') {
			main();
		}
		else {
			system("exit");
		}
		break;
	}
	
}