#include <iostream>
#include <cstdlib>  // rand, srand
#include <ctime>    // time
#include <iomanip>  // setw

int main() {
    // Rastgele sayý üreteci için baþlangýç deðeri
    srand(time(0));

    std::cout << "Zar Simulasyonu (1-6 arasi rastgele sayilar):\n\n";

    int toplam = 0;

    for (int i = 1; i <= 20; i++) {
        int zar = rand() % 6 + 1; // 1-6 arasi sayi
        toplam += zar;

        std::cout << std::setw(2) << i << ". atis: " << zar << std::endl;
    }

    std::cout << "\nToplam: " << toplam << std::endl;

    return 0;
}