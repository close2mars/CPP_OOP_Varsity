#include <iostream>

using namespace std;

class Hitung{
    private:
    int x;

    public:
    int setX(int nilai){
        x = nilai;
        return 0;
    }

    void tampil(){
        cout << x << endl;
    }

};


int main(int argc, char const *argv[])
{
    Hitung kounter;
    Hitung& kounterRef = kounter;
    Hitung* kounterPtr = &kounter;

    cout << "Menetapkan x menjadi 1 dan menampilkannya menggunakan nama objek: ";
    kounter.setX(1);
    kounter.tampil();

    cout << "Menetapkan x menjadi 1 dan menampilkannya menggunakan nama objek: ";
    kounterRef.setX(2);
    kounterRef.tampil();

    cout << "Menetapkan x menjadi 1 dan menampilkannya menggunakan nama objek: ";
    kounterPtr->setX(3);
    kounterPtr->tampil();

    return 0;

}



