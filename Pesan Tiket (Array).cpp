#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
void error() {
	cout << "=================================================" << endl
		<< "= Pilihan yang anda pilih tidak tersedia!       =" << endl
		<< "= Klik ENTER untuk mengisi ulang data!          =" << endl
		<< "= Tutup Aplikasi jika tidak ingin mengisi ulang =" << endl
		<< "=================================================" << endl;
	system("pause");
}

int main() {
	int tipe_pener, rute_pener, jum_tiket, kelas_pener;
	bool check = false;
	string nama, tgl, maskapai, t_kelas_pener, t_rute_pener, telp;
	int harga[2][3][3] = {
		{{3400000,5400000,890000},{6800000,8800000,4290000},{23400000,25400000,20890000}},
		{{1100000,800000,920000},{4500000,4200000,4320000},{21100000,20800000,20920000}}
	};
	cout << "=================================================" << endl
		<< "= Selamat datang di Traveltopia !               =" << endl
		<< "=================================================" << endl
		<< "= Masukkan Nama :                               =" << endl;
	getline(cin >> ws, nama);
	system("cls");
	cout
		<< "=================================================" << endl
		<< "= Masukkan Nomor Telepon                        =" << endl;
	cin >> telp;
	do {
		cout << "= Masukkan Jumlah Tiket (Max.20) :              =" << endl;
		cin >> jum_tiket;
		if (jum_tiket > 0 && jum_tiket <= 20) {
			check = true;
		}
		else {
			error();
			check = false;
		}
	} while (check == false);
	system("cls");
	do {
		cout << "=================================================" << endl
			<< "= Pilih Tipe Penerbangan !                      =" << endl
			<< "= 1. Penerbangan Internasional                  =" << endl
			<< "= 2. Penerbangan Nasional                       =" << endl
			<< "=================================================" << endl;
		cin >> tipe_pener;
		system("cls");
		switch (tipe_pener)
		{
		case 1:
			do {
				cout << "=================================================" << endl
					<< "= List Penerbangan Internasional                =" << endl
					<< "= 1. Surabaya - Tokyo                           =" << endl
					<< "= 2. Surabaya - Sydney                          =" << endl
					<< "= 3. Surabaya - Singapore                       =" << endl
					<< "=================================================" << endl;
				cin >> rute_pener;
				switch (rute_pener)
				{
				case 1:
					t_rute_pener = "Surabaya - Tokyo";
					check = true;
					break;
				case 2:
					t_rute_pener = "Surabaya - Sydney";
					check = true;
					break;
				case 3:
					t_rute_pener = "Surabaya - Singapore";
					check = true;
					break;
				default:
					error();
					check = false;
					break;
				}
			} while (check == false);
			break;
		case 2:
			do {
				cout << "=================================================" << endl
					<< "= List Penerbangan Nasional                     =" << endl
					<< "= 1. Surabaya - Jakarta                         =" << endl
					<< "= 2. Surabaya - Denpasar                        =" << endl
					<< "= 3. Surabaya - Makassar                        =" << endl
					<< "=================================================" << endl;
				cin >> rute_pener;
				switch (rute_pener)
				{
				case 1:
					t_rute_pener = "Surabaya - Jakarta";
					check = true;
					break;
				case 2:
					t_rute_pener = "Surabaya - Denpasar";
					check = true;
					break;
				case 3:
					t_rute_pener = "Surabaya - Makassar";
					check = true;
					break;
				default:
					error();
					check = false;
					break;
				}
			} while (check == false);
			break;
		default:
			error();
			check = false;
			break;
		}
	} while (check == false);
	system("cls");
	//Bagian menentukan tanggal berangkat & maskapai
	if (tipe_pener == 1 && rute_pener == 1) {
		int pilihan;
		do {                             //Surabaya Tokyo v
			cout << "===============================================================" << endl
				<< "=                Penerbangan Surabaya - Tokyo                 =" << endl
				<< "===============================================================" << endl
				<< "=       Maskapai            |      Tanggal Keberangkatan      =" << endl
				<< "===============================================================" << endl
				<< "= 1.Scoot                   |  1 Januari                      =" << endl
				<< "= 2.Cathay Pacific          |  5 Januari                      =" << endl
				<< "= 3.Scoot                   |  12 Januari                     =" << endl
				<< "= 4.Garuda Air              |  13 Januari                     =" << endl
				<< "= 5.China Airlines          |  29 Januari                     =" << endl
				<< "===============================================================" << endl;
			cin >> pilihan;
			switch (pilihan) {
			case 1:
				tgl = "1 Januari 2023";
				maskapai = "Scoot";
				check = true;
				break;
			case 2:
				tgl = "5 Januari";
				maskapai = "Cathay Airlines";
				check = true;
				break;
			case 3:
				tgl = "12 Januari";
				maskapai = "Scoot";
				check = true;
				break;
			case 4:
				tgl = "13 Januari";
				maskapai = "Garuda Air";
				check = true;
				break;
			case 5:
				tgl = "29 Januari";
				maskapai = "China Airlines";
				check = true;
				break;
			default:
				error();
				check = false;
				break;
			}
		} while (check == false);
	}
	else if (tipe_pener == 1 && rute_pener == 2) {
		int pilihan;
		do {                             //Surabaya Sydney v
			cout << "===============================================================" << endl
				<< "=                Penerbangan Surabaya - Sydney                =" << endl
				<< "===============================================================" << endl
				<< "=       Maskapai            |      Tanggal Keberangkatan      =" << endl
				<< "===============================================================" << endl
				<< "= 1.Cathay Pacific          |  1 Januari                      =" << endl
				<< "= 2.Cathay Pacific          |  2 Januari                      =" << endl
				<< "= 3.Scoot                   |  3 Januari                      =" << endl
				<< "= 4.Scoot                   |  20 Januari                     =" << endl
				<< "= 5.China Airlines          |  29 Januari                     =" << endl
				<< "===============================================================" << endl;
			cin >> pilihan;
			switch (pilihan) {
			case 1:
				tgl = "1 Januari 2023";
				maskapai = "Cathay Pacific";
				check = true;
				break;
			case 2:
				tgl = "2 Januari 2023";
				maskapai = "Cathay Pacific";
				check = true;
				break;
			case 3:
				tgl = "3 Januari 2023";
				maskapai = "Scoot";
				check = true;
				break;
			case 4:
				tgl = "20 Januari 2023";
				maskapai = "Scoot";
				check = true;
				break;
			case 5:
				tgl = "29 Januari 2023";
				maskapai = "China Airlines";
				check = true;
				break;
			default:
				error();
				check = false;
				break;
			}
		} while (check == false);
	}
	else if (tipe_pener == 1 && rute_pener == 3) {
		int pilihan;
		do {                             //Surabaya Singapore v
			cout << "===============================================================" << endl
				<< "=              Penerbangan Surabaya - Singapore               =" << endl
				<< "===============================================================" << endl
				<< "=       Maskapai            |      Tanggal Keberangkatan      =" << endl
				<< "===============================================================" << endl
				<< "= 1.Garuda Air              |  2 Januari                      =" << endl
				<< "= 2.China Airlines          |  5 Januari                      =" << endl
				<< "= 3.Scoot                   |  9 Januari                      =" << endl
				<< "= 4.Garuda Air              |  10 Januari                     =" << endl
				<< "= 5.Cathay Pacific          |  25 Januari                     =" << endl
				<< "===============================================================" << endl;
			cin >> pilihan;
			switch (pilihan) {
			case 1:
				tgl = "2 Januari 2023";
				maskapai = "Garuda Air";
				check = true;
				break;
			case 2:
				tgl = "5 Januari 2023";
				maskapai = "China Airlines";
				check = true;
				break;
			case 3:
				tgl = "9 Januari 2023";
				maskapai = "Scoot";
				check = true;
				break;
			case 4:
				tgl = "10 Januari 2023";
				maskapai = "Garuda Air";
				check = true;
				break;
			case 5:
				tgl = "25 Januari 2023";
				maskapai = "Cathay Pacific";
				check = true;
				break;
			default:
				error();
				check = false;
				break;
			}
		} while (check == false);
	}
	else if (tipe_pener == 2 && rute_pener == 1) {
		int pilihan;
		do {                             //Surabaya Jakarta v
			cout << "===============================================================" << endl
				<< "=               Penerbangan Surabaya - Jakarta                =" << endl
				<< "===============================================================" << endl
				<< "=       Maskapai            |      Tanggal Keberangkatan      =" << endl
				<< "===============================================================" << endl
				<< "= 1.Batik Air               |  3 Januari                      =" << endl
				<< "= 2.Citilink                |  5 Januari                      =" << endl
				<< "= 3.Batik Air               |  9 Januari                      =" << endl
				<< "= 4.Garuda Air              |  19 Januari                     =" << endl
				<< "= 5.Citilink                |  26 Januari                     =" << endl
				<< "===============================================================" << endl;
			cin >> pilihan;
			switch (pilihan) {
			case 1:
				tgl = "3 Januari 2023";
				maskapai = "Batik Air";
				check = true;
				break;
			case 2:
				tgl = "5 Januari 2023";
				maskapai = "Citilink";
				check = true;
				break;
			case 3:
				tgl = "9 Januari 2023";
				maskapai = "Batik Air";
				check = true;
				break;
			case 4:
				tgl = "19 Januari 2023";
				maskapai = "Garuda Air";
				check = true;
				break;
			case 5:
				tgl = "26 Januari 2023";
				maskapai = "Citilink";
				check = true;
				break;
			default:
				error();
				check = false;
				break;
			}
		} while (check == false);
	}
	else if (tipe_pener == 2 && rute_pener == 2) {
		int pilihan;
		do {                             //Surabaya Denpasar v
			cout << "===============================================================" << endl
				<< "=              Penerbangan Surabaya - Denpasar                =" << endl
				<< "===============================================================" << endl
				<< "=       Maskapai            |      Tanggal Keberangkatan      =" << endl
				<< "===============================================================" << endl
				<< "= 1.Garuda Air              |  2 Januari                      =" << endl
				<< "= 2.Citilink                |  9 Januari                      =" << endl
				<< "= 3.Batik Air               |  10 Januari                     =" << endl
				<< "= 4.Garuda Air              |  14 Januari                     =" << endl
				<< "= 5.Batik Air               |  25 Januari                     =" << endl
				<< "===============================================================" << endl;
			cin >> pilihan;
			switch (pilihan) {
			case 1:
				tgl = "2 Januari 2023";
				maskapai = "Garuda Air";
				check = true;
				break;
			case 2:
				tgl = "9 Januari 2023";
				maskapai = "Citilink";
				check = true;
				break;
			case 3:
				tgl = "10 Januari 2023";
				maskapai = "Batik Air";
				check = true;
				break;
			case 4:
				tgl = "14 Januari 2023";
				maskapai = "Garuda Air";
				check = true;
				break;
			case 5:
				tgl = "25 Januari 2023";
				maskapai = "Batik Air";
				check = true;
				break;
			default:
				error();
				check = false;
				break;
			}
		} while (check == false);
	}
	else if (tipe_pener == 2 && rute_pener == 3) {
		int pilihan;
		do {                             //Surabaya Makassar v
			cout << "===============================================================" << endl
				<< "=             Penerbangan Surabaya - Makassar                 =" << endl
				<< "===============================================================" << endl
				<< "=       Maskapai            |      Tanggal Keberangkatan      =" << endl
				<< "===============================================================" << endl
				<< "= 1.Batik Air               |  2 Januari                      =" << endl
				<< "= 2.Batik Air               |  5 Januari                      =" << endl
				<< "= 3.Citilink                |  9 Januari                      =" << endl
				<< "= 4.Garuda Air              |  24 Januari                     =" << endl
				<< "= 5.Citilink                |  24 Januari                     =" << endl
				<< "===============================================================" << endl;
			cin >> pilihan;
			switch (pilihan) {
			case 1:
				tgl = "2 Januari 2023";
				maskapai = "Batik Air";
				check = true;
				break;
			case 2:
				tgl = "5 Januari 2023";
				maskapai = "Batik Air";
				check = true;
				break;
			case 3:
				tgl = "9 Januari 2023";
				maskapai = "Citilink";
				check = true;
				break;
			case 4:
				tgl = "24 Januari 2023";
				maskapai = "Garuda Air";
				check = true;
				break;
			case 5:
				tgl = "24 Januari 2023";
				maskapai = "Citilink";
				check = true;
				break;
			default:
				error();
				check = false;
				break;
			}
		} while (check == false);
	}
	system("cls");
	do {
		cout << "============= Pilih Kelas Penerbangan ===============" << endl
			<< "= 1.Ekonomi                                        =" << endl
			<< "= 2.Bisnis                                         =" << endl
			<< "= 3.First Class                                    =" << endl
			<< "=====================================================" << endl;
		cin >> kelas_pener;
		switch (kelas_pener) {
		case 1:
			t_kelas_pener = "EKONOMI";
			check = true;
			break;
		case 2:
			t_kelas_pener = "BISNIS";
			check = true;
			break;
		case 3:
			t_kelas_pener = "FIRST CLASS";
			check = true;
			break;
		default:
			error();
			check = false;
			break;
		}
	} while (check == false);
	system("cls");
	//Hitung Harga Total
	int harga_total, ppn;
	ppn = harga[tipe_pener - 1][kelas_pener - 1][rute_pener - 1] * 0.1;
	harga_total = (harga[tipe_pener - 1][kelas_pener - 1][rute_pener - 1] + ppn) * jum_tiket;
	//Cetak Tiket
	int i;
	cout << "===================== Tiket Pesawat =========================" << endl;
	cout << "= Nama : " << setw(50) << left << nama << " = " << endl;
	cout << "= No.Telp : " << setw(47) << left << telp << " = " << endl;
	cout << "= Jumlah Tiket / Kursi : " << setw(34) << left << jum_tiket << " = " << endl;
	cout << "= Harga Tiket : Rp." << setw(40) << left << harga_total << " = " << endl;
	cout << "= Penerbangan : " << setw(43) << left << t_rute_pener << " = " << endl;
	cout << "= Maskapai : " << setw(46) << left << maskapai << " = " << endl;
	cout << "= Kelas Kursi : " << setw(43) << left << t_kelas_pener << " = " << endl;
	cout << "= Keberangkatan : " << setw(41) << left << tgl << " = " << endl;
	for (i = 0; i <= 60; i++) { cout << "="; } cout << endl;

	return 0;
}