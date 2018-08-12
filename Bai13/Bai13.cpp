#include<iostream>
#include<conio.h>
#include"CSinhVien.h"
using namespace std;
void main()
{
	CSinhVien* sv = new CSinhVien();
	cout << "Nhap thong tin sinh vien" << endl;
	sv->Nhap();
	cout << "Diem trung binh: " << sv->TinhDiemTrungBinh();
	delete sv;
	_getch();
}