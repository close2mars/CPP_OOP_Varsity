#include <iostream>
#include <queue>

int main(int argc, char const *argv[])
{
    std::queue<double> nilia2;
    
    nilia2.push(3.2);
    nilia2.push(9.8);
    nilia2.push(5.4);

    std::cout << "Menghapus dari nilai2: ";

    while (!nilia2.empty())
    {
        std::cout << nilia2.front() << ' ';
        nilia2.pop();
    }
    
    return 0;
}
