#include "Bai1.h"

PhanSo::PhanSo()
{
	tuso = 0;
	mauso = 1;
}

void PhanSo::SetTuso(int ituso)
{
	this->tuso = ituso;
}

void PhanSo::SetMauso(int imauso)
{
	this->mauso = imauso;
}

PhanSo::PhanSo(int tu, int mau)
{
	{
		if (mau == 0)
		{
			cout << "Khoi tao phan so mac dinh" << endl;
			tuso = 0;
			mauso = 1;
		}
		else
		{
			tuso = tu;
			mauso = mau;
			RutGon();
		}
	}
}

void PhanSo::Nhap()
{
	cout << "Nhap tu so: ";
	cin >> this->tuso;
	cout << "Nhap mau so: ";
	cin >> this->mauso;
	if (mauso == 0)
	{
		cout << "Mau so bang 0. Khoi tao phan so mac dinh!" << endl;
		tuso = 0;
		mauso = 1;
	}
	else
	{
		RutGon();
	}
}

void PhanSo::Xuat()
{
	if (mauso == 1)
		cout << this->tuso;
	else
	{
		cout << this->tuso << "/" << this->mauso << endl;
	}
}

void PhanSo::RutGon()
{
	if (tuso == 0)
	{
		mauso = 1;
	}
	if (tuso < 0)
	{
		tuso = -tuso;
		mauso = -mauso;
	}
	for (int i = 2; i <= abs(abs(tuso) - abs(mauso)); i += 1)
		while (tuso % i == 0 && mauso % i == 0)
		{
			tuso /= i;
			mauso /= i;
		}
}

int PhanSo::GetTuso()
{
	return this->tuso;
}

int PhanSo::GetMauSo()
{
	return this->mauso;
}

istream& operator>>(istream& inDevice, PhanSo& a)
{
	cout << "Nhap tu so: ";
	inDevice >> a.tuso;
	cout << "Nhap mau so: ";
	inDevice >> a.mauso;
	if (a.mauso == 0)
	{
		cout << "Mau so bang 0. Khoi tao phan so mac dinh!" << endl;
		a.tuso = 0;
		a.mauso = 1;
	}
	else
	{
		a.RutGon();
	}
	return inDevice;
}

ostream& operator<<(ostream& outDevice, PhanSo& a)
{
	if (a.mauso == 1)
		outDevice << a.tuso;
	else
	{
		outDevice << a.tuso << "/" << a.mauso << endl;
	}
	return outDevice;
}
