#include "NomorTelepon.hpp"
#include <iomanip>
using namespace std;

ostream& operator << (ostream& keluaran, const NomorTelepon& nomor){
    keluaran << "(" << nomor.kodeArea << ") " << nomor.antarKode << "-" << nomor.jalur;
    return keluaran;
}

istream& operator >> (istream& masukan, NomorTelepon& nomor){
    masukan.ignore(); //skip (
    masukan >> setw(3) >> nomor.kodeArea;
    masukan.ignore(2); // skip ) and space
    masukan >> setw(3) >> nomor.antarKode;
    masukan.ignore(); // skip dash(-)
    masukan >> setw(4) >> nomor.jalur;
    return masukan;
}