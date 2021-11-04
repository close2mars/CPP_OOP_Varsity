#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    const int UKURAN = 80;
    char buffer1[UKURAN];
    char buffer2[UKURAN];
    char buffer3[UKURAN];

    cout << "Masukan sebuah kalimat:" << endl;
    cin >> buffer1; // akan berhenti ketika spasi ditekan

    cout << "\nString yang dibaca dengan cin adalah:" << endl;
    cout << buffer1 << endl;

    cin.get(buffer2, UKURAN); //tetap lanjut meski spasi ditekan

    cout << "String yang dibaca dengan cin.get adalah:" << endl;
    cout << buffer2 << endl;

    cout << "Masukan sebuah kalimat:" << endl;
    cin.getline(buffer3,UKURAN,','); //sama seperti cin.get tapi bisa stop dengan delimiter

    cout << "\nKalimat yang dimasukan adalah:" << endl;
    cout << buffer3;

    return 0;
}
