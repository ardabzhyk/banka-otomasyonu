#pragma once
#include<iostream>
using namespace std;

class Hesap
{
private:
	string isim;
	int hesapno;
	float bakiye;


public:
	Hesap(string _isim, int _hesapno, float _bakiye);
	void hesabaParaYatir(float paraMiktari);
	void hesaptanParaCek(float paraMiktari);
	void hesapDetayGoruntule();



};
