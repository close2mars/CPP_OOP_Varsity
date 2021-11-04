#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Waktu.hpp"

using namespace std;

Waktu::Waktu( int jam, int menit, int detik){
    setWaktu(jam, menit, detik);
}


Waktu& Waktu::setWaktu(int h, int m, int s){ // fungsi ini mengembalikan nilai referensi
    setJam(h);
    setMenit(m);
    setDetik(s);
    return *this;
}

Waktu& Waktu::setJam(int h){
    if(h >= 0 && h < 24)
        jam = h;
    else
        throw invalid_argument("Jam harus dalam rentang 0-23");
    return *this;
}

Waktu& Waktu::setMenit(int m){
    if(m >= 0 && m < 60)
        menit = m;
    else
        throw invalid_argument("Menit harus dalam rentang 0-23");
    return *this;
}

Waktu& Waktu::setDetik(int s){
    if(s >= 0 && s < 60)
        detik = s;
    else
        throw invalid_argument("Detik harus dalam rentang 0-23");
    return *this;
}


int Waktu::getJam() const{
    return jam;
}

int Waktu::getMenit() const{
    return menit;
}

int Waktu::getDetik() const{
    return detik;
}

void Waktu::tampilUniversal() const{
    cout << setfill('0') << setw(2) << jam << ":"
    << setw(2) << menit << ":" << setw(2) << detik;
}

void Waktu::tampilStandard() const{
    cout << ((jam ==0 || jam == 12)? 12 : jam  % 12) << ":"
    << setfill('0') << setw(2) << menit << ":" << setw(2) << detik
    << (jam < 12 ? " AM" : " PM");
}