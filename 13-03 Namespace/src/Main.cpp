#include <iostream>

using namespace std;

int integer1 = 98; //global variable

namespace Contoh {
    const double PI = 3.14159;
    const double E = 271828;
    int integer1 = 8;

    void tampilNilai();

    //nested namespace
    namespace Dalam {
        enum Tahun {FISKAL1 = 1990, FISKAL2, FISKAL3};
    }
}

namespace {
    double doubleTakBernama = 88.22;
}

int main(int argc, char const *argv[])
{
    
    std::cout << "doubleTakBernama = " << doubleTakBernama;

    cout << "\n(global) integer1 = " << integer1;
    cout << "\nPI = " << Contoh::PI << "\nE = " << Contoh::E
    << "\ninteger1 = " << Contoh::integer1 << "\nFISKAL3 = " 
    << Contoh::Dalam::FISKAL3 << endl;

    Contoh::tampilNilai();

    return 0;
}


void Contoh::tampilNilai() {
    cout << "\nDalam tampilNilai:\ninteger1 = " << integer1 << "\nPI = "
    << PI << "\nE = " << E << "\ndoubleTakBernama = "
    << doubleTakBernama << "\n(global) integer1 = " << ::integer1
    << "\nFISKAL3 = " << Dalam::FISKAL3 << endl;
}