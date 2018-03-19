#include "BangGiaPhiThueXe.h"



BangGiaPhiThueXe::BangGiaPhiThueXe()
{
	soLuong = 0;
	ds = nullptr;
}


BangGiaPhiThueXe::~BangGiaPhiThueXe()
{
	if (ds != nullptr)
		delete[] ds;
}

void BangGiaPhiThueXe::nhap()
{
	cout << "Nhap so phi thue xe can nhap vao danh sach: ";
	cin >> soLuong;
	cin.ignore();
	ds = new PhiThueXe[soLuong];
	for (int i = 0; i < soLuong; i++)
		ds[i].nhap();
}

void BangGiaPhiThueXe::xuat() const
{
	cout << "Xuat bang gia phi thue xe: " << endl;
	for (int i = 0; i < soLuong; i++)
		ds[i].xuat();
}
