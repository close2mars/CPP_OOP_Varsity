#include <iostream>
#include "Tanggal.hpp"
#include "Tanggal.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Tanggal tanggal1(7, 4, 2004);
    Tanggal tanggal2;

    cout << "tanggall = "; tanggal1.tampil();
    cout << "\ntanggal2 = "; tanggal2.tampil();

    tanggal2=tanggal1; //penugasan anggota default

    cout << "\nSetelah penugasan keanggotaan default, tanggal2 = ";
    tanggal2.tampil();
    cout << endl;

    return 0;
}