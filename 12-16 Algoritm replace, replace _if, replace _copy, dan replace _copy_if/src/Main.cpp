#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

//prototype
bool lebihDari9(int);

int main(int argc, char const *argv[])
{
    const int SIZE = 10;
    int a[SIZE] =  {10, 2, 10, 4, 16, 6, 14, 8, 12, 10};
    std::ostream_iterator<int> output(std::cout, " ");

    std::vector<int> v1(a, a + SIZE);
    std::cout << "Vektor v1 sebelum diganti semua 10:\n";
    std::copy(v1.begin(), v1.end(), output);

    std::replace(v1.begin(), v1.end(), 10, 100);
    std::cout << "\nVektor v1 setelah diganti semua 10 dengan 100:\n";
    std::copy(v1.begin(), v1.end(), output);

    std::vector<int> v2(a, a + SIZE);
    std::vector<int> c1(SIZE);
    std::cout << "\n\nVektor v2 sebelum diganti dan disalin semua 10:\n ";
    std::copy(v2.begin(), v2.end(), output);

    std::replace_copy(v2.begin(), v2.end(), c1.begin(), 10, 100);
    std::cout << "\n\nVektor c1 setelah diganti semua 10 di dalam v2:\n ";
    std::copy(c1.begin(), c1.end(), output);
    
    std::vector<int> v3(a, a + SIZE);
    std::cout << "\n\nVektor v3 sebelum diganti yang lebih dari 9:\n ";
    std::copy(v3.begin(), v3.end(), output);

    std::replace_if(v3.begin(), v3.end(), lebihDari9, 100);
    std::cout << "\nVektor v3 setelah diganti semua elemen yang lebih dari 9 dengan 100:\n";
    std::copy(v3.begin(), v3.end(), output);

    std::vector<int> v4(a, a + SIZE);
    std::vector<int> c2(SIZE);
    std::cout << "\n\nVektor v4 sebelum diganti dan disalin elemen yang lebih dari 9:\n ";
    std::copy(v4.begin(), v4.end(), output);

    std::replace_copy_if(v4.begin(), v4.end(), c2.begin(), lebihDari9, 100);
    std::cout << "\nVektor c2 setelah diganti semua elmen yang lebih dari 9 di dalam v4:\n ";
    std::copy(c2.begin(), c2.end(), output);

    return 0;
}


bool lebihDari9(int x) 
{
    return x > 9;
}
