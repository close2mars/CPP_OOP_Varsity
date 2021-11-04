#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>


bool lebihDari9(int);

int main(int argc, char const *argv[])
{
    const int UKURAN = 10;
    int a[UKURAN] = {10, 2, 10, 4, 16, 6, 14, 8, 12, 10};
    std::ostream_iterator<int> output(std::cout, " ");
    std::vector<int> v(a, a + UKURAN);
    std::vector<int>::iterator newElemenTerakhir;

    std::cout << "Vektor v sebelum dihapus semua 10:\n";
    std::copy(v.begin(), v.end(), output);

    //remove element by value
    newElemenTerakhir = remove(v.begin(), v.end(), 10);
    std::cout << "\nVektor v setelah dihapus semua 10:\n";
    std::copy(v.begin(), newElemenTerakhir, output);

    //// another way to remove element by value
    // v.erase(std::remove(v.begin(), v.end(), 12), v.end());
    // std::cout << "\nSetelah Erase:\n";
    // std::copy(v.begin(), v.end(), output);

    std::vector<int> v2(a, a + UKURAN);
    std::vector<int> c(UKURAN, 0);
    std::cout << "\n\nVektor v2 sebelum dihapus dan disalin semua 10:\n";
    std::copy(v2.begin(), v2.end(), output);

    //copy v2 to c, remove all value 10
    std::remove_copy(v2.begin(), v2.end(), c.begin(), 10);
    std::cout << "\nVektor c sebelum dihapus dan disalin semua 10:\n";
    std::copy(c.begin(), c.end(), output);

    std::vector<int> v3(a, a + UKURAN);
    std::cout << "\n\nVektor v3 sebelum dihapus semua elemen yang lebih dari 9:\n";
    std::copy(v3.begin(), v3.end(), output);

    std::vector<int> v4(a, a + UKURAN);
    std::vector<int> c2(UKURAN, 0);
    std::cout << "\n\nVektor v4 sebelum dihapus semua elemen yang lebih dari 9:\n";
    std::copy(v4.begin(), v4.end(), output);

    std::remove_copy_if(v4.begin(), v4.end(), c2.begin(), lebihDari9);
    std::cout << "\nVektor c2 setelah dihapus semua elemen yang lebih dari 9 dari v4:\n";
    std::copy(c2.begin(), c2.end(), output);

    return 0;
}



bool lebihDari9(int x) {
    return x > 9;
}