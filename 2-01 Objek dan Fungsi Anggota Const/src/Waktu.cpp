#include "Waktu.hpp"

Waktu::Waktu(int jam, int menit, int detik){
    setWaktu(jam, menit, detik);
}

void Waktu::setWaktu(int jam, int menit, int detik){
    setJam(jam);
    setMenit(menit);
    setDetik(detik);
}

void Waktu::setJam(int h){
    if (h >= 0 && h < 24)
        jam = h;
    else
        throw invalid_argument ("jam harus dalam rentang 0 - 23");
}

void Waktu::setMenit(int m){
    if (m >=0 && m < 60)
        menit = m;
    else
        throw invalid_argument ("menit harus dalam rentang 0 - 60");
}

void Waktu::setDetik(int s){
    if (s >=0 && s < 60)
        detik = s;
    else
        throw invalid_argument ("detik harus dalam rentang 0 - 60");
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

void Waktu::tampilStandard(){
    cout << ((jam ==0 || jam == 12)? 12 : jam  % 12) << ":"
    << setfill('0') << setw(2) << menit << ":" << setw(2) << detik
    << (jam < 12 ? " AM" : " PM");
}
