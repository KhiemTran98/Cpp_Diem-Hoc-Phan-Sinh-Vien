#include<string>
#include"CDate.h"
#include"CHocPhan.h"
using namespace std;
class CSinhVien
{
private:
	string HoTen;
	CDate* NTNS;
	CHocPhan* *DSHP;
	int SoHP;
public:
	~CSinhVien();
	void Nhap();
	double TinhDiemTrungBinh();
};