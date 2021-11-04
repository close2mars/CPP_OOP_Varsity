#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;


int main(int argc, char const *argv[])
{
    string s1("selamat");
    string s2(" ultah");
    string s3;

    //menguji operator teroverload
    cout << "s1 adalah \"" << s1 << "\"; s2 adalah \""  
    <<s2 << "\"; s3 adalah \"" << s3 << '\"' << endl;
    cout << "\nHasil pembandingan s2 dan s1:"
    << "\ns2 == s1 menghasilkan " << (s2 == s1 ? "true" : "false")
    << "\ns2 != s1 menghasilkan " << (s2 != s1 ? "true" : "false")
    << "\ns2 > s1 menghasilkan " << (s2 > s1 ? "true" : "false")
    << "\ns2 < s1 menghasilkan " << (s2 < s1 ? "true" : "false")
    << "\ns2 >= s1 menghasilkan " << (s2 >= s1 ? "true" : "false")
    << "\ns2 <= s1 menghasilkan " << (s2 <= s1 ? "true" : "false")
    << endl;

    //menguji member function empty
    cout << "\nMenguji s3.empty():" << endl;
    if (s3.empty())
    {
        cout << "s3 kosong; menggunakan s1 kepada s3;" << endl;
        s3 = s1;
        cout << "s3 adalah \"" << s3 << "\"" << endl;
    }

    //menguji operator penyambungan teroverload
    cout << "\ns1 += s2 menghasilkan s1= ";
    s1 += s2;
    cout << s1 << endl;

    //menguji operator penyambungan teroverload dengam string char *
    cout <<"\ns1 += \" pada anda\" menghasilkan" << endl;
    s1 += " pada anda";
    cout << "s1 = " << s1 << endl << endl;

    //menguji fungsi anggota substr
    cout << "Substring dari s1 dimulai pada lokasi 0 untuk\n"
    << "13 karakter, s1.substr(0 , 13), adalah:\n"
    << s1.substr(0 , 13) << "\n\n";

    //menguji substr sampai akhir string
    cout <<"Substring dari s1 dimulai pada\n"
    << "lokasi 14, s1.substr(14), adalah:\n"
    <<s1.substr(14) << endl;

    //menguji konstruktor penyalin
    string s4(s1);
    cout << "\ns4 = " << s4 << "\n\n";

    //menguji operator assignment (=)
    cout << "menugaskan s4 ke s4" << endl;
    s4 = s4;
    cout << "s4 = " << s4 << endl;

    //menguji operator subscript teroverload untuk menciptakan lvalue
    s1[0] = 'S';
    s1[8] = 'U';
    cout << "\ns1 setelah s1[0] = 'S' dan s1[6] = 'U' adalah: "
    << s1 << "\n\n";

    //menguji subscript apakag di luar rentang dengan fungsi at
    try{
        cout << "Percobaan menugaskan 'd' kepada s1.at(30) menghasilkan:" << endl;
        s1.at(30) = 'd'; //ERROR: subscript diluar rentang
    }
    catch(out_of_range &ex ){
        cout << "Sebuah eksepsi terjadi: " << ex.what() << endl;
    }
    
    return 0;
}
