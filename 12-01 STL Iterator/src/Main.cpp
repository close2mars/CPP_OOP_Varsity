#include <iostream>
#include <iterator>
using namespace std;


int main(int argc, char const *argv[])
{
    cout << "Masukkan dua integer: ";
    istream_iterator<int>inputInt(cin);

    int angka1 = *inputInt;
    inputInt++;
    int angka2 = *inputInt;
    
    ostream_iterator<int>outputInt(cout);

    cout << "Penjumlahan atas kedua integer adalah: ";
    *outputInt = angka1 + angka2;

    cout << endl;

    return 0;
}
