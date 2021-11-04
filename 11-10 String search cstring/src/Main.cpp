#include <iostream>
#include <cstring>
using namespace std;


void stringSearch();
void stringCSpan();
void stringPbrk();
void stringRchr();
void stringSpan();
void stringStr();


int main(int argc, char const *argv[])
{
    int pilihan = 0;
    pilihan:
    do {
        cout << "1. stringSearch\n2. stringCSpan\n3. stringPbrk";
        cout << "\n4. stringRchr\n5. stringSpan\n6. stringStr\n0. Exit"<< endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            stringSearch();
            break;
        case 2:
            stringCSpan();
            break;
        case 3:
            stringPbrk();
            break;
        case 4:
            stringRchr();
            break;
        case 5:
            stringSpan();
            break;
        case 6:
            stringStr();
            break;

        case 0:
            exit(1);
            break;

        default:
            cout << "No Option!" << endl;
            break;
        }
    }while(pilihan !=0 );

    return 0;
}


void stringSearch() 
{
    const char* string1 = "Ini adalah sebuah percobaan";
    char karakter1 = 'a';
    char karakter2 = 'Z';
    
    if (strchr(string1, karakter1) != NULL)
        cout << '\'' << karakter1 << "' ditemukan di dalam \"" << string1 << "\".\n";
    else
        cout << '\'' << karakter1 << "' tidak ditemukan dalam \"" << string1 << "\".\n";

    if (strchr(string1, karakter2) != NULL)
        cout << '\'' << karakter2 << "' ditemukan dalam \"" << string1 << "\".\n";
    else
        cout << '\'' << karakter2 << "' tidak ditemukan di dalam \"" << string1 << "\". " << endl;
}

void stringCSpan() 
{
    const char* string1 = "Nilai adalah 3.14159";
    const char* string2 = "1234567890";

    cout << "string1 = " << string1 << "\nstring2 = "<< string2;
    cout << "\n\nPanjang segmen awal dari string1 \nyang tidak memuat sembarang karakter dari string2 = "
    << strcspn(string1, string2) << endl << endl;

}

void stringPbrk() 
{
    const char* string1 = "Ini adalah sebuah test";
    const char* string2 = "berhati-hatilah";

    cout << "Dari karakter-karakter di dalam \"" << string2 << "\"\n'"
    << *strpbrk(string1, string2) << "\' adalah karakter pertama "
    << "yang muncul di dalam\n\"" << string1 << '\"' << endl;
}

void stringRchr() 
{
    const char* string1 = "Berkat peninggalan purba kala termasyur slama-lamanya";
    char c = 'l';

    cout << "string1 = " << string1 << "\n" << endl;
    cout << "Sisa dari string1 yang diawali dengan\n"
    << "kemuculan terakhir karakter '" << c << "' adalah: \""
    << strrchr(string1,c) << '\"' << endl;
}

void stringSpan() 
{
    const char* string1 = "Nilai adalah 3.14159";
    const char* string2 = "Ni";

    cout << "string1 = " << string1 << "\nstring2 = " << string2 << endl;
    cout <<"\nPanjang segmen awa dari string1 \nyang memuat karakter-karakter dari string2 = " << endl;
    cout << strspn(string1, string2) << endl;
}


void stringStr() 
{
    const char* string1 = "I love you no matter what";
    const char* string2 = "no";

    cout << "string1 = " << string1 << "\nstring2 = " << string2 << "\n\n";
    cout << "Potongan dari string1 yang diawali dengan \nkeunculan pertama dari string2 adalah:  ";
    cout << strstr(string1, string2) << endl;
}

