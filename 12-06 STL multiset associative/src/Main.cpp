#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
 
//associative container that contains a sorted set of objects of type Key
typedef std::multiset<int, std::less<int>> lms; 


int main(int argc, char const *argv[])
{
    const int SIZE = 10;
    int a[SIZE] = {7, 22, 9, 1, 18, 30, 100, 22, 85, 13};
    lms intMultiset;

    std::ostream_iterator<int>output(std::cout," ");

    std::cout << "Sekarang terdapat " << intMultiset.count(15)
    << " buah nilai 15 di dalam multiset\n";

    intMultiset.insert(15);
    intMultiset.insert(15);

    std::cout << "Setelah insert, terdapat " << intMultiset .count(15)
    << " buah nilai 15 di dalam miltiset\n\n";

    lms::const_iterator hasil;

    hasil = intMultiset.find(15);
    if (hasil != intMultiset.end())
        std::cout << "Ditemukan nilai 15\n";
    
    hasil = intMultiset.find(20);
    if (hasil == intMultiset.end())
        std::cout << "Nilai 20 tidak ditemukan\n";
    
    intMultiset.insert(a, a + SIZE);
    std::cout << "\nSetelah insert, intMultiset memuat:\n";
    std::copy(intMultiset.begin(), intMultiset.end(), output);

    std::cout << "\n\nBatas bawah dari 22: "
    << *(intMultiset.lower_bound(22));
    std::cout << "\nBatas atas dari 22: "
    << *(intMultiset.upper_bound(22));

    std::pair<lms::const_iterator, lms::const_iterator> p;

    p = intMultiset.equal_range(22);

    std::cout << "\n\nequal_range dari 22:" << "\n Batas bawah: " 
    << *p.first << "\n Batas atas: " << *p.second;
    std::cout << std::endl;

    return 0;
}


