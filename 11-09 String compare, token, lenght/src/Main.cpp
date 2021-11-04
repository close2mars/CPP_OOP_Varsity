#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

void stringCompare(); //strcmp
void stringToken(); //strtok
void stringLenght(); //strlen

int main(int argc, char const *argv[])
{
    //stringCompare();
    //stringToken();
    stringLenght();

    return 0;
}


void stringCompare() 
{
    char s1[] = "Selamat Ulang Tahun";
    const char* s2 = "Selamat Ulang Tahun";
    const char* s3 = "Selamat Berlibur";

    cout << "s1 = " << s1 << "\ns2 = " << s2 << "\ns3 = " << s3 << endl;\
    cout << "\nstrcmp(s1,s2) = " << setw(2) << strcmp(s1,s2) << endl;
    cout << "\nstrcmp(s1,s3) = " << setw(2) << strcmp(s1,s3) << endl;
    cout << "\nstrcmp(s3,s1) = " << setw(2) << strcmp(s3,s1) << endl;

    cout << "\nstrncmp(s1, s3, 6) = " << setw(2) << strncmp(s1, s3, 6);
    cout << "\nstrncmp(s1, s3, 9) = " << setw(2) << strncmp(s1, s3, 9);
    cout << "\nstrncmp(s3, s1, 9) = " << setw(2) << strncmp(s3, s1, 9) << endl;
}


void stringToken() 
{
    char kalimat[] = "Ini adalah kalimat dengan 7 token";
    char* tokenPtr;

    cout << "String yang akan ditokenkan adalah:\n" << kalimat << "\n\n";
    cout << "Token-token tersebut adalah:\n\n";

    tokenPtr = strtok(kalimat, " ");

    while (tokenPtr != NULL)
    {
        cout << tokenPtr << '\n';
        tokenPtr = strtok(NULL, " ");
    }
    
    cout << "\nSetelah strtok kalimat = " << kalimat << endl;

}


void stringLenght() 
{
    const char* string1 = "abcdefghijklmnopqrstuvwxyz";
    const char* string2 = "empat";
    const char* string3 = "Surabaya";

    cout << "Panjang dari \"" << string1 << "\" adalah " << strlen(string1) << endl;
    cout << "Panjang dari \"" << string2 << "\" adalah " << strlen(string2) << endl;
    cout << "Panjang dari \"" << string3 << "\" adalah " << strlen(string3) << endl;
}
