#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

template <typename T>
void tampilList(const std::list<T> &listRef);

int main(int argc, char const *argv[])
{
    const int UKURAN = 4;
    int array[UKURAN] = {2,6,4,8};
    std::list<int> nilai2;
    std::list<int> nilai2Lain;

    nilai2.push_back(1);
    nilai2.push_back(2);
    nilai2.push_back(4);
    nilai2.push_back(3);

    std::cout << "nilai2 memuat: ";
    tampilList(nilai2);

    nilai2.sort();
    std::cout << "\nnilai2 setelah pengurutan memuat: ";
    tampilList(nilai2);

    nilai2Lain.insert(nilai2Lain.begin(), array, array + UKURAN);
    std::cout << "\nSetelah penyisipan, nilai2lain memuat: ";
    tampilList(nilai2Lain);

    nilai2.splice(nilai2.end(), nilai2Lain);
    std::cout << "\nSetelah splice, nilai2 memuat: ";
    tampilList(nilai2);

    nilai2.sort();
    std::cout << "\nnilai2 setelah pengurutan memuat: ";
    tampilList(nilai2);

    nilai2Lain.insert(nilai2Lain.begin(), array, array + UKURAN);
    nilai2Lain.sort();
    std::cout << "\nSetelah penyisipan dan pengurutan, nilai2Lain memuat: ";
    tampilList(nilai2Lain);

    nilai2.merge(nilai2Lain);
    std::cout << "\nSetelah merge:\n nilai2 memuat: ";
    tampilList(nilai2);
    std::cout << "\n nilai2Lain memuat: ";
    tampilList(nilai2Lain);
    nilai2.pop_front();
    nilai2.pop_back();
    std::cout << "\nSetelah pop_front dan pop_back:\nnilai2 memuat: ";
    tampilList(nilai2);

    nilai2.unique();
    std::cout << "\nSetelah unique, nilia2 memuat: ";
    tampilList(nilai2);

    nilai2.swap(nilai2Lain);
    std::cout << "\nSetalah swap:\n nilai2 memuat: ";
    tampilList(nilai2);
    std::cout << "\n nilai2Lain memuat: ";
    tampilList(nilai2Lain);

    nilai2.assign(nilai2Lain.begin(), nilai2Lain.end());
    std::cout << "\nSetelah assign, nilai2 tersebut memuat: ";
    tampilList(nilai2);

    nilai2.merge(nilai2Lain);
    std::cout << "\nSetelah merge ,nilai2 memuat: ";
    tampilList(nilai2);

    nilai2.remove(4);
    std::cout << "\n Setelah remove(4), nilai2 memuat: ";
    tampilList(nilai2);
    
    std::cout << std::endl;

    return 0;
}


template<typename T>
void tampilList(const std::list<T> &listRef) 
{
    if (listRef.empty())
        std::cout << "List Kosong";
    else {
        std::ostream_iterator<T> output(std::cout, " ");
        copy(listRef.begin(), listRef.end(), output);
    }
}
