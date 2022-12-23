#include <iostream>

using namespace std;

int main() {
	int ar[2][3][3] = {
		{{1100000,800000,920000},{4500000,4200000,4320000},{21100000,20800000,20920000}},
		{{3400000,5400000,890000},{6800000,8800000,4290000},{23400000,25400000,20890000}}
	};
	cout << "Daftar Harga Tiket Penerbangan : " << endl;
	for (int x = 0; x < 2; x++) {
		for (int y = 0; y < 3; y++) {
			for (int z = 0; z < 3; z++) {
				cout << "Rp." << ar[x][y][z] << endl;
			}
		}
	}

	return 0;
}