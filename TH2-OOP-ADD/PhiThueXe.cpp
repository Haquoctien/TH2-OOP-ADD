#include "PhiThueXe.h"

PhiThueXe::PhiThueXe()
{
}


PhiThueXe::~PhiThueXe()
{
}

PhiThueXe::PhiThueXe(const PhiThueXe &other)
{
	this->loaiXe = other.loaiXe;
	this->gia = other.gia;
}

void PhiThueXe::nhap()
{
	cout << "Nhap loai xe: ";
	getline(cin, loaiXe);
	gia.nhap();
}

void PhiThueXe::nhap(DanhSachLoaiXe ds)
{
	int flag = 0;
	do {
		if (flag)
			cout << "Loai xe khong ton tai trong danh sach, vui long nhap lai: ";
		else
			cout << "Nhap loai xe: ";
		getline(cin, loaiXe);
		flag++;
	} while (!ds.isIn(loaiXe));
	cout << "Nhap lan luot gia, tu km, den km";
	gia.nhap();
}

void PhiThueXe::xuat()
{
	cout << "Ten loai xe: " << loaiXe << endl;
	cout << "Bang gia theo quang duong: " << endl;
	gia.xuat();
}

string PhiThueXe::getLoaiXe() const
{
	return loaiXe;
}

GiaTienTheoKhoangDuong PhiThueXe::getGia() const
{
	return gia;
}
