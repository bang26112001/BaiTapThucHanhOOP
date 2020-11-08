#include "Bai3.h"
void main()
{
	Complex a, b, tong, hieu, tich, thuong;

	cout << "nhap so phuc a: " << endl;
	a.Nhap();
	a.Xuat();


	cout << "nhap so phuc b: " << endl;
	b.Nhap();
	b.Xuat();

	tong = a + b;
	cout << "a+b= " << endl;
	tong.Xuat();

	hieu = a - b;
	cout << "a-b= " << endl;
	hieu.Xuat();

	tich = a * b;
	cout << "a*b= " << endl;
	tich.Xuat();

	thuong = a / b;
	cout << "a/b= " << endl;
	thuong.Xuat();

	system("pause");
}