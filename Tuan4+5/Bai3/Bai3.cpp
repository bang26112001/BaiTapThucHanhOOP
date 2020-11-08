#include "Bai3.h"

Complex::Complex()
{
	thuc = 0;
	ao = 0;
}

Complex::Complex(double r, double i)
{
	this->thuc = r;
	this->ao = i;
}

void Complex::Nhap()
{
	cout << "\nNhap so phuc:\n";
	cout << "thuc = "; cin >> thuc;
	cout << "ao = "; cin >> ao;
}

void Complex::Xuat()
{
	cout << "(" << thuc << " + " << ao << "i)";
}

Complex Complex::operator+(Complex C)
{
	Complex C1;
	C1.thuc = this->thuc + C.thuc;
	C1.ao = this->ao + C.ao;
	return C1;
}

Complex Complex::operator-(Complex C)
{
	Complex C1;
	C1.thuc = this->thuc - C.thuc;
	C1.ao = this->ao - C.ao;
	return C1;
}

Complex Complex::operator*(Complex C)
{
	Complex C1;
	C1.thuc = this->thuc * C.thuc - this->ao * C.ao;
	C1.ao = this->thuc * C.ao + this->ao * C.thuc;
	return C1;
}

Complex Complex::operator/(Complex C)
{
	Complex C1;
	C1.thuc = (this->thuc * C.thuc + this->ao * C.ao) / (pow(C.thuc, 2) + pow(C.ao, 2));
	C1.ao = (this->ao * C.thuc - this->thuc * C.ao) / (pow(C.thuc, 2) + pow(C.ao, 2));
	return C1;
}