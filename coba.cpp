#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

string mataKuliah[MAX],namaTugas[MAX];
int deadline[MAX];
bool status[MAX];
int jumlah[MAX];

//Function menentukan prioritas
string tentukanPrioritas(int hari){
    if (hari == 0)return "DEADLINE HARI INI";
    else if (hari <= 2) return "TINGGI";
    else if (hari <= 5) return "SEDANG";
    else return "RENDAH";
}

// Function menambah tugas
void tambahTugas() {
    if (jumlah >= MAX) {
        cout << "Kapasitas tugas penuh! \n";
        return;
    }

    cout << "Nama mata kuliah: ";
    getline (cin, mataKuliah[jumlah]);

    cout << "Nama tugas: ";
    getline (cin, namaTugas[jumlah]);

    cout << "Deadline (berapa hari lagi, gunakan angka negatif jika terlambat): ";
    cin >> deadline[jumlah];

    status[jumlah] = false;
    jumlah++;

    cout << "Tugas berhasil ditambahkan!\n";
}

// Function menampilkan semua tugas
void tampilkanTugas() {
    if (jumlah == 0) {
        cout << "Belum ada tugas.\n";
        return;
    }

    for (int i = 0; i < jumlah; i++) {
        cout << "\nTugas ke-" << i + 1 << endl;
        cout << "Mata kuliah: " << mataKuliah[i] << endl;
        cout << "Nama tugas : " << namaTugas[i] << endl;
        cout << "Deadline   : " << deadline[i] << " hari lagi\n";
        cout << "Status     : "
             << (status[i] ? "SELESAI" : "BELUM SELESAI") << endl;

        if (!status[i]) {
            cout << "Prioritas  : "
                 << tentukanPrioritas(deadline[i]) << endl;
        }
    }
}

// Function menyelesaikan tugas
void selesaikanTugas() {
    if (jumlah == 0) {
        cout << "Belum ada tugas.\n";
        return;
    }

    tampilkanTugas();

    int nomor;
    cout << "\nNomor tugas yang selesai: ";
    cin >> nomor;

    if (nomor >= 1 && nomor <= jumlah) {
        status[nomor - 1] = true;
        cout << "Tugas berhasil diselesaikan!\n";
    } else {
        cout << "Nomor tugas tidak ditemukan.\n";
    }
}