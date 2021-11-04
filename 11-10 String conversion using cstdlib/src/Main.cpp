#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    //atof
    double d = atof("99.0");
    cout << "String \"99.0\" dikonversi ke double menjadi " << d << endl;
    cout << "Nilai terkonversi dibagi 2 adalah " << d/2.0 << endl << endl;

    //atoi
    int i = atoi("2593");
    cout << "String \"2593\" dkonversi ke int menjadi " << i << endl;
    cout << "Nilai terkonversi dikurangi 593 adalah " << i - 593 << endl << endl;

    //atol
    long x = atol("1000000");
    cout << "String \"1000000\" dkonversi ke long menjadi " << x << endl;
    cout << "Nilai terkonversi dibagi 2 adalah " << x/2 << endl << endl;

    //strtod
    double e ;
    const char* string1 = "51.2% mahasiswa adalah perempuan";
    char* strPtr;

    e = strtod(string1, &strPtr);
    cout << "String \"" << string1 << "\" dikonversi ke \nnilai double " << e
    << " dan string \"" << strPtr << "\"" << endl << endl;

    //strtol
    const char* string2 = "-12345671abc";
    char* sisaPtr;

    long y = strtol(string2, &sisaPtr, 0);

    cout << "String awal adalah \"" << string2 
    << "\"\nNilai terkonversi adalah "<< y
    << "\nSisa dari string asli adalah \"" << sisaPtr
    << "\"\nNilai terkonversi ditambah 567 adalah " << (y + 567) << endl << endl;

    //strtoul
    long z = strtoul(string2, &sisaPtr, 0);

    cout << "String awal adalah \"" << string2
    << "\"\nNilai terkonversi adalah "<< z
    << "\nSisa dari string asli adalah \"" << sisaPtr
    << "\"\nNilai terkonversi ditambah 567 adalah " << (z + 567) << endl;



    return 0;
}
