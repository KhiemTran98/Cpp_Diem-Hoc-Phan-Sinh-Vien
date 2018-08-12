#include<iostream>
#include"CDate.h"
using namespace std;
CDate::CDate()
{
	d, m, y = 1;
}
CDate::~CDate() {}
void CDate::Nhap()
{
	cout << "Nhap ngay: ";
	cin >> d;
	cout << "Nhap thang: ";
	cin >> m;
	cout << "Nhap nam: ";
	cin >> y;
}