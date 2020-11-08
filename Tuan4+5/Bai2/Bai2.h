#include <iostream>
using namespace std;

class DonThuc
{
public:
	DonThuc();
	DonThuc(float HeSo, float SoMu);
	~DonThuc();

	friend istream& operator>>(istream& is, DonThuc& x);
	friend ostream& operator <<(ostream& os, DonThuc& x);

	DonThuc operator+(const DonThuc& x);
	float operator()(float x);
private:
	float a;
	float b;
};

DonThuc::DonThuc()
{
	a = 0;
	b = 0;
}

DonThuc::DonThuc(float HeSo1, float HeSo2)
{
	this->a = HeSo1;
	this->b = HeSo2;
}

DonThuc::~DonThuc()
{
}