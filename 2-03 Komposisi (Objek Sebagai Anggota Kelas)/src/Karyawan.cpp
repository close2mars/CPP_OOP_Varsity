#include "Karyawan.hpp"
#include "Tanggal.hpp"

#include <iostream>
using namespace std;

Karyawan::Karyawan(const string& pertama, const string& akhir, const Tanggal& tanggalHariLahir, const Tanggal& tanggalHariKerja):
namaPertama(pertama), namaAkhir(akhir), tanggalLahir(tanggalHariLahir), tanggalKerja(tanggalHariKerja){
    cout << "Konstruktor objek Karyawan: " << namaPertama << " " << namaAkhir << endl;
}

void Karyawan::tampil() const{
    cout << namaAkhir << ", " << namaPertama << " Dipekerjakan: ";
    tanggalKerja.showDate();
    cout << " Taggal Lahir: "; 
    tanggalLahir.showDate(); cout << endl;
}

Karyawan::~Karyawan(){
    cout<< "Destruktor objek Karyawan: " << namaAkhir << ", " << namaPertama << endl;
}