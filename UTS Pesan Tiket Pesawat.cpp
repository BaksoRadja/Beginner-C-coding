#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string nama, maskapai, nomor, rute, kelas_k;
int pener, jum_tiket, tahun, tanggal,bulan; //pener = Rute Penerbangan yanh dipilih, jum_tiket = jumlah tiket dibeli, nomor = nomor telpon
char kelas;

int hitung_harga() {
	int harga_tiket, bp, ppn, bk; //bp = Base Price Tiket , bk = biaya penambahan sesuai kelas kursi

	if (pener == 1) {
		bp = 1100000;
	}
	else if (pener == 2) {
		bp = 800000;
	}
	else if (pener == 3) {
		bp = 920000;
	}
	else if (pener == 4) {
		bp = 3400000;
	}
	else if (pener == 5) {
		bp = 5400000;
	}
	else if (pener == 6) {
		bp = 890000;
	}

	if (kelas == 'e') {
		bk = 0;
		kelas_k = "EKONOMI";
	}
	else if (kelas == 'b') {
		bk = 3400000;
		kelas_k = "BISNIS";
	}
	else if (kelas == 'f') {
		bk = 20000000;
		kelas_k = "FIRST CLASS";
	}
	ppn = 0.1 * bp;
	harga_tiket = (bp + ppn + bk) * jum_tiket;

	return harga_tiket;
}

void kontak() {
	cout << "============Selamat Datang Di TravelTopia!===========" << endl;
	cout << "= Masukkan Nama :                                   =" << endl; getline(cin >> std::ws, nama);
	cout << "= Masukkan Nomor Telpon :                           =" << endl; cin >> nomor;
	cout << "=====================================================" << endl;
	system("cls");
}

