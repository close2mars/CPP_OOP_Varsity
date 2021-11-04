#include "Waktu.h"

using namespace std; 

Waktu::Waktu(int jam, int menit, int detik){
	setWaktu(jam, menit, detik);
}

void Waktu::setWaktu( int h, int m, int s ){ 
	setJam(h);
	setMenit(m);
	setDetik(s);
}

void Waktu::setJam(int h){
	if(h >= 0 && h < 24)
		jam = h;
	else
		throw invalid_argument("jam harus dalam rentang 0-23");
}

void Waktu::setMenit(int m){
	if(m >= 0 && m < 60)
		menit = m;
	else
		throw invalid_argument("menit harus dalam rentang 0-59");
}

void Waktu::setDetik(int s){
	if(s >= 0 && s < 60)
		detik = s;
	else
		throw invalid_argument("detik harus dalam rentang 0-59");
}

int Waktu::getJam(){
	return jam;
}

int Waktu::getMenit(){
	return menit;
}

int Waktu::getDetik(){
	return detik;
}


void Waktu::tampilUniversal(){
	cout << setfill('0') << setw(2) << getJam() << ":"
	<< setw(2) << getMenit() << ":" << setw(2) << getDetik();
}

// format AM / PM
void Waktu::tampilStandard(){
	cout << ( (getJam() == 0 || getJam() == 12) ? 12 : getJam() % 12) << ":" 
	<< setfill('0') << setw(2) << getMenit() << ":" << setw(2) 
	<< getDetik() << (getJam() < 12 ? " AM" : " PM");
}