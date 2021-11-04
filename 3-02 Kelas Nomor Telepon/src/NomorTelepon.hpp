#ifndef __NOMORTELEPON_H__
#define __NOMORTELEPON_H__

#include <iostream>
#include <string>
using namespace std;

class NomorTelepon{
    public:
        friend ostream &operator << (ostream&, const NomorTelepon&);
        friend istream &operator >> (istream&, NomorTelepon&);
    private:
        string kodeArea;
        string antarKode;
        string jalur;
};

#endif // __NOMORTELEPON_H__