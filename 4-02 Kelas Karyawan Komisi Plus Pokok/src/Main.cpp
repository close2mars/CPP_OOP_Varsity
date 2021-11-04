#include "KaryawanKomisiPlusPokok.hpp"
#include "KaryawanKomisiPlusPokok.cpp"

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    KaryawanKomisiPlusPokok karyawan ("Adam" , "Brown" , "223-33332-38323" , 5000 , .04, 300);
    cout << fixed << setprecision(2);
    cout << "Informasi karyawan didapatkan dengan fungsi get:" << endl;
    cout << "Nama pertama: \t\t" << karyawan.getNamaPertama() << endl;
    cout << "Nama terakhir: \t\t" << karyawan.getNamaAkhir() << endl;
    cout << "Nomor kartu penduduk: \t" << karyawan.getNomorKTP() << endl;
    cout << "Penjualan kotor: \t" << karyawan.getPenjualanKotor() << endl;
    cout << "Besar komisi: \t\t" << karyawan.getBesarKomisi() << endl;
    cout << "Gaji pokok: \t\t" << karyawan.getGajiPokok() << endl;

    karyawan.setGajiPokok(1000);

    cout << "\nInformasi karyawan terperbarui ditampilkan dengan fungsi tampil: \n\n";
    karyawan.tampil();

    cout << "\nPenghasilan karyawan: Rp. " << karyawan.penghasilan() << endl;


    return 0;
}