#include <iostream>
#include <cstring>
#include <cctype>

const char* maksimum(const char* pertama, const char* kedua) {
    return (std::strcmp(pertama, kedua) >= 0 ? pertama : kedua);
}

int main(int argc, char const *argv[])
{
    char s1[] = "selamat";
    char s2[] = "jalan";

    char* maksPtr = const_cast<char*>(maksimum(s1,s2)); //remove constant nature

    std::cout << "String yang lebih besar adalah: " << maksPtr << std::endl;

    for (size_t i = 0; i < strlen(maksPtr); i++)
    {
        maksPtr[i] = toupper(maksPtr[i]);   /* code */
    }
    
    std::cout << "String yang dikapitalisasi: " << maksPtr << std::endl;

    std::cout << 'v';

    return 0;
}
