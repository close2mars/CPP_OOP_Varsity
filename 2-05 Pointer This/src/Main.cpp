#include <iostream>
#include "Waktu.cpp"
#include "Waktu.hpp"

using namespace std;

Waktu setWaktu( int, int, int);

int main(int argc, char const *argv[])
{
    Waktu t;
    
    t.setJam(18).setMenit(30).setDetik(22);

    cout << "Waktu Universal:  ";
    t.tampilUniversal();

    cout << "\nWaktu Standard:  ";
    t.tampilStandard();

    cout << "\n\nWaktu Standard yang baru: ";
    t.setWaktu(20, 45, 13);t.tampilStandard();
    
    return 0;
}
