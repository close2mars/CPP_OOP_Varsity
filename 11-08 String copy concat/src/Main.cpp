#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    //program 1
    char x[] = "Happy birthday !";
    char y[25];
    char z[15];

    strcpy(y,x);
    
    cout << "String di dalam array x adalah: " << x
    << "\nString di dalam array y adalah: " << y << endl;

    strncpy(z,x,5);
    z[5] = '\0';

    cout << "String di dalam array z adalah: " << z << endl;

    cout << endl << "------Program kedua----------" << endl;

    //program 2
    char s1[20] = "Selamat ";
    char s2[] = "Tahun Baru ";
    char s3[40] = "";

    cout << "s1 = " << s1 << "\ns2 = " << s2;

    strcat(s1,s2);
    cout << "\n\nSetelah strcat(s1,s2):\ns1 = " << s1 << "\ns2 = " << s2 << endl;

    strncat(s3,s1,8);
    cout << "\nSetelah strncat(s3,s1,8):\ns1 = " << s1 << "\ns3 = " << s3 << endl;



    return 0;
}
