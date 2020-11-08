#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class PhanSo
{
private:
	int tuso = 0;
	int mauso = 1;
public:
	void SetTuso(int ituso);
	void SetMauso(int imauso);
	PhanSo();//kh?i t?o m?c ð?nh
	PhanSo(int tu, int mau);
	void Nhap();
	void Xuat();
	void RutGon();
	PhanSo operator+(PhanSo a);
	PhanSo operator-(PhanSo a);
	PhanSo operator*(PhanSo a);
	PhanSo operator/(PhanSo a);
	bool operator>(PhanSo a);
	friend istream& operator>>(istream& inDevice, PhanSo& a);
	friend ostream& operator<<(ostream& outDevice, PhanSo& a);
	int GetTuso();
	int GetMauSo();
};
