#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

int main(int argc, char const *argv[])
{
    const int UKURAN = 10;
    int a1[UKURAN] = {2, 2, 3, 3, 3, 6, 6, 6, 6, 8};
    std::vector<int> v(a1, a1 + UKURAN);
    std::ostream_iterator<int> output(std::cout, " ");

    std::cout << "Vektor v memuat: ";
    std::copy(v.begin(), v.end(), output);

    //lower bound
    std::vector<int>::iterator bawah;
    bawah = std::lower_bound(v.begin(), v.end(), 6);
    std::cout << "\nBatas bawah untuk 6 adalah elemen " << bawah - v.begin() << " di vektor v";

    //upper bound
    std::vector<int>::iterator atas;
    atas = std::upper_bound(v.begin(), v.end(), 6);
    std::cout << "\nBatas atas untuk 6 adalah elemen " << atas - v.begin() << " di vektor v";
   
   std::pair<std::vector<int>::iterator, std::vector<int>::iterator> eq;
   eq = std::equal_range(v.begin(), v.end(), 6);
   std::cout << "\n\nMenggunakan equal_range:\nBatas bawah dari 6 adalah elemen "
   << eq.first - v.begin() << " di vektor v";

   std::cout << "\nBatas atas dari 6 adalah elemen "
   << eq.second - v.begin() << " di vektor v";

   std::cout << "\n\nMenggunakan lower_bound untuk melokasi titik pertama\n"
   << "dimana 5 bisa disisipkan";
   bawah = std::lower_bound(v.begin(), v.end(), 5);
   std::cout << "\n Batas bawah untuk 5 adalah elemen "
   << bawah - v.begin() << " di vektor v";


   std::cout << "\n\nMenggunakan upper_bound untuk melokasi titik akhir\n"
    << "dimana 7 bisa disisipkan";
   atas = std::upper_bound(v.begin(), v.end(), 7);
   std::cout << "\n Batas atas untuk 7 adalah elemen "
   << atas - v.begin() << " di vektor v";

   std::cout << "\n\nMenggunakan equal_range untuk melokasi titik pertama dan\n"
   << "titik akhir dimana 5 dapat disisipkan";

   eq = std::equal_range(v.begin(), v.end(), 5);
   std::cout << "\n Batas bawah untuk 5 adalah elemen "
   << eq.first - v.begin() << " di vektor v";
   std::cout << "\n Batas atas untuk 5 adalah elemen "
   << eq.second - v.begin() << " di vektor v";

   return 0;

}
