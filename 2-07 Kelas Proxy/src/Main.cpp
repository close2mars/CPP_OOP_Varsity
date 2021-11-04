#include <iostream>
#include "Antarmuka.hpp"
#include "Antarmuka.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Antarmuka objek1(5);

    cout << "Antarmuka memuat: " << objek1.getNilai() << " sebelum setNilai" << endl;

    objek1.setNilai(10);

    cout << "Antarmuka memuat: " << objek1.getNilai() << " setelah setNilai" << endl;

    return 0;
}
