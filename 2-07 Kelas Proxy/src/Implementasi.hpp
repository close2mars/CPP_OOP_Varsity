//Definisi klas Implementasi
#ifndef _IMPLEMENTASI
#define _IMPLEMENTASI

#include <iostream>
using namespace std;

class Implementasi{
    private:
        int nilai;

    public:
        Implementasi(int v):nilai(v){
        cout << "konstruktor implemetasi dibuat: " << &*this << endl;
        }

        void setNilai(int v){
            nilai = v;
        }

        int getNilai() const{
            return nilai;
        }
};

#endif