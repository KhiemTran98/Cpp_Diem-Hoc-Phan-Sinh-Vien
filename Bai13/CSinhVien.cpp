#include<iostream>
#include"CSinhVien.h"
using namespace std;
CSinhVien::~CSinhVien()
{
	delete NTNS;
	for (int i = 0; i < SoHP; i++)
		delete DSHP[i];
	delete[] DSHP;
}
void CSinhVien::Nhap()
{
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, HoTen);
	cout << "Nhap ngay thang nam sinh" << endl;
	NTNS = new CDate();
	NTNS->Nhap();
	cout << "Nhap so hoc phan: ";
	cin >> SoHP;
	DSHP = new CHocPhan*[SoHP];
	for (int i = 0; i < SoHP; i++)
	{
		cout << "Hoc phan thu " << i + 1 << endl;
		DSHP[i] = new CHocPhan();
		DSHP[i]->Nhap();
	}
}
double CSinhVien::TinhDiemTrungBinh()
{
	double TongDiemTheoHeSo = 0;
	int TongTC = 0;
	for (int i = 0; i < SoHP; i++)
	{
		TongDiemTheoHeSo += DSHP[i]->TinhDiemTongKet() * DSHP[i]->GetSoTC();
		TongTC += DSHP[i]->GetSoTC();
	}
	return TongDiemTheoHeSo / TongTC;
}