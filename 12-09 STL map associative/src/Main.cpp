#include <iostream>
#include <map>

typedef std::map<int, double, std::less<int> > Mid;

int main(int argc, char const *argv[])
{
    Mid sepasang;

    sepasang.insert(Mid::value_type(15, 2.7));
    sepasang.insert(decltype(sepasang)::value_type(30, 111.11)); //dcltype(xx) means type od xx
    sepasang.insert(Mid::value_type(5, 1010.1));
    sepasang.insert(Mid::value_type(10, 22.22));
    sepasang.insert(Mid::value_type(25, 33.333));
    sepasang.insert(Mid::value_type(5, 77.54));
    sepasang.insert(Mid::value_type(20, 9.345));
    sepasang.insert(Mid::value_type(15, 99.3)); // ignored, key already exist

    std::cout << "sepasang memuat: \nKunci\tNilai";

    for(Mid::const_iterator iter = sepasang.begin(); iter != sepasang.end(); iter++)
    std:: cout << iter->first << '\t' << iter->second << '\n';

    sepasang[25] = 9999.99; // modifies exixting value
    sepasang[40] = 8765.43; // makes a new key

    std::cout << "\nSetelah operasi subskript, sepasang memuat:\nKunci\tNilai\n";

    for(Mid::const_iterator iter = sepasang.begin(); iter != sepasang.end(); iter++)
    std:: cout << iter->first << '\t' << iter->second << '\n';


    return 0;
}
