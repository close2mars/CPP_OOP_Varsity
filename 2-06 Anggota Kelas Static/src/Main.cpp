#include <iostream>
#include "Karyawan.hpp"
#include "Karyawan.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Jumlah Karyawan sebelum instalasi sembarang objek adalah "
    << Karyawan::getHitung() << endl << endl;

    {
    Karyawan karyawan1("OTONG" , "LAUTHNER");
    Karyawan karyawan2("UCUP" , "SWIFT");

    cout << "\nJumlah karyawan setelah beberapa objek diinstansiasi adalah: "
    << Karyawan::getHitung() << endl;

    cout << "\nKaryawan 1: " << karyawan1.getNamaPertama() << " " << karyawan1.getNamaAkhir() << endl;
    cout << "Karyawan 2: " << karyawan2.getNamaPertama() << " " << karyawan2.getNamaAkhir() << endl << endl;
    }

    cout << "\nJumlah karyawan setelah objek dihapus adalah: " << Karyawan::getHitung();
    return 0;
}
