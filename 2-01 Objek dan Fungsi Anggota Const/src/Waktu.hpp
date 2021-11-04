#ifndef _WAKTU
#define _WAKTU

#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;


class Waktu{
private:
    int jam;
    int menit;
    int detik;
public:
    Waktu(int = 0 , int = 0 , int = 0);
    //setter
    void setWaktu(int, int, int);
    void setJam(int);
    void setMenit(int);
    void setDetik(int);

    //getter
    int getJam() const;
    int getMenit() const;
    int getDetik() const;

    void tampilUniversal() const;
    void tampilStandard();
};

#endif

