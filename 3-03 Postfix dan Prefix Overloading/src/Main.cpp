#include "Tanggal.hpp"
#include "Tanggal.cpp" // include if using codeRunner

int main(int argc, char const *argv[])
{
    Tanggal d1(12 , 27 , 2010);
    Tanggal d2; //default tanggal

    cout << "d1 adalah " << d1 << endl;
    cout << "d2 adalah " << d2 << endl;
    cout << "\nd1 += 7 adalah " << (d1 += 7);

    d2.setTanggal(2 , 28 , 2008);
    cout << "\n\nd2 adalah " << d2 << endl;
    cout << "\n++d2 adalah " << ++d2 << " (tahun leap mengizinkan hari ke-29)";

    Tanggal d3(7 , 13 , 2010);

    cout << "\n\nMenguji operator inkremen prefix:" << endl;
    cout << "d3 adalah " << d3 << endl;
    cout << "++3 adalah " << ++d3 << endl;
    cout << "d3 adalah " << d3;

    cout << "\n\nMenguji operator inkremen postfix: " << endl;
    cout << "d3 adalah " << d3 << endl;
    cout << "d3++ adalah " << d3++ << endl;
    cout << "d3 adalah " << d3;
    
    return 0;
}
