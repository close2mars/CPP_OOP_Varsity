#ifndef _INKREMEN
#define _INKREMEN

#include <iostream>
using namespace std;

class Inkremen{
    private:
        int hitung;
        const int inkremen;
    public:
        Inkremen(int c = 0, int i = 1);
        
        void tambahInkremen(){
            hitung += inkremen;
        }
        void tampil() const;
};

#endif