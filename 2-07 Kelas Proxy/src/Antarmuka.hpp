//Antarmuka kelas proxy
// tidak perlu include header

#ifndef _ANTARMUKA
#define _ANTARMUKA

class Implementasi; // class forward declaration

class Antarmuka{
    private:
        Implementasi* ptr;

    public:
        Antarmuka(int);
        void setNilai(int);
        int getNilai() const;
        ~Antarmuka();
};

#endif