#include <iostream>
#include <vector>
#include <iterator>
#include <stdexcept>
using namespace std;

int main(int argc, char const *argv[])
{
    const int UKURAN = 6;
    int array[UKURAN] = {1, 2, 3, 4, 5, 6};
    vector<int>integers(array, array+UKURAN);
    ostream_iterator<int>output(cout, " ");

    cout << "Vektor integers memuat: ";
    copy(integers.begin(),integers.end(), output);
    
    cout << "\nElemen pertama vektor integers: " << integers.front();
    cout << "\nElemen terakhir vektor integers: " << integers.back();

    integers[0] = 7;
    integers.at(2) = 10;

    integers.insert(integers.begin() + 1 , 22);
    
    cout << "\n\nIsi vektor integers setelah perubahan: ";
    copy(integers.begin(), integers.end(), output);


    try
    {
        integers.at(100) = 777;
    }
    catch(out_of_range &e)
    {
        std::cerr <<"\n\nEksespsi: " << e.what() << '\n';
    }

    integers.erase(integers.begin());
    cout << "\nVektor integers setelah penghapusan elemen pertama: ";
    copy(integers.begin(), integers.end(), output);

    integers.erase(integers.begin(), integers.end());
    cout << "\nSetelah menghapus semua elemen vektor integers "
    << (integers.empty() ? "menjadi" : "menjadi tidak") << " kosong" << endl;
    
    integers.insert(integers.begin(), array, array + UKURAN);
    cout << "\nIsi vektor integers sebelum penghapusan: ";
    copy(integers.begin(), integers.end(), output);

    integers.clear();
    cout << "\nSetelah penghapusan vektor integers "
    << (integers.empty() ? "menjadi" : "menjadi tidak") << " kosong" << endl;

    return 0;
}

