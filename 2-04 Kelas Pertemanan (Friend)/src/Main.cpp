#include <iostream>
using namespace std;


class Hitung{
    friend void setX(Hitung&, int);
    friend class Teman; // improvisasi program

    public:
        Hitung():x(0){
        }
        void tampil() const{
        cout << x << endl;
        }

    private:
        int x;
};


class Teman{
    public:
        void intip(Hitung& c){
            k = c.x;
            cout << k << endl;
        }
    private:
        int k;
};


void setX(Hitung& c, int val){
    c.x = val; // bisa akses ke member private
}


int main(int argc, char const *argv[])
{
    Hitung pernghitung;
    cout << "penghitung.x setelah inisialisasi: ";
    pernghitung.tampil();

    setX(pernghitung, 8); 
    cout << "penghitung.x setelah pemanggilan fungsi friend setX: ";
    pernghitung.tampil();

    //improvisasi program
    cout << endl;
    Teman kepo;
    cout << "objeck Teman::kepo bisa intip nilai Hitung::penghitung: ";
    kepo.intip(pernghitung);

    return 0;
}
