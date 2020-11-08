#include "Bai2.h"

istream& operator>>(istream& is, DonThuc& x)
{
	cout << "Nhap don thuc: " << endl;
	cout << "Nhap a: " << endl;
	is >> x.a;
	cout << "Nhap b: " << endl;
	is >> x.b;
	return is;

}

ostream& operator<<(ostream& os, DonThuc& x)
{
	os << x.a << "*x" << "+" << x.b;
	return os;
}
DonThuc DonThuc::operator+(const DonThuc& x)
{
	float a1 = a + x.a;
	float b1 = b + x.b;
	return DonThuc(a1, b1);
}

float DonThuc::operator()(float x)
{
	return a * x + b;
}
