#include "Karyawan.hpp"
#include <iostream>

using namespace std;

int Karyawan::hitung = 0; // member static bisa diinisialisasi diluar 

int Karyawan::getHitung(){
    return hitung;
}

Karyawan::Karyawan(const string& pertama, const string& akhir):
namaPertama(pertama), namaAkhir(akhir){
    ++hitung;
    cout << "Konstruktor Karyawan untuk " << namaPertama << " " 
    << namaAkhir << " dipanggil" << endl;
} //konstruktor

Karyawan::~Karyawan(){
    cout << "Destruktor Karyawan dipanggil untuk " << namaPertama << " "
    << namaAkhir << endl;
    //--hitung;
}

string Karyawan::getNamaPertama() const{
    return namaPertama;
}

string Karyawan::getNamaAkhir() const{
    return namaAkhir;
}