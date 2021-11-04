#ifndef CIPTAKAN
#define CIPTAKAN

#include <string>
#include <iostream>

using namespace std;

class CiptakanDanHancurkan{
    public:
    CiptakanDanHancurkan (int, string); //constructor
    ~CiptakanDanHancurkan(); // destructor

    private:
    int objekID;
    string pesan;
};

#endif