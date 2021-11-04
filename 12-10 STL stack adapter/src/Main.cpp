#include <iostream>
#include <stack>
#include <vector>
#include <list>

template <typename T> void pushElemen(T &stackRef);
template <typename T> void popElemen(T &stackRef);

int main(int argc, char const *argv[])
{
    //stack with default deque
    std::stack<int> intDequeStack;

    //stack with vector stucture
    std::stack<int, std::vector<int> > intVectorStack;

    //stack with list structure
    std::stack<int, std::list<int> > intlistStack;


    std::cout << "\nMendorong keatas intDequestack: ";
    pushElemen(intDequeStack);
    std::cout << "\nMendorong keatas intVectorStack: ";
    pushElemen(intVectorStack);
    std::cout << "\nMendorong keatas intlistStack: ";
    pushElemen(intlistStack);

    std::cout << std::endl;

    std::cout << "\nMenghapus dari intDequestack: ";
    popElemen(intDequeStack);
    std::cout << "\nMenghapus dari intVectorStack: ";
    popElemen(intVectorStack);
    std::cout << "\nMenghapus dari intlistStack: ";
    popElemen(intlistStack);   

    std::cout << std::endl;

    return 0;
}


template<typename T>
void pushElemen(T &stackRef) 
{
    for (size_t i = 0; i < 10; i++)
    {
        stackRef.push(i);
        std::cout << stackRef.top() << ' ';
    }
}



template<typename T>
void popElemen(T &stackRef) 
{
    while (!stackRef.empty())
    {
        std::cout << stackRef.top() << ' ';
        stackRef.pop();
    }
}

