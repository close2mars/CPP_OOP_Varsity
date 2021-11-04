#include "Waktu.h"
#include "Waktu.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
	Waktu t1; //default argument
	Waktu t2(2); //jam specified
	Waktu t3(21, 34); //jam, menit specified
	Waktu t4(12, 25, 42); //jam, menit, detik specified

	cout << "Dikonstruksi dengan:\n\nt1: all argument's default\n ";
	t1.tampilUniversal(); cout << endl;
	t1.tampilStandard(); cout << endl;

	cout << "\nt2: jam specified; menit, detik default\n";
	t2.tampilUniversal(); cout << endl;
	t2.tampilStandard(); cout << endl;

	cout << "\nt3: jam, menit specified; detik default\n";
	t3.tampilUniversal(); cout << endl;
	t3.tampilStandard(); cout << endl;

	cout << "\nt4: jam, menit, detik specified\n";
	t4.tampilUniversal(); cout << endl;
	t4.tampilStandard(); cout << endl;

	try{
		Waktu t5(27, 74, 99);
	}
	catch(invalid_argument &apa){
		cout << "\nExpression when t5 was initialized: " << apa.what() << endl;
	}
	system("pause");
	return 0;
}