#include <iomanip>
#include "PekerjaPemasaran.h"

using namespace std;

PekerjaPemasaran::PekerjaPemasaran() {
    for (int i = 0; i < bulanPerTahun; i++) {
        pemasaran[i] = 0.0;
    }
}

void PekerjaPemasaran::getPemasaranDariPengguna() {
    double angkaPemasaran;
    for (int i = 1; i <= bulanPerTahun; i++) {
        cout << "Masukan angka pemasaran untuk bulan " << i << ": ";
        cin >> angkaPemasaran;
        setPemasaran(i, angkaPemasaran);
    }
}

void PekerjaPemasaran::setPemasaran(int bulan, double jumlah){
    if (bulan >= 1 && bulan <= bulanPerTahun && jumlah > 0)
        pemasaran[bulan - 1] = jumlah;
    else
        cout << "Angka pemasaran dan jumlah tidak valid" << endl;
}

void PekerjaPemasaran::tampilPemasaranTahunan() {
    cout << setprecision(2) << fixed << "\nTotal pemasaran tahunan: Rp. "
        << totalPemasaranTahunan() << endl;
}

double PekerjaPemasaran::totalPemasaranTahunan() {
    double total = 0.0;
    for (int i = 0; i < bulanPerTahun; i++)
        total += pemasaran[i];
    return total;
}







