#include "Inkremen.hpp"

Inkremen::Inkremen(int c, int i):hitung(c),inkremen(i){ // single colon (:) is used to initialisation
//member konstan dapat diinisialisasi menggunakan operator titik dua (:)
}

void Inkremen::tampil() const{
    cout << "hitung = " << hitung << ", inkremen = " <<
    inkremen << endl;
}