#include "Waktu.h"
#include "Waktu.cpp"

int main(int argc, char const *argv[])
{
	Waktu t;

	int& jamRef = t.burukSetjam(20); // 20 is valid

	cout << "\nJam valid sebelum modifikasi: " << jamRef;
	jamRef = 30; // invalid jam
	cout << "\nJam tidak valid setelah modifikasi: " <<t.getJam();

	t.burukSetjam(12)= 74; // invalid value overrides 12
	cout << "\n\n******************************************************\n"
	<< "BAD PROGRAMING!\n"
	<< "t.burukSetJam(12) sebagai lvalue, jam tidak valid: "
	<< t.getJam();
	cout << "\n******************************************************" << endl;
	return 0;
}
