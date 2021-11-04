#ifndef _TANGGAL
#define _TANGGAL

class Tanggal{
    private:
        int hari, bulan, tahun;
        int periksaHari(int) const;

    public:
        Tanggal(int = 1 , int = 1 , int = 1900);
        void showDate() const;
        ~Tanggal();
};

#endif
