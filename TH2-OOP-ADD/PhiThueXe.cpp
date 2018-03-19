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
	this->tuKm = other.tuKm;
	this->denKm = other.denKm;
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
	cout << loaiXe;
	gia.xuat();
}

string PhiThueXe::getLoaiXe() const
{
	return loaiXe;
}

int PhiThueXe::getTuKM() const
{
	return tuKm;
}

int PhiThueXe::getDenKm() const
{
	return denKm;
}

GiaTienTheoKhoangDuong PhiThueXe::getGia() const
{
	return gia;
}
