#include <iostream>
#include "Tanggal.hpp"

using namespace std;

Tanggal::Tanggal(int d , int m , int y){
    hari = d;
    bulan = m;
    tahun = y;
}

void Tanggal::tampil(){
    cout << bulan << "/" << hari << "/" << tahun;

}