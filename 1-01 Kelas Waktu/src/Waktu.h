// mencegah penyertaan jamak header 
#ifndef WAKTU
#define WAKTU

#include <iostream> 
#include <iomanip> 
#include <stdexcept> 

// Definisi kelas Waktu
class Waktu
{
	public: 
		Waktu(); // konstruktor 
		void setWaktu( int, int, int ); // menetapkan jam, menit, dan detik 
		void tampilUniversal(); // menampilkan waktu dalam format universal 
		void tampilStandard(); // menampilkan waktu dalam format standard 
	private: 
		int jam; // 0 - 23 (format 24-jam) 
		int menit; // 0 - 59 
		int detik; // 0 - 59 
}; // akhir dari kelas Waktu
 
#endif
