#ifndef __TANGGAL_H__
#define __TANGGAL_H__

#include <iostream>
using namespace std;

class Tanggal{
    friend ostream& operator<< (ostream&, const Tanggal&);
    
    public:
        Tanggal (int m = 1 , int d = 1 , int y = 1900);
        void setTanggal (int , int , int);
        Tanggal& operator++(); //prefix
        Tanggal operator++(int); //postfix
        const Tanggal &operator+= (int );
        static bool tahunLeap (int);
        bool akhirBulan (int) const;

    private:
        int bulan;
        int hari;
        int tahun;
        static const int hari2[];
        void tolongInkremen();
};

#endif // __TANGGAL_H__