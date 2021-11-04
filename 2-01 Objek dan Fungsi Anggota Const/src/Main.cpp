#include "Waktu.hpp"
#include "Waktu.cpp"

int main(int argc, char const *argv[])
{
    Waktu bangunTidur(6, 45, 34); // object non-const
    const Waktu sore(14,37, 23); // object const

    bangunTidur.setJam(9); // non-const non-const
    //sore.setJam(12); // const non-const tidak bisa dilakukan

    //non-const cont bisa dilakukan
    cout << "Bangun pukul: " << bangunTidur.getJam() << endl;

    //const conat bisa dilakukan
    cout << "Menit sore: " << sore.getMenit() << endl;

    sore.tampilUniversal();  //const const
    cout << endl;
    bangunTidur.tampilStandard();
    //sore.tampilStandard(); // const non-const tidak bisa dilakukan

    return 0;
}