void pesan_tiket() {
	int tipe_pener, pilihan_maskapai;
	char yn;

	cout << "=====================================================" << endl;
	cout << "= Masukkan Jumlah Tiket Yang dipesan :              =" << endl;
	cin >> jum_tiket;
	if (jum_tiket <= 0) {
		cout << "Tiket yang anda pesan tidak boleh kurang dari 0!";
		cout << "Kembali ke menu utama?(y/n)";
		cin >> yn;
		system("cls");
		if (yn == 'y') {
			pesan_tiket();
		}
		else {
			system("q");
		}
	}

	cout << "=====================================================" << endl;
	cout << "======== Pilih Tipe Penerbangan Yang Diinginkan =====" << endl;
	cout << "= 1.Penerbangan Domestik                            =" << endl;
	cout << "= 2.Penerbangan Internasional                       =" << endl;
	cout << "=====================================================" << endl;
	cin >> tipe_pener;
	system("cls");

	switch (tipe_pener) {
	case 1:
		cout << "======= Pilih Rute Perjalanan yang Diinginkan =======" << endl;
		cout << "= 1.Surabaya - Jakarta                              =" << endl;
		cout << "= 2.Surabaya - Bali                                 =" << endl;
		cout << "= 3.Surabaya - Makassar                             =" << endl;
		cout << "=====================================================" << endl;
		cin >> pener;
		system("cls");
		switch (pener) {
		case 1:
			rute = "Surabaya - Jakarta";
			break;
		case 2:
			rute = "Surabaya - Bali";
			break;

		case 3:
			rute = "Surabaya - Makassar";
			break;
		default:
			cout << "Pilihan Tidak Tersedia!";
			cout << "Kembali ke Menu Utama?(Y/N)";
			cin >> yn;
			if (yn == 'y') {
				pesan_tiket();
			}
			else {
				system("q");
			}
			break;
		}
		system("cls");

		cout << "============= Pilih Kelas Penerbangan ===============" << endl;
		cout << "= Ekonomi     (E)                                   =" << endl;
		cout << "= Bisnis      (B)                                   =" << endl;
		cout << "= First Class (F)                                   =" << endl;
		cout << "=====================================================" << endl;
		cin >> kelas;
		system("cls");
		if (kelas == 'e' || kelas == 'E') {

			cout << "================ Pilih Maskapai =====================" << endl;
			cout << "= 1.Batik Air                                       =" << endl;
			cout << "= 2.Citilink                                        =" << endl;
			cout << "=====================================================" << endl;
			cin >> pilihan_maskapai;
			switch (pilihan_maskapai) {
			case 1:
				maskapai = "Batik Air";
				break;
			case 2:
				maskapai = "Citilink";
				break;
			default:
				cout << "Pilihan Tidak Tersedia!";
				cout << "Kembali ke Menu Utama?(Y/N)";
				cin >> yn;
				if (yn == 'y') {
					pesan_tiket();
				}
				else {
				}
				break;
			}
		}
		else if (kelas == 'b' || kelas == 'B') {

			cout << "================ Pilih Maskapai =====================" << endl;
			cout << "= 1.Batik Air                                       =" << endl;
			cout << "= 2.Garuda Air                                      =" << endl;
			cout << "=====================================================" << endl;
			cin >> pilihan_maskapai;
			switch (pilihan_maskapai) {
			case 1:
				maskapai = "Batik Air";
				break;
			case 2:
				maskapai = "Garuda Air";
				break;
			default:
				cout << "Pilihan Tidak Tersedia!";
				cout << "Kembali ke Menu Utama?(Y/N)";
				cin >> yn;
				if (yn == 'y') {
					pesan_tiket();
				}
				else {
				}
			}
		}
		else if (kelas == 'f' || kelas == 'F') {
			cout << "================ Pilih Maskapai =====================" << endl;
			cout << "= 1.Citilink                                        =" << endl;
			cout << "= 2.Garuda Air                                      =" << endl;
			cout << "=====================================================" << endl;
			cin >> pilihan_maskapai;
			switch (pilihan_maskapai) {
			case 1:
				maskapai = "Citilink";
				break;
			case 2:
				maskapai = "Garuda Air";
				break;
			default:
				cout << "Pilihan Tidak Tersedia!";
				cout << "Kembali ke Menu Utama?(Y/N)";
				cin >> yn;
				if (yn == 'y') {
					pesan_tiket();
				}
				else {
				}
			}
		}
		else {
			cout << "Pilihan Tidak Tersedia!";
			cout << "Kembali ke Menu Utama?(Y/N)";
			cin >> yn;
			if (yn == 'y') {
				pesan_tiket();
			}
		}
		system("cls");
		break;
	case 2:
		cout << "=========Pilih Rute Perjalanan yang Diinginkan=======" << endl;
		cout << "= 4.Surabaya - Tokyo                                =" << endl;
		cout << "= 5.Surabaya - Sydney                               =" << endl;
		cout << "= 6.Surabaya - Singapore                            =" << endl;
		cout << "=====================================================" << endl;
		cin >> pener;
		system("cls");
		switch (pener) {
		case 4:
			rute = "Surabaya - Tokyo";
			break;
		case 5:
			rute = "Surabaya - Sydney";
			break;
		case 6:
			rute = "Surabaya - Singapore";
			break;
		default:
			cout << "Pilihan Tidak Tersedia!";
			cout << "Kembali ke Menu Utama?(Y/N)";
			cin >> yn;
			if (yn == 'y') {
				pesan_tiket();
			}
			else {
				system("q");
			}
			break;
		}
		system("cls");

		cout << "============= Pilih Kelas Penerbangan ===============" << endl;
		cout << "= Ekonomi     (E)                                   =" << endl;
		cout << "= Bisnis      (B)                                   =" << endl;
		cout << "= First Class (F)                                   =" << endl;
		cout << "=====================================================" << endl;
		cin >> kelas;
		system("cls");
		if (kelas == 'e' || kelas == 'E') {

			cout << "================ Pilih Maskapai =====================" << endl;
			cout << "= 1.Scoot                                           =" << endl;
			cout << "= 2.Cathay Pacific                                  =" << endl;
			cout << "=====================================================" << endl;
			cin >> pilihan_maskapai;
			switch (pilihan_maskapai) {
			case 1:
				maskapai = "Scoot";
				break;
			case 2:
				maskapai = "Cathay Pacific";
				break;
			default:
				cout << "Pilihan Tidak Tersedia!";
				cout << "Kembali ke Menu Utama?(Y/N)";
				cin >> yn;
				if (yn == 'y') {
					pesan_tiket();
				}
				else {
				}
			}
		}
		else if (kelas == 'b' || kelas == 'B') {

			cout << "================ Pilih Maskapai =====================" << endl;
			cout << "= 1.China Airlines                                  =" << endl;
			cout << "= 2.Cathay Pacific                                  =" << endl;
			cout << "=====================================================" << endl;
			cin >> pilihan_maskapai;
			switch (pilihan_maskapai) {
			case 1:
				maskapai = "China Airlines";
				break;
			case 2:
				maskapai = "Cathay Pacific";
				break;
			default:
				cout << "Pilihan Tidak Tersedia!";
				cout << "Kembali ke Menu Utama?(Y/N)";
				cin >> yn;
				if (yn == 'y') {
					pesan_tiket();
				}
				else {
				}
				break;
			}
		}
		else if (kelas == 'f' || kelas == 'F') {
			cout << "================ Pilih Maskapai =====================" << endl;
			cout << "= 1.Garuda Air                                      =" << endl;
			cout << "=====================================================" << endl;
			cin >> pilihan_maskapai;
			switch (pilihan_maskapai) {
			case 1:
				maskapai = "Garuda Air";
				break;
			default:
				cout << "Pilihan Tidak Tersedia! 1";
				cout << "Kembali ke Menu Utama?(Y/N)";
				cin >> yn;
				if (yn == 'y') {
					pesan_tiket();
				}
				else {
				}
				break;
			}
			break;
		}
		system("cls");
		break;
	default:
		cout << "Pilihan Tidak Tersedia!";
		cout << "Kembali ke Menu Utama?(Y/N)";
		cin >> yn;
		if (yn == 'y') {
			pesan_tiket();
		}
		else {
		}
		system("cls");
		break;
	}
	system("cls");
	bool check_day=false;
	do {
		cout << "========== Masukkan Tanggal Keberangkatan ===========" << endl;
		cin >> tanggal;
		if (tanggal >= 31 || tanggal <= 0) {
			cout << "Pilihan Tidak Tersedia!";
			cout << "Kembali ke Menu Utama?(Y/N)";
			cin >> yn;
			if (yn == 'y') {
				check_day = true;
			}
			else {
				check_day = false;
			}
			system("cls");
		}
		else {
			check_day = false;
		}
	} while (check_day == true);
		
	do {
		cout << "=========== Masukkan Bulan Keberangkatan ============" << endl;
		cin >> bulan;
		if (bulan >= 13 || bulan <= 0) {
			cout << "Pilihan Tidak Tersedia!";
			cout << "Kembali ke Menu Utama?(Y/N)";
			cin >> yn;
			if (yn == 'y') {
				check_day = true;
			}
			else {
				check_day = false;
			}
			system("cls");
		}
		else {
			check_day = false;
		}
	} while (check_day == true);
	do {
		cout << "=========== Masukkan Tahun Keberangkatan ============" << endl;
		cin >> tahun;
		if (tahun < 2022 || tahun > 2022) {
			cout << "Tahun keberangkatan yang kamu pilih tidak tersedia!";
			cout << "Kembali ke Menu Utama?(Y/N)";
			cin >> yn;
			if (yn == 'y') {
				check_day = true;
			}
			else {
				check_day = false;
			}
			system("cls");
		}
		else {
			check_day = false;
		}
	} while (check_day == true);
	system("cls");
}
void cetak_tiket() {
	int i;
	for (i = 0; i <= 60; i++) { cout << "="; } cout << endl;
	cout << "= Nama : " << setw(50) << left << nama << " = " << endl;
	cout << "= Jumlah Tiket / Kursi : " << setw(34) << left << jum_tiket << " = " << endl;
	cout << "= Nomor Telpon : " << setw(42) << left << nomor << " = " << endl;
	cout << "= Harga Tiket : Rp." << setw(40) << left << hitung_harga() << " = " << endl;
	cout << "= Penerbangan : " << setw(43) << left << rute << " = " << endl;
	cout << "= Maskapai : " << setw(46) << left << maskapai << " = " << endl;
	cout << "= Kelas Kursi : " << setw(43) << left << kelas_k << " = " << endl;
	cout << "= Keberangkatan : " << tanggal<< "," << bulan << "," << tahun << endl;
	for (i = 0; i <= 60; i++) { cout << "="; } cout << endl;

	system("pause");
}

int main() {
	kontak();
	pesan_tiket();
	cetak_tiket();

	return 0;
}