#include <iostream>

class Basis {
public:
    virtual void tampil() const = 0;
};

class TerderivasiSatu : virtual public Basis {
public:
    void tampil() const {
        std::cout << "TerderivasiSatu\n";
    }
};

class TerderivasiDua : virtual public Basis {
public:
    void tampil() const {
        std::cout << "TerderivasiDua\n";
    }
};

class Jamak : public TerderivasiSatu, public TerderivasiDua {
public:
    void tampil() const {
        TerderivasiDua::tampil();
    }
};

int main(int argc, char const* argv[])
{
    Jamak keduanya;
    TerderivasiSatu satu;
    TerderivasiDua dua;

    Basis *array[3];
    array[0] = &keduanya;
    array[1] = &satu;
    array[2] = &dua;

    for (size_t i = 0; i < 3; i++)
        array[i]->tampil();

    return 0;
};
