#include <iostream>
#include "Array.hpp"
#include "Array.cpp"

using namespace std;

int main(int argc, char const *argv[])
{    
    Array integer4(8);
    integer4[6]=1000;

    
    
    
    Array integer1(7);
    Array integer2;

    cout << "Ukuran Array integer1 adaah " << integer1.getUkuran() << endl;
    cout << "Array setelah inisialisasi:\n" << integer1 << endl;

    cout << "Ukuran Array integer2 adaah " << integer2.getUkuran() << endl;
    cout << "Array setelah inisialisasi:\n" << integer2 << endl;

    cout << "Masukkan 17 integer:" << endl;
    cin >> integer1 >> integer2;
    cout << "\nSetalah masukkan, Array memuat:" << endl;
    cout << "integer1:" << endl << integer1 << "integer2:" << endl << integer2;
    
    if (integer1 != integer2)
        cout << "Integer1 dan integer2 tidak sama" << endl;
    
    Array integer3 (integer1);
    cout << "Ukuran Array integer3 adalah " << integer3.getUkuran() << endl;
    cout << "Array setelah inisialisasi: " << endl;
    cout << integer3 << endl;

    cout << "Menugaskan integer2 kepada integer1:" << endl;
    integer1 = integer2;
    cout << "integer1:" << endl << integer1 << endl;
    cout << "integer2:" << endl << integer2 << endl;

    cout << "Mengevaluasi: integer1 == integer2" << endl;
    if (integer1 == integer2)
        cout << "integer1 dan integer2 sama" << endl;
    
    cout << "\ninteger1[5] adalah " << integer1[5] << endl;

    cout << "\nMenugaskan 1000 kepada integer1[5]" << endl;
    integer1[5] = 1000;
    cout << "integer1:\n" << integer1;

    try{
        cout << "\nMencoba untuk menugaskan 1000 kepada integer1[15]" << endl;
        integer1[15] = 1000; //out of range
    }
    catch (out_of_range &ex){
        cout << "Sebuah eksepsi terjadi: " << ex.what() << endl;
    }

    return 0;
}
