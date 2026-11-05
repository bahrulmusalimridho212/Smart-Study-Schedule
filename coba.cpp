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
    if (hari ==0)return "DEADLINE HARIINI";
    else if (hari <= 2) return "TINGGI";
    else if (hari <= 5) return "SEDENG";
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