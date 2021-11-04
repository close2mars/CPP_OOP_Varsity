#ifndef _KARYAWAN
#define _KARYAWAN

#include <string>
#include "Tanggal.hpp"
using namespace std;

class Karyawan{
    private:
        string namaPertama;
        string namaAkhir;
        const Tanggal tanggalLahir;
        const Tanggal tanggalKerja;
    
    public:
        Karyawan(const string&, const string&, const Tanggal&, const Tanggal&);
        void tampil() const;
        ~Karyawan();
};


#endif