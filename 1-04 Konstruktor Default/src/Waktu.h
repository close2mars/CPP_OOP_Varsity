#ifndef WAKTU
#define WAKTU

#include <iostream> 
#include <iomanip> 
#include <stdexcept> 

class Waktu
{
	public: 
		Waktu(int = 0, int = 0, int = 0); // konstruktor default 
		
		//member function
		void setWaktu(int, int, int); 
		void setJam(int);
		void setMenit(int);
		void setDetik(int);

		//getter
		int getJam();
		int getMenit();
		int getDetik();

		void tampilUniversal();
		void tampilStandard();

	private: 
		int jam;
		int menit;
		int detik;
};
 
#endif
