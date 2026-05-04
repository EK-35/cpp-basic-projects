
#include <iostream>
using namespace std;
int main()
{
	int sayi1 , sayi2, sayi3 , enbuyuk ,enkucuk , ortanca ;

	cout << "Lutfen birinci sayiyi giriniz."<< endl;
	cin >> sayi1;

	cout << "Lutfen ikinci sayiyi giriniz."<< endl;
	cin >> sayi2;

	cout << "Lutfen ucuncu sayiyi giriniz."<< endl;
	cin >> sayi3;


	enbuyuk = sayi1;
	if (enbuyuk < sayi2 ){
		enbuyuk = sayi2;
	}
	if (enbuyuk < sayi3) {
		enbuyuk = sayi3;
	}

	enkucuk = sayi1;
	if (enkucuk > sayi2) {
		enkucuk = sayi2;
	}

	if (enkucuk > sayi3) {
		enkucuk = sayi3;
	}

	if ((sayi1 != enbuyuk) && (sayi1 != enkucuk)) {
		ortanca = sayi1;
	}
	else if ((sayi2 != enbuyuk) && (sayi2 != enkucuk)) {
		ortanca = sayi2;
	}
	else {
		ortanca = sayi3;
	}

	cout << "En buyuk sayi : " << enbuyuk <<endl;
	cout << "En kucuk sayi : " << enkucuk <<endl;
	cout << "Ortanca sayi : " << ortanca <<endl;



	return 0;
}
