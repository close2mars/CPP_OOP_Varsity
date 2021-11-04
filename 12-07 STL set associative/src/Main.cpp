#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

typedef std::set<double, std::less<double>> DoubleSet;


int main(int argc, char const *argv[])
{
    double a[] = {2.1, 4.2, 9.5, 2.1, 3.7};
    const int UKURAN = sizeof(a)/sizeof(a[0]);

    DoubleSet doubleSet(a, a + UKURAN);
    std::ostream_iterator<double>output(std::cout, " ");

    std::cout << "doubleSet memuat: ";
    copy(doubleSet.begin(), doubleSet.end(), output);

    std::pair<DoubleSet::const_iterator, bool> p;

    p = doubleSet.insert(13.8);
    std::cout << "\n\n" << *p.first << (p.second ? " telah" : " tidak") << " disisipkan";
    std::cout << "\ndoubleSet memuat: ";
    copy(doubleSet.begin(), doubleSet.end(), output);

    p = doubleSet.insert(9.5); //anlready in
    std::cout << "\n\n" << *p.first << (p.second ? " telah" : " tidak") << " disisipkan";
    std::cout << "\ndoubleSet memuat: ";
    copy(doubleSet.begin(), doubleSet.end(), output);
    std::cout << std::endl;

    
    return 0;
}



