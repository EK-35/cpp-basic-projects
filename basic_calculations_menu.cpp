// I originally implemented these problems separately (triangle, travel time, etc.)
// Then I combined them into a single menu-based application.

// Bu program öðrenme sürecimde geliþtirdiðim
// farklý problemlerin tek bir menü altýnda birleþtirilmiþ halidir.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int secim;

    cout << "=== MENU ===\n";
    cout << "1 - Hipotenus Hesaplama\n";
    cout << "2 - Dik Ucgen Kontrolu\n";
    cout << "3 - Varis Suresi Hesaplama\n";
    cout << "Seciminiz: ";
    cin >> secim;

    if (secim == 1) {
        int a, b;
        cout << "a kenari: ";
        cin >> a;
        cout << "b kenari: ";
        cin >> b;

        float c = sqrt(a * a + b * b);
        cout << "Hipotenus: " << c << endl;
    }

    else if (secim == 2) {
        int a, b, c;
        cout << "Kenarlar: ";
        cin >> a >> b >> c;

        if ((a * a + b * b == c * c) ||
            (a * a + c * c == b * b) ||
            (b * b + c * c == a * a)) {
            cout << "Dik ucgen\n";
        }
        else {
            cout << "Dik ucgen degil\n";
        }
    }

    else if (secim == 3) {
        int km, hiz;
        cout << "Mesafe: ";
        cin >> km;
        cout << "Hiz: ";
        cin >> hiz;

        float saat = (float)km / hiz;
        int saatTam = (int)saat;
        int dakika = (saat - saatTam) * 60;

        cout << "Varis: " << saatTam << " saat " << dakika << " dakika\n";
    }

    else {
        cout << "Gecersiz secim";
    }

    return 0;
}