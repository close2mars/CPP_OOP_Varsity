#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

int main(int argc, char const *argv[])
{
    const int UKURAN = 10;
    int a1[UKURAN] = {1, 3, 5, 7, 9, 1, 3, 5, 7, 9};
    std::vector<int> v1(a1, a1 + UKURAN);

    std::ostream_iterator<int> output(std::cout, " ");

    std::cout << "Vektor v1 memuat: ";
    std::copy(v1.begin(), v1.end(), output);

    std::inplace_merge(v1.begin(), v1.begin() + 5, v1.end());
    std::cout << "\nSetelah inplace_merge v1 memuat: ";
    std::copy(v1.begin(), v1.end(), output);

    std::vector<int> hasil1;

    std::unique_copy(v1.begin(), v1.end(), std::back_inserter(hasil1)); //back_inserter lets us not alloacte vector size
    std::cout <<"\nSetelah unique_copy hasil1 memuat: ";
    std::copy(hasil1.begin(), hasil1.end(), output);

    std::vector<int> hasil2;
    std::reverse_copy(v1.begin(), v1.end(), std::back_inserter(hasil2));  //back_inserter lets us not alloacte vector size
    std::cout <<"\nSetelah reverse_copy hasil2 memuat: ";
    std::copy(hasil2.begin(), hasil2.end(), output);\
    std::cout << std::endl;

}
