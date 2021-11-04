#include <iostream>
#include <algorithm>
#include <iterator>

int main(int argc, char const *argv[])
{
    const int UKURAN = 10;
    int a[UKURAN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::ostream_iterator<int> keluaran(std::cout, " ");

    std::cout << "Array a memuat:\n";
    std::copy(a, a + UKURAN, keluaran);

    std::swap(a[0], a[1]);

    std::cout << "\nArray a setelah menukar a[0] dengan a[1] menggunakan swap:\n";
    std::copy(a, a + UKURAN, keluaran);
    
    //iterator swap
    std::iter_swap(&a[0], &a[1]);
    std::cout << "\nArray a setelah menukar a[0] dengan a[1] menggunakan iter_swap:\n";
    std::copy(a, a + UKURAN, keluaran);
    
    //swap first five elements
    std::swap_ranges(a, a + 5, a + 5);
    std::cout << "\nArray a setelah menukar lima elemen pertama:\n";
    std::copy(a, a + UKURAN, keluaran);

    return 0;
}

