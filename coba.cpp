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