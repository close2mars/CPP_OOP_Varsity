#include "Tanggal.hpp"
#include <string>

const int Tanggal::hari2[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};

Tanggal::Tanggal(int bulan, int hari, int tahun){
    setTanggal(bulan, hari, tahun);
}

void Tanggal::setTanggal(int mm , int dd, int yy){
    if (mm >= 1 && mm <= 12)
        bulan = mm;
    else
        throw invalid_argument ("Bulan harus 1-12");

    if (yy >= 1900 & yy <= 2100)
        tahun = yy;
    else throw invalid_argument ("Tahun harus >= 1900 dan <=2100");

    if ((bulan == 2 && tahunLeap(tahun) && dd >= 1 && dd <= 29) || (dd >= 1 && dd <= hari2[bulan]))
        hari = dd;
    else
        throw invalid_argument ("Hari diluar rentang untuk bulan dan tahun sekarang");
}


//operator inkrement prefix
Tanggal& Tanggal::operator++() {
    tolongInkremen(); // inkremen tanggal
    return *this;
}

//operator inkrement postfix
Tanggal Tanggal::operator++(int){
    Tanggal temp = *this; // object lokal temp tidak diinkremen 
    tolongInkremen(); // menginkrement objek this (d3)
    return temp; //  nilai balik  tidak diinkremen
}

//overload += untuk looping inkremen
const Tanggal& Tanggal::operator+= (int hariTambahan) {
    for (int i = 0 ; i < hariTambahan ; i++)
    tolongInkremen();
    return *this;
}

bool Tanggal::tahunLeap(int ujiTahun) {
    if ( ujiTahun % 400 == 0 || (ujiTahun % 100 != 0 && ujiTahun % 4 ==0))
        return true;
    else
        return false;
}

bool Tanggal::akhirBulan(int ujiHari) const{
    if (bulan == 2 && tahunLeap(tahun))
        return ujiHari == 29;
    else 
        return ujiHari == hari2[bulan];
}

//method untuk inkremen tanggal
void Tanggal::tolongInkremen() {
    if (!akhirBulan(hari))
        ++hari;
    else if (bulan < 12){
        ++bulan;
        hari = 1;
    }
    else{
        ++tahun;
        bulan = 1;
        hari = 1;
    }
}


ostream& operator<< (ostream& keluaran, const Tanggal& d){
    static string namaBulan[13] = {"", "Januari", "Februari", "Maret", 
    "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", 
    "Nopember", "Desember"};

    keluaran << namaBulan[d.bulan] << ' ' << d.hari << ", " << d.tahun;
    return keluaran; 
}
