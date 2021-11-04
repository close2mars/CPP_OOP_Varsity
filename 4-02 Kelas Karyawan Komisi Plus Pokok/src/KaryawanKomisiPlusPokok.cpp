#include "KaryawanKomisiPlusPokok.hpp"
#include <iostream>
using namespace std;


KaryawanKomisiPlusPokok::KaryawanKomisiPlusPokok(const string& pertama, const string& akhir, 
const string& ktp, double penjualan, double komisi, double gaji){
    namaPertama = pertama;
    namaAkhir = akhir;
    nomorKTP = ktp;
    setPenjualanKotor(penjualan);
    setBesarKomisi(komisi);
    setGajiPokok(gaji);
}

void KaryawanKomisiPlusPokok::setNamaPertama(const string& pertama){
    namaPertama = pertama;
}

string KaryawanKomisiPlusPokok::getNamaPertama() const{
    return namaPertama;
}

void KaryawanKomisiPlusPokok::setNamaAkhir(const string& akhir){
    namaPertama = akhir;
}

string KaryawanKomisiPlusPokok::getNamaAkhir() const{
    return namaAkhir;
}

void KaryawanKomisiPlusPokok::setNomorKTP(const string& ktp){
    nomorKTP = ktp;
}

string KaryawanKomisiPlusPokok::getNomorKTP() const{
    return nomorKTP;
}

void KaryawanKomisiPlusPokok::setPenjualanKotor(double penjualan){
    if (penjualan >= 0.0)
        penjualanKotor = penjualan;
    else
        throw invalid_argument("Penjualan Kotor harus >= 0.0");
}

double KaryawanKomisiPlusPokok::getPenjualanKotor() const{
    return penjualanKotor;
}

void KaryawanKomisiPlusPokok::setBesarKomisi(double komisi) {
    if (komisi > 0.0 && komisi < 1.0)
        besarKomisi = komisi;
    else
        throw invalid_argument ("Besar Komisi harus di antara > 0.00 dan < 1.0");    
}

double KaryawanKomisiPlusPokok::getBesarKomisi() const{
    return besarKomisi;
}

void KaryawanKomisiPlusPokok::setGajiPokok(double gaji){
    if (gaji >= 0.00)
        gajiPokok = gaji;
    else 
        throw invalid_argument ("Gaji pokok harus >= 0.0");
}

double KaryawanKomisiPlusPokok::getGajiPokok() const{
    return gajiPokok;
}

double KaryawanKomisiPlusPokok::penghasilan() const{
    return gajiPokok + (besarKomisi * penjualanKotor);
}

void KaryawanKomisiPlusPokok::tampil() const{
    cout << "Karyawan komisi bergaji pokok: \t" << namaPertama << ' ' << namaAkhir << endl;
    cout << "Nomor kartu penduduk: \t" << nomorKTP << endl;
    cout << "Penjualan kotor: \t" << penjualanKotor << endl;
    cout << "Besar komisi: \t\t" << besarKomisi << endl;
    cout << "Gaji pokok: \t\t" << gajiPokok << endl;
}


