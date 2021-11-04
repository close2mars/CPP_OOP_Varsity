#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

char nextHuruf();

int tambah();
int angka;

int main(int argc, char const *argv[])
{
    std::vector<char> karakter(10);
    std::ostream_iterator<char> output(std::cout, " ");
    
    std::fill(karakter.begin(), karakter.end(), '5'); // isi karakter 5
    std::cout << "\nVektor karakter setelah diisi dengan 5:\n";
    std::copy(karakter.begin(), karakter.end(), output);

    //fill elements with 'A'
    std::fill_n(karakter.begin(), 5, 'A');
    std::cout << "\nVektor karakter setelah diisi lima elemen pertama dengan A:\n";
    std::copy(karakter.begin(), karakter.end(), output);

    //generate any values for every element with nextHuruf
    std::generate(karakter.begin(), karakter.end(), nextHuruf);
    std::cout << "\nVektor karakter setelah pembangkitan huruf A-J:\n";
    std::copy(karakter.begin(), karakter.end(), output);

    //generate fisrt five elements with nextHuruf
    std::generate_n(karakter.begin(), 5, nextHuruf);
    std::cout << "\nVektor karakter setelah pembangkitan K-O:\n";
    std::copy(karakter.begin(), karakter.end(), output);

    return 0; 
}


char nextHuruf() 
{
    static char huruf = 'A';
    return huruf++;
}
