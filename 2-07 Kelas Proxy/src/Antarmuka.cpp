#include "Antarmuka.hpp"
#include "Implementasi.hpp"

//konstruktor
Antarmuka::Antarmuka(int v):ptr(new Implementasi(v)){
    // initializr ptr to the new implementasion object
    // Antarmuka object located in stack
    // ptc owned by class Implementasi located in heap
    cout << "konstruktor antarmuka dibuat: " << &*this << endl;
}

void Antarmuka::setNilai(int v){
    ptr->setNilai(v);
}

int Antarmuka::getNilai() const{
    return ptr->getNilai();
}

Antarmuka::~Antarmuka(){
    delete ptr; //manual delete karena di heap
}
