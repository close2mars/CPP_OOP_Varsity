#include "CiptakanDanHancurkan.h"

CiptakanDanHancurkan::CiptakanDanHancurkan(int ID, string pesanString){
    objekID = ID;
    pesan = pesanString;

    cout << "Objek " << objekID << " konstruktor dipanggil " << pesan << endl;
}
CiptakanDanHancurkan::~CiptakanDanHancurkan(){
    cout << (objekID ==1 || objekID == 6 ? "\n" : "");
    cout << "Objek " << objekID << " destruktor dipanggil " << pesan << endl;

}