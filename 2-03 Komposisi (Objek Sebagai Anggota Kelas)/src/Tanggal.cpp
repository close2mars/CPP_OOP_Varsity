#include "Tanggal.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;

Tanggal::Tanggal(int dy, int mn, int yr){
    if (mn > 0 && mn <=12 )
        bulan = mn;
    else
        throw invalid_argument("bulan harus 1-12");
    
    tahun = yr;
    hari = periksaHari(dy);

    cout << "Konstruktor objek tanggal untuk tanggal: ";
    showDate(); cout << endl;
}
    
void Tanggal::showDate() const{
    cout << hari << "/" << bulan << "/" << tahun;
}

Tanggal::~Tanggal(){
    cout << "Destruktor objek Tanggal untuk Tanggal ";
    showDate(); cout << endl;
}

int Tanggal::periksaHari(int ujiHari) const{
    static const int hariPerbulan[12+1] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(ujiHari > 0 && ujiHari <= hariPerbulan[bulan])
        return ujiHari;
    
    //29 februari untuk leap year
    if (bulan == 2 && ujiHari == 29 && (tahun %400 == 0 ||
    (tahun % 4 ==0 && tahun % 100 !=0)))
    return ujiHari;

    throw invalid_argument ("Hari tidak valid terhadap bulan dan tahun");
 }