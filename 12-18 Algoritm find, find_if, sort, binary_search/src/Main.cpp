#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

int main(int argc, char const *argv[])
{
    const int UKURAN = 10;
    int a[UKURAN] = {10, 2, 17, 5, 16, 8, 13, 11, 20, 7};
    std::vector<int> v(a, a + UKURAN);
    std::ostream_iterator<int> output(std::cout, " ");
    
    std::cout << "Vektor v memuat: ";
    std::copy(v.begin(), v.end(), output);

    //search first location of 16 within the vector
    std::vector<int>::iterator lokasi;
    lokasi = std::find(v.begin(), v.end(), 16);

    if (lokasi != v.end())
        std::cout << "\nDitemukan 16 pada lokasi " << (lokasi - v.begin());
    else
        std::cout << "\n16 tidak ditemukan";
    
    //search first location of 100 within the vector
    lokasi = std::find(v.begin(), v.end(), 100);
    if (lokasi != v.end())
        std::cout << "\nDitemukan 100 pada lokasi " << (lokasi - v.begin());
    else
        std::cout << "\n100 tidak ditemukan";

    //search value more than 10
    lokasi = std::find_if(v.begin(), v.end(), [](int x) -> bool{return x > 10;});
    if (lokasi != v.end())
        std::cout << "\n\nNilai pertama yang lebih dari 10 adalah " << *lokasi 
        << "\nditemukan pada lokasi " << (lokasi - v.begin());
    else
        std::cout << "\n\nTidak ada nilai yang lebih dari 10 ditemukan";

    //sort elements
    std::sort(v.begin(), v.end());
    std::cout << "\n\nVektor v setelah sort: ";
    std::copy(v.begin(), v.end(), output);

    //binary search
    if(std::binary_search(v.begin(), v.end(), 13))
        std::cout << "\n\n13 ditemukan dalam v";
    else
        std::cout << "\n13 tidak ditemukan dalam v";
    
    if(std::binary_search(v.begin(), v.end(), 100))
        std::cout << "\n100 ditemukan dalam v";
    else
        std::cout << "\n100 tidak ditemukan dalam v";

    return 0;
    
}
