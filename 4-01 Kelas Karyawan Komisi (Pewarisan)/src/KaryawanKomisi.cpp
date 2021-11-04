#include "KaryawanKomisi.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

KaryawanKomisi::KaryawanKomisi(const string& pertama, const string& akhir, 
const string& ktp, double penjualan, double komisi){
    namaPertama = pertama;
    namaAkhir = akhir;
    nomorKTP = ktp;
    setPenjualanKotor(penjualan);
    setBesarKomisi(komisi);
}

void KaryawanKomisi::setNamaPertama(const string& pertama){
    namaPertama = pertama;
}

string KaryawanKomisi::getNamaPertama() const{
    return namaPertama;
}

void KaryawanKomisi::setNamaAkhir(const string& akhir){
    namaPertama = akhir;
}

string KaryawanKomisi::getNamaAkhir() const{
    return namaAkhir;
}

void KaryawanKomisi::setNomorKTP(const string& ktp){
    nomorKTP = ktp;
}

string KaryawanKomisi::getNomorKTP() const{
    return nomorKTP;
}

void KaryawanKomisi::setPenjualanKotor(double penjualan){
    if (penjualan >= 0.0)
        penjualanKotor = penjualan;
    else
        throw invalid_argument("Oenjualan Kotor harus >= 0.0");
}

double KaryawanKomisi::getPenjualanKotor() const{
    return penjualanKotor;
}

void KaryawanKomisi::setBesarKomisi(double komisi) {
    if (komisi > 0.0 && komisi < 1.0)
        besarKomisi = komisi;
    else
        throw invalid_argument ("Besar Komisi harus di antara > 0.00 dan < 1.0");    
}

double KaryawanKomisi::getBesarKomisi() const{
    return besarKomisi;
}

double KaryawanKomisi::penghasilan() const{
    return besarKomisi * penjualanKotor;
}

void KaryawanKomisi::tampil() const{
    cout << "Karyawan komisi: \t" << namaPertama << ' ' << namaAkhir << endl;
    cout << "Nomor kartu penduduk: \t" << nomorKTP << endl;
    cout << "Penjualan kotor: \t" << penjualanKotor << endl;
    cout << "Besar komisi: \t\t" << besarKomisi;
}























