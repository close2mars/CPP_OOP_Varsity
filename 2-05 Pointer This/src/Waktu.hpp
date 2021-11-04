#ifndef _WAKTU
#define _WAKTU
#include <iostream>

class Waktu{
    private:
        int jam, menit, detik;
    
    public:
        Waktu(int = 0, int = 0, int = 0);

        //setter
        Waktu& setWaktu( int, int, int);
        Waktu& setJam(int);
        Waktu& setMenit(int);
        Waktu& setDetik(int);

        //getter
        int getJam() const;
        int getMenit() const;
        int getDetik() const;

        void tampilUniversal() const;
        void tampilStandard() const;

        // ~Waktu(){
        // std::cout << "\n[Objek dihapus]"<< std::endl;}
};

#endif