
#include <iostream>
using namespace std;

int main()
{
	int vize, final;
	double ort;
	cout << "Lutfen vize notunuzu giriniz :\n";
	cin >> vize;

	cout << "Lutfen final notunuzu giriniz :\n";
	cin >> final;

	if (vize >= 0 && vize <= 100 && final >= 0 && final <= 100) {
		cout << "vize notunuz:" << vize << endl << "final notunuz:" << final << endl;

		ort = (vize + final) / 2.0;
		cout << "iki notunuzun ortalamasi:" << ort << endl;

		if (ort >= 60) {
			cout << "Dersten gectiniz. ";
		}
		else {
			cout << "Dersten kaldiniz. ";
		}

		if (ort >= 0 && ort < 50) {
			cout << "Harf notunuz \"FF\" ";
		}
		else if (ort >= 50 && ort < 60) {
			cout << "Harf notunuz \"DD\" ";
		}
		else if (ort >= 60 && ort < 70) {
			cout << "Harf notunuz \"CC\" ";
		}
		else if (ort >= 70 && ort < 80) {
			cout << "Harf notunuz \"BB\" ";
		}
		else if (ort >= 80 && ort < 90) {
			cout << "Harf notunuz \"BA\" ";
		}
		else if (ort >= 90 && ort <= 100) {
			cout << "Harf notunuz \"AA\" ";
		}
	}
	
	else {
		cout << "lutfen gecerli bir deger giriniz. (0-100 araliginda olmalidir)\n";
	}

	
	return 0 ;
}
