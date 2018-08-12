#include<iostream>
#include"CHocPhan.h"
using namespace std;
CHocPhan::CHocPhan()
{
	DCC = 0;
	TBKT = 0;
	Thi = 0;
	SoTC = 0;
}
CHocPhan::~CHocPhan() {}
void CHocPhan::Nhap()
{
	cout << "Nhap DCC: ";
	cin >> DCC;
	cout << "Nhap TBKT: ";
	cin >> TBKT;
	cout << "Nhap diem thi: ";
	cin >> Thi;
	cout << "Nhap so tin chi: ";
	cin >> SoTC;
}
double CHocPhan::TinhDiemTongKet()
{
	return DCC * 0.1 + TBKT * 0.4 + Thi * 0.5;
}
int CHocPhan::GetSoTC()
{
	return SoTC;
}