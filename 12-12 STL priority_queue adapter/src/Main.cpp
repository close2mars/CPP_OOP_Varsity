#include <iostream>
#include <queue>

int main(int argc, char const *argv[])
{
    std::priority_queue<double> prioritas;

    prioritas.push(3.2);
    prioritas.push(9.8);
    prioritas.push(5.4);

    std::cout << "Menghapus dari prioritas: ";

    while (!prioritas.empty())
    {
        std::cout << prioritas.top() << ' ';
        prioritas.pop();
    }

    return 0;
}
