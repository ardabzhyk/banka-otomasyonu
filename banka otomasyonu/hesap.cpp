#include"Hesap.h"

Hesap::Hesap(string _isim, int _hesapno, float _bakiye)
{
	Hesap::bakiye = 0;
	Hesap::isim = _isim;
	Hesap::hesapno = _hesapno;
	Hesap::bakiye = _bakiye;
}


void Hesap::hesabaParaYatir(float paraMiktari)
{
	Hesap::bakiye = Hesap::bakiye + paraMiktari;
}

void Hesap::hesaptanParaCek(float paraMiktari)
{
	if (Hesap::bakiye < paraMiktari)
	{
		//cout << "Yetersiz bakiye !" << endl;
		throw std::exception("Para cekme islemi basarisiz oldu.");
	}
	else
	{
		Hesap::bakiye = Hesap::bakiye - paraMiktari;
	}
}


void Hesap::hesapDetayGoruntule()
{
	cout << "Hesap adi:" << Hesap::isim << endl;
	cout << "Hesap no:" << Hesap::hesapno << endl;
	cout << "Hesap bakiyesi:" << Hesap::bakiye << endl << endl;

}