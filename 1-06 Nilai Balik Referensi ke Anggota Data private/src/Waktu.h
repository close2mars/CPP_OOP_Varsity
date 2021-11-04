#ifndef WAKTU
#define WAKTU

#include <iostream> 
#include <iomanip> 
#include <stdexcept>

using namespace std;

class Waktu{
	public: 
		Waktu(int = 0, int = 0, int = 0);
		void setWaktu( int, int, int );
		int getJam();
		int& burukSetjam(int);

	private: 
		int jam;
		int menit;
		int detik;
};
 
#endif
