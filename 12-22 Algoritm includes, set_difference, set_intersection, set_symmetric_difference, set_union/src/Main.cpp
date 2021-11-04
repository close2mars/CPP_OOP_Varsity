#include <iostream>
#include <algorithm>
#include <iterator>

int main(int argc, char const *argv[])
{
    const int UKURAN1= 10, UKURAN2 = 5, UKURAN3 = 20;
    int a1[UKURAN1] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a2[UKURAN2] = {4, 5, 6, 7, 8,};
    int a3[UKURAN2] = {4, 5, 6, 11, 15};
    std::ostream_iterator<int> output(std::cout, " ");

    std::cout << "a1 memuat: ";
    std::copy(a1, a1 + UKURAN1, output);

    std::cout << "\na2 memuat: ";
    std::copy(a2, a2 + UKURAN2, output);

    std::cout << "\na3 memuat: ";
    std::copy(a3, a3 + UKURAN2, output);

    //determines whether set a2 is fully contained in set a1
    if (std::includes(a1, a1 + UKURAN1, a2, a2 + UKURAN2))
        std::cout << "\n\na1 mencakup a2";
    else  
        std::cout << "\na1 tidak mencakup a2";
    
    if (std::includes(a1, a1 + UKURAN1, a3, a3 + UKURAN2))
        std::cout << "\na1 mencakup a3";
    else  
        std::cout << "\na1 tidak mencakup a3";

    int difference[UKURAN1];

    //determines the elements of a1 not contained in a2
    int* ptr = std::set_difference(a1, a1 + UKURAN1, a2, a2 + UKURAN2, difference);
    std::cout << "\n\nset_difference dati a1 dan a2 adalah: ";
    std::copy(difference, ptr, output);

    int intersection[UKURAN1];
    
    ptr = std::set_intersection(a1, a1 + UKURAN1, a2, a2 + UKURAN2, intersection);

    std::cout << "\n\nset_intersection dari a1 dan a2 adalah: ";
    std::copy(intersection, ptr, output);

    int symmetric_difference[UKURAN1 + UKURAN2];
    ptr = std::set_symmetric_difference(a1, a1 + UKURAN1, a3, a3 + UKURAN2, symmetric_difference);
    std::cout << "\n\nset_symmetric_difference dari a1 dan a3 adalah: ";
    std::copy(symmetric_difference, ptr, output);

    int unionSet[UKURAN3];

    ptr = std::set_union(a1, a1 + UKURAN1, a3, a3 +UKURAN2, unionSet);
    std::cout << "\n\nset_union dari a1 dan a3 adalah: ";
    std::copy(unionSet, ptr, output);

}
