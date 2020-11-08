#include "Bai2.h"
void main()
{
	DonThuc dt1, dt2, tong;

	cin >> dt1;

	cin >> dt2;

	tong = dt1 + dt2;
	cout << "Tong= " << tong << endl;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << dt1(x) << endl;
	cout << dt2(x) << endl;
	system("pause");
}