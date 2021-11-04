#ifndef TANGGAL
#define TANGGAL

class Tanggal{
    public:
        Tanggal(int m=1 , int d=1 , int y=1900);
        void tampil();

    private:
        int bulan;
        int hari;
        int tahun;
};

#endif