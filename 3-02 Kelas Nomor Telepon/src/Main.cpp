#include "NomorTelepon.hpp"
#include "NomorTelepon.cpp"

int main(int argc, char const *argv[])
{
    NomorTelepon telepon;
    
    cout << "Masukan nomor telepon dalam format (123) 345-7890:"<< endl;
    cin >> telepon;
    //operator >> (cin, telepon); // cara pemanggilan alternatif
    cout << "Nomor telepon yang dimasukan adalah: ";

    cout << telepon << endl;
    //operator << (cout, telepon); // cara pemanggilan alternatif

    return 0;
}

