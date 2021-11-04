#include "Waktu.h"

using namespace std; 

Waktu::Waktu(int jam, int menit, int detik){	
	setWaktu(jam, menit, detik);
}

void Waktu::setWaktu( int h, int m, int s ){ 
	if ( ( h >= 0 && h < 24 ) && ( m >= 0 && m < 60 ) && ( s >= 0 && s < 60 ) ){
		jam = h;
		menit = m;
		detik = s;
	}
	else
	throw invalid_argument("jam, menit dan/atau detik di luar rentang");
}

int Waktu::getJam(){
	return jam;
}

int& Waktu::burukSetjam(int hh){
	if(hh >= 0 && hh <24)
	 	jam = hh;
	else
		throw invalid_argument ("jam harus dalam rentang 0-23");
	return jam;
}