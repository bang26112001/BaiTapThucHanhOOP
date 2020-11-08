#include<iostream>
#include<cmath>

using namespace std;

class Complex
{
private:
	double thuc, ao;
public:
	Complex();
	Complex(double r, double i);
	void Nhap();
	void Xuat();
	Complex operator+ (Complex C);
	Complex operator- (Complex C);
	Complex operator* (Complex C);
	Complex operator/ (Complex C);
};