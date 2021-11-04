#ifndef _KARYAWAN
#define _KARYAWAN

#include <string>
using namespace std;

class Karyawan{
    public:
        Karyawan(const string&, const string&);
        ~Karyawan();
        string getNamaPertama() const;
        string getNamaAkhir() const;

        //static member function
        static int getHitung();
    
    private:
        string namaPertama;
        string namaAkhir;

        //staric data member
        static int hitung;
};

#endif