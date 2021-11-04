#include <iostream>
#include <vector>
using namespace std;

template <typename T> 
void tampilVektor(const vector<T>&integers2);

int main(int argc, char const *argv[])
{
    const int UKURAN = 6;
    int array[UKURAN] = {1,2,3,4,5,6};
    vector<int>integers;

    cout << "Ukuran awal vektor adalah: " << integers.size() << endl;
    cout << "Kapasitas awal vektor adalah: " << integers.capacity() << endl;

    integers.push_back(2);
    integers.push_back(3);
    integers.push_back(4);
    
    cout << "Ukuran vektor adalah: " << integers.size() << endl;
    cout << "Kapasitas vektor adalah: " << integers.capacity() << endl;

    
    cout << "\nMenampilkan array menggunakan notasi pointer: ";
    for(int* ptr = array; ptr != array + UKURAN; ++ptr) {
        cout << *ptr << ' '; 
    }

    cout << "\nMenampilkan vektor menggunakan rotasi iterator: ";
    tampilVektor(integers);

    cout << "\nIsi vektor terbalik adalah: ";

    vector<int>::const_reverse_iterator reverseIterator;
    vector<int>::const_reverse_iterator tempIterator = integers.rend();
    
    for (reverseIterator = integers.rbegin(); reverseIterator != tempIterator; ++reverseIterator) {
        cout << *reverseIterator << ' ';
    }

    cout << endl;

    return 0;
}



template<typename T>
void tampilVektor(const vector<T>&integers2) 
{
    typename vector <T>::const_iterator constIterator;

    for (constIterator = integers2.begin(); constIterator != integers2.end(); ++constIterator) {
        cout << *constIterator << ' ';
    }

}
