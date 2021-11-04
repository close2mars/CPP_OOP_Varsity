#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <iostream>
using namespace std;

class Array{
    friend ostream& operator<< (ostream&, const Array&);
    friend istream& operator>> (istream&, Array&);
    public:
        Array(int = 10); //default constructor
        Array(const Array&); //copy constructor
        ~Array();
        int getUkuran() const;

        const Array& operator= (const Array&); //assignment overloading
        bool operator== (const Array&) const; //equality overloading
        bool operator!= (const Array& right) const{ //equality overloading
            return ! (*this == right);
        }

        int& operator[] (int);
        int operator[] (int) const;

    private:
        int ukuran;
        int* ptr;
};

#endif // __ARRAY_H__