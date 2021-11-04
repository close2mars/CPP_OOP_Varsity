#include "Inkremen.hpp"
#include "Inkremen.cpp"

int main(int argc, char const *argv[])
{
    Inkremen nilai(10, 5);

    cout << "Sebelum pengeinkremenan: ";
    nilai.tampil();

    for (int j = 1; j <= 3 ; ++j){
        nilai.tambahInkremen();
        cout << "Setelah pengeinkremenan: " << j << ": ";
        nilai.tampil();
    }

    return 0;
}
