#include "Waktu.h"
#include "Waktu.cpp"
using namespace std;


int main()
{
	Waktu t;
	cout << "Waktu universal awal adalah ";
	t.tampilUniversal(); // 00:00:00 
	cout << "\nWaktu standard awal adalah "; 
	t.tampilStandard(); // 12:00:00 AM

	// Set waktu
	t.setWaktu( 13, 27, 6 ); 

	// menampilkan nilai-nilai baru objek t
	cout << "\nWaktu universal setelah setWaktu adalah ";
	t.tampilUniversal(); // 13:27:06
	cout << "\nWaktu standard setelah setWaktu adalah ";
	t.tampilStandard(); // 1:27:06 PM
	
	// mencoba untuk menetapkan waktu dengan nilai tak-valid 
	try{
		t.setWaktu( 13, 70, 13 );
	}
	catch ( invalid_argument& e ){
		cout <<endl<< "Eksepsi: " << e.what() << endl << endl;
	}
	
	// menampilkan nilai-nilai objek t setelah menspesifikasi nilai tak-valid
	cout << "Setelah mencoba menetapkan nilai tak-valid:"<< endl;
	cout << "Waktu universal: "; 
	t.tampilUniversal(); // 00:00:00 
	cout << "\nWaktu standard: "; 
	t.tampilStandard(); // 12:00:00 AM
	cout << endl;

	system("pause");
}
