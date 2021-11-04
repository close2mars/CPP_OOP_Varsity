#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

int main(int argc, char const *argv[])
{
    const int UKURAN = 10;
    int a1[UKURAN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a2[UKURAN] = {1, 2, 3, 4, 1000, 6, 7, 8, 9, 10};
    std::vector<int> v1(a1, a1+UKURAN);
    std::vector<int> v2(a1, a1+UKURAN);
    std::vector<int> v3(a2, a2+UKURAN);
    std::ostream_iterator<int> output(std::cout, " ");

    std::cout << "Vektor v1 memuat: ";
    std::copy(v1.begin(), v1.end(), output);
    std::cout << "\nVektor v2 memuat: ";
    std::copy(v2.begin(), v2.end(), output);
    std::cout << "\nVektor v3 memuat: ";
    std::copy(v3.begin(), v3.end(), output);

    //compare v1 vs v2
    bool hasil = std::equal(v1.begin(), v1.end(), v2.begin());
    std::cout << "\nVektor v1 " << (hasil ? "sama" : "tidak sama") << " dengan vektor v2.\n";

    //compare v1 vs v3
    hasil = std::equal(v1.begin(), v1.end(), v3.begin());
    std::cout << "Vektor v1 " << (hasil ? "sama" : "tidak sama") << " dengan vektor v3.\n";

    std::pair<std::vector<int>::iterator, std::vector<int>::iterator> lokasi;
    
    lokasi = std::mismatch(v1.begin(), v1.end(), v3.begin());
    std::cout << "\nTerdapat ketidakcocokan antara v1 dan v3 pada lokasi "
    << (lokasi.first - v1.begin()) << "\ndimana v1 memuat "
    << *lokasi.first << " dan v3 memuat " << *lokasi.second << "\n\n";

    //std::cout << std::distance(v1.begin(), lokasi.first); // alternative way to get iterator position

    char c1[UKURAN] = "SELAMAT";
    char c2[UKURAN] = "JALAN"; 
    hasil = std::lexicographical_compare(c1, c1+UKURAN, c2, c2+UKURAN);
    std::cout << c1 << (hasil ? " kurang dari " : " lebih dari atau sama dengan ") << c2 << std::endl;



}
