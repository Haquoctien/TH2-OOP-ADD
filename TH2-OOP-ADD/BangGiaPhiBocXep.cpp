#include "BangGiaPhiBocXep.h"



BangGiaPhiBocXep::BangGiaPhiBocXep()
{
	soLuong = 0;
	ds = nullptr;
}


BangGiaPhiBocXep::~BangGiaPhiBocXep()
{
	if (ds != nullptr)
		delete[] ds;
}

void BangGiaPhiBocXep::nhap()
{
	cout << "Nhap so luong phi boc xep can nhap: ";
	cin >> soLuong;
	cin.ignore();
	ds = new PhiBocXep[soLuong];
	for (int i = 0; i < soLuong; i++)
		ds[i].nhap();
}

void BangGiaPhiBocXep::xuat() const
{
	cout << "Xuat danh sach phi boc xep: " << endl;
	for (int i = 0; i < soLuong; i++)
		ds[i].xuat();
}
