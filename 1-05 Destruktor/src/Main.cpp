#include "CiptakanDanHancurkan.h"
#include "CiptakanDanHancurkan.cpp"

void ciptakan(void);

CiptakanDanHancurkan pertama(1, "(global sebelum main)");

int main(int argc, char const *argv[])
{
    cout << "\nFUNGSI MAIN: EKSEKUSI DIMULAI" << endl;

    CiptakanDanHancurkan kedua(2, "(otomatis lokal di dalam main)");
    static CiptakanDanHancurkan ketiga(3, "(lokal static di dalam main)");

    ciptakan();
    cout << "\nFUNGSI MAIN: EKSEKUSI DIMULAI KEMBALI" << endl;
    CiptakanDanHancurkan keempat(4, "(otomatis lokal di dalam main)");
    cout << "\nFUNGSI MAIN: EKSEKUSI BERAKHIR)" << endl;
    return 0;
}


void ciptakan(void){
    cout << "\nFUNGSI CIPTAKAN: EKSEKUSI DIMULAI" << endl;
    CiptakanDanHancurkan kelima(5, "(otomatis lokal di dalam ciptakan)");
    static CiptakanDanHancurkan keenam(6, "(lokal static di dalam ciptakan)");
    CiptakanDanHancurkan ketujuh(7, "(otomatis lokal di dalam ciptakan)");
    cout << "\nFUNGSI CIPTAKAN: EKSEKUSI BERAKHIR" << endl;
}
