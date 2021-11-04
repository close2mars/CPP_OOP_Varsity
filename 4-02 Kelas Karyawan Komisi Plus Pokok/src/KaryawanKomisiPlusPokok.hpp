#ifndef __KARYAWANKOMISIPLUSPOKOK_H__
#define __KARYAWANKOMISIPLUSPOKOK_H__

#include <string>
using namespace std;

class KaryawanKomisiPlusPokok{
    public:
        KaryawanKomisiPlusPokok (const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0 );

        void setNamaPertama(const string&);
        string getNamaPertama() const;

        void setNamaAkhir(const string&);
        string getNamaAkhir() const;

        void setNomorKTP(const string&);
        string getNomorKTP() const;

        void setPenjualanKotor(double);
        double getPenjualanKotor() const;
        
        void setBesarKomisi(double);
        double getBesarKomisi() const;

        void setGajiPokok(double);
        double getGajiPokok() const;

        double penghasilan() const;
        void tampil() const;
    
    private:
        string namaPertama;
        string namaAkhir;
        string nomorKTP;
        double penjualanKotor;
        double besarKomisi;
        double gajiPokok;
};
#endif // __KARYAWANKOMISIPLUSPOKOK_H__