#include"Bai1.h"
using namespace std;

PhanSo PhanSo::operator+(PhanSo a)
{
	PhanSo kq(this->tuso * a.mauso + this->mauso * a.tuso, this->mauso * a.mauso);
	return kq;
}

PhanSo PhanSo::operator-(PhanSo a)
{
	PhanSo kq(this->tuso * a.mauso - this->mauso * a.tuso, this->mauso * a.mauso);
	return kq;
}

PhanSo PhanSo::operator*(PhanSo a)
{
	PhanSo kq(this->tuso * a.tuso, this->mauso * a.mauso);
	return kq;
}

PhanSo PhanSo::operator/(PhanSo a)
{
	PhanSo kq(this->tuso * a.mauso, this->mauso * a.tuso);
	return kq;
}

bool PhanSo::operator>(PhanSo a)
{
	bool kq;
	if (this->tuso * a.mauso > this->mauso * a.tuso)
		kq = true;
	else
		kq = false;

	return kq;
}

void main()
{

	PhanSo a, b, tong, hieu, tich, thuong;
	cin >> a;
	cout << a;
	b.Nhap();
	b.Xuat();
	tong = a + b;
	cout << "tong 2 phan so la: " << endl;
	tong.Xuat();
	hieu = a - b;
	cout << "hieu 2 phan so la: " << endl;
	hieu.Xuat();
	tich = a * b;
	cout << "tich 2 phan so la: " << endl;
	cout << tich;
	thuong = a / b;
	cout << "thuong 2 phan so la: " << endl;
	cout << thuong;
	system("pause");
}