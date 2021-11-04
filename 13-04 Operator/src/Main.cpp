#include <iostream>

int main(int argc, char const *argv[])
{
    bool a = true;
    bool b = false;
    int c = 2;
    int d = 3;

    std::cout << std::boolalpha;
    std::cout << "a = " << a << "; b = " << b
    << "; c = " << c << "; d = " << d;

    std::cout << "\n\nKatakunci operatot logikal:";
    std::cout << "\n a and a: " << (a and a);
    std::cout << "\n a and b: " << (a and b);
    std::cout << "\n a or a: " << (a or a);
    std::cout << "\n a or b: " << (a or b);
    std::cout << "\n not a: " << (not a);
    std::cout << "\n not b: " << (not b);
    std::cout << "\n a not_eq b: " << (a not_eq b);

    std::cout << "\n\nKata kunci operator bitwise:";
    std::cout << "\nc bitand d: " <<  (c bitand d);
    std::cout << "\nc bitor d: " <<  (c bitor d);
    std::cout << "\nc xor d: " << (c xor d);
    std::cout << "\nc compl c: " << (compl c);
    std::cout << "\nc and_eq d: " << (c and_eq d);
    std::cout << "\nc or_eq d: " << (c or_eq d);
    std::cout << "\nc xor_eq d: " << (c xor_eq d);

    return 0;
}
