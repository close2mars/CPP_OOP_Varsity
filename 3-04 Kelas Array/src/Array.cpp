#include "Array.hpp"
#include <iomanip>
#include <cstdlib>

//konstruktor default size = 10
Array::Array(int ukuranArray){
    if (ukuranArray > 0)
        ukuran = ukuranArray;
    else
        throw invalid_argument ("Ukuran Array harus lebih dari 0");
    
    ptr = new int[ukuran];
    
    for (int i = 0 ; i < ukuran ; ++i)
        ptr[i] = 0;
}

//konstruktor penyalin
Array::Array(const Array& arrayDisalin):ukuran(arrayDisalin.ukuran){
    ptr = new int[ukuran];

    for (int i = 0 ; i < ukuran; ++i)
        ptr[i] = arrayDisalin.ptr[i];
}

Array::~Array(){
    delete [] ptr;
}

int Array::getUkuran() const{
    return ukuran;
}

//operator teroverload
//menghindari: (a1=a2)=a3
const Array& Array::operator= (const Array& kanan){
    if (&kanan != this){
        if (ukuran != kanan.ukuran){
            delete [] ptr;
            ukuran = kanan.ukuran;
            ptr = new int[ukuran];
        }

        for (int i = 0 ; i < ukuran ; ++i)
            ptr[i] = kanan.ptr[i];    
    }
    return *this;
}

bool Array::operator== (const Array& kanan) const{
    if (ukuran != kanan.ukuran)
        return false;
    
    for (int i = 0 ; i < ukuran ; ++i)
        if (ptr[i] != kanan.ptr[i])
            return false;
    
    return true;
}

//digunakan untuk cin (m=menghasilkan lvalue)
int& Array::operator[] (int subskript){
    if (subskript < 0 || subskript >= ukuran)
        throw out_of_range ("Subskript diluar rentang");
    
    return ptr[subskript];
}


//digunakan untuk cout (menghasilkan rvalue)
int Array::operator[](int subskript) const{
    if (subskript < 0 || subskript >= ukuran)
        throw out_of_range ("Subskript diluar rentang");
    
    return ptr[subskript];
}

istream& operator>> (istream& masukan, Array& a){
    for (int i = 0 ; i < a.ukuran ; ++i)
    masukan >> a.ptr[i];
    return masukan;
}

ostream& operator<< (ostream& keluaran, const Array& a){
    int i;
    for (i = 0 ; i < a.ukuran ; ++i){
        keluaran << setw(12) << a.ptr[i];

        if ((i+1) % 4 == 0) //4 angka per line
            keluaran << endl;
    }
    
    if (i % 4 != 0)
        keluaran << endl;
    
    return keluaran;
}