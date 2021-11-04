#ifndef PEKERJAPEMASARAN
#define PEKERJAPEMASARAN

#include <iostream>

class PekerjaPemasaran{
    public:
    PekerjaPemasaran(); //konstruktor
    int a=10;
    static const int bulanPerTahun = 12; //nilai tetap ada walaupun objek dihapus
    void getPemasaranDariPengguna();
    void setPemasaran(int, double);
    void tampilPemasaranTahunan();

    private:
    double totalPemasaranTahunan(); // fungsi utilitas
    double pemasaran[12]; // fungsi utilitas
};


#endif