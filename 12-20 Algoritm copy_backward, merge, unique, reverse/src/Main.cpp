#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

int main(int argc, char const *argv[])
{
    const int UKURAN = 5;
    int a1[UKURAN] = {1, 3, 5, 7, 9};
    int a2[UKURAN] = {2, 4, 5, 7, 9};
    std::vector<int> v1(a1, a1 + UKURAN);
    std::vector<int> v2(a2, a2 + UKURAN);
    std::ostream_iterator<int> keluaran(std::cout, " ");

    std::cout << "Vektor v1 memuat: ";
    std::copy(v1.begin(), v1.end(), keluaran);
    std::cout << "\nVektor v2 memuat: ";
    std::copy(v2.begin(), v2.end(), keluaran);

    std::vector<int> hasil(v1.size());
    std::copy_backward(v1.begin(), v1.end(), hasil.end());
    std::cout << "\n\nSetelah copy_backward hasil memuat: ";
    std::copy(hasil.begin(), hasil.end(), keluaran);

    std::vector<int> hasil2(v1.size() + v2.size());

    //merge elements of v1 and v2
    std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), hasil2.begin());
    std::cout << "\n\nSetelah merge dari v1 dan v2 hasil2 memuat: ";
    std::copy(hasil2.begin(), hasil2.end(), keluaran);

    std::vector<int>::iterator endLokasi;
    endLokasi = std::unique(hasil2.begin(), hasil2.end());

    std::cout << "\n\nSetelah unique hasil memuat:";
    std::copy(hasil2.begin(), endLokasi, keluaran);

    std::cout << "\nVektor v1 setelah reverse: ";
    std::reverse(v1.begin(), v1.end());
    std::copy(v1.begin(), v1.end(), keluaran);
    std::cout << std::endl;


    return 0;

}
