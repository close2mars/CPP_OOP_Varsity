#include <iostream>

#include "Tanggal.cpp"
#include "Karyawan.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Tanggal lahir(6, 12, 1994); // di desturktor terakhir
    Tanggal kerja(14, 2, 2018); 
    Karyawan manajer("Pangestu", "Wibowo", lahir, kerja);

    cout << endl;
    manajer.tampil();

    return 0;
}
