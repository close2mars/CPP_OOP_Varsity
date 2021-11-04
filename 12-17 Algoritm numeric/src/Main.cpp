#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <iterator>

bool lebihdari9(int);
void tampilKuadrat(int);
int hitungKubik(int);

int main(int argc, char const *argv[])
{
    const int UKURAN = 10;
    int a1[UKURAN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int>v(a1, a1 + UKURAN);
    std::ostream_iterator<int> output(std::cout, " ");

    std::cout << "Vector v sebelum random_shuffle: ";
    std::copy(v.begin(), v.end(), output);

    std::random_shuffle(v.begin(), v.end());
    std::cout <<"\nVector v setelah random_shuffle: ";
    std::copy(v.begin(), v.end(), output);

    int a2[UKURAN]  = {100, 2, 8, 1, 50, 3, 8, 8, 9, 10};
    std::vector<int> v2(a2, a2 + UKURAN);
    std::cout << "\n\nVektor v2 memuat: ";
    std::copy(v2.begin(), v2.end(), output);

    //counts number 8
    int hasil = std::count(v2.begin(), v2.end(), 8);
    std::cout << "\nJumlah elemen yang cocok dengan 8: " << hasil;

    //counts elemennts > 9
    hasil = std::count_if(v2.begin(), v2.end(), [](int i) -> bool {return i > 9;}); //using lambda expression 
    std::cout << "\nJumlah elemen yang lebih dari 9: " << hasil;

    //searchs the minimum elemen in v2
    std::cout << "\n\nElemen minumum di dalam vektor v2 adalah: "
    << *std::min_element(v2.begin(), v2.end());

    //searchs the maximum elemen in v2
    std::cout << "\nElemen maksimum di dalam vektor v2 adalah: "
    << *std::max_element(v2.begin(), v2.end());
    
    //sum total elemen
    std::cout << "\n\nTotal elemen di dalam vektor v adalah: "
    << std::accumulate(v.begin(), v.end(),0);


    //shows each element a quadrate in v
    std::cout << "\n\nKuadrat atas setiap integer di dalam vektor v adalah:\n";
    std::for_each(v.begin(), v.end(), [](int i) -> void { std::cout << i*i << " "; }); //lambda expression

    std::vector<int> kubik(UKURAN);
    std::transform(v.begin(), v.end(), kubik.begin(), [](int i) -> int {return i*i*i;}); //lambda expression
    std::cout << "\n\nKubik atas setiap integer di dalam vektor v adalah:\n";
    std::copy(kubik.begin(), kubik.end(), output);
    
    return 0;

}
