#include "Waktu.h"

using namespace std; 

Waktu::Waktu(){	
	jam = menit = detik = 0; 
}

void Waktu::setWaktu( int h, int m, int s ){ 
// memvalidasi jam, menit, dan detik 
	cout << "\n\nWaktu ditetapkan menjadi " << setfill('0') <<setw(2) << h << ":" << setw(2)
	<< m << ":" << setw(2) << s;
	if ( ( h >= 0 && h < 24 ) && ( m >= 0 && m < 60 ) && ( s >= 0 && s < 60 ) ){
		jam = h;
		menit = m;
		detik = s;
	}
	else
	throw invalid_argument("jam, menit dan/atau detik di luar rentang");
}

void Waktu::tampilUniversal(){
	cout << setfill( '0' ) << setw( 2 ) << jam << ":"
	<< setw( 2 ) << menit << ":" << setw( 2 ) << detik;
}

// format AM / PM
void Waktu::tampilStandard(){
	cout << ( ( jam == 0 || jam == 12 ) ? 12 : jam % 12 ) << ":" 
	<< setfill( '0' ) << setw( 2 ) << menit << ":" << setw( 2 ) 
	<< detik << ( jam < 12 ? " AM" : " PM" );
}