#include<iostream>
#include"Hesap.h"

using namespace std;


int main()
{
	Hesap hesap1 = Hesap("Ali Kayahan", 172123, 250.75);
	Hesap hesap2 = Hesap("Berna Ozan", 174153, 0);


	hesap1.hesabaParaYatir(200);
	hesap1.hesaptanParaCek(100);
	hesap1.hesapDetayGoruntule();


	hesap2.hesapDetayGoruntule();


	try
	{
		hesap2.hesaptanParaCek(100);
	}
	catch(std::exception b)
	{
		cout << b.what();
	}

	cout << endl;
	return 0;
}