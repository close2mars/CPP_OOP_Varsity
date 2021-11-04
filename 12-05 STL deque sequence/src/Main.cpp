#include <iostream>
#include <deque>
#include <iterator>
//#include <list>

//new code using fira code font, its actually fantastic!

int main(int argc, char const *argv[])
{
    std::deque<double>nilai2;
    std::ostream_iterator<double>output(std::cout, " ");

    nilai2.push_front(2.2);
    nilai2.push_front(3.5);
    nilai2.push_back(3.5);

    std::cout << "nilai2 memuat: ";

    for (size_t i = 0; i < nilai2.size(); i++)
        std::cout << nilai2[i] << ' ';

    nilai2.pop_front();
    std::cout << "\nSetelah pop_front, nilai2 memuat: ";
    std::copy(nilai2.begin(), nilai2.end(), output);

    //nilai2[1] = 5.4;
    std::cout << "\nSetelah nilai2[1] = 5.4, nilai2 memuat: ";
    copy(nilai2.begin(), nilai2.end(), output);


    return 0;
}
