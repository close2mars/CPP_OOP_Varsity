#include <iostream>

class UjiMutable {
    public:
        UjiMutable(int v=0){
            nilai = v;
        }
        
        int getNilai() const{
            return nilai++;
        }
    private:
        mutable int nilai;

};


int main(int argc, char const *argv[])
{
    const UjiMutable uji(99);
    std::cout << "Nilai awal: " << uji.getNilai();
    std::cout << "\nNilai termodifikasi: " << uji.getNilai();
    return 0;
}
