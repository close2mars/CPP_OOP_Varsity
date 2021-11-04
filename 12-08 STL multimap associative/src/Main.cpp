#include <iostream>
#include <map>

typedef std::multimap<int, double, std::less<int> > Mmid;

int main(int argc, char const *argv[])
{
    Mmid sepasang;
    std::cout << "Sekarang terdapat " << sepasang.count(15)
    << " buah pasangan dengan kunci 15 di dalam miltimap\n";

    //insert elements
    sepasang.insert(Mmid::value_type(15,2.7));
    sepasang.insert(Mmid::value_type(15,99.3));

    std::cout << "Setelah insert, terdapat " << sepasang.count(15)
    << " buah pasangan dengan kunci 15\n\n";

    //insert another elements
    sepasang.insert(Mmid::value_type(30, 111.11));
    sepasang.insert(Mmid::value_type(10, 22.22));
    sepasang.insert(Mmid::value_type(25, 33.333));
    sepasang.insert(Mmid::value_type(20, 9.345));
    sepasang.insert(Mmid::value_type(5, 77.54));

    std::cout << "Multimap sepasang memuat:\nKunci\tNilai\n";
    
    for (Mmid::const_iterator iter = sepasang.begin(); iter != sepasang.end(); iter++)
    std::cout << iter->first << '\t' << iter->second << '\n';
    std::cout << std::endl;    
    
    return 0;
    }
