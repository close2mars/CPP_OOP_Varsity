#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int karakter;
    cout << "Sebelum masukan, cin.eof() adalah " << cin.eof() << endl;
    cout << "Masukan sebaris teks diikuti dengan ond-of-file:" << endl;

    while ((karakter = cin.get()) != EOF) // eof = -1 (ctrl + z)
        cout.put(karakter);
    

    cout << "\nEOF di dalam sistem ini adalah: " << karakter << endl;
    cout << "Setalah masukan EOF, cin.eof() adalah " << cin.eof() << endl;


    return 0;
}