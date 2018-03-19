#include "PhiBocXep.h"

PhiBocXep::PhiBocXep()
{
}


PhiBocXep::~PhiBocXep()
{
}

PhiBocXep::PhiBocXep(const PhiBocXep &other)
{
	this->loaiXe = other.loaiXe;
	this->giaTien = other.giaTien;
}

void PhiBocXep::nhap()
{
	cout << "Nhap loai xe: ";
	getline(cin, loaiXe);
	cout << "Nhap gia tien: ";
	cin >> giaTien;
	cin.ignore();
}

void PhiBocXep::nhap(DanhSachLoaiXe ds)
{
	ds.xuat();
	int flag = 0;
	do {
		if (flag)
			cout << "Loai xe khong ton tai trong danh sach, vui long nhap lai: ";
		else
			cout << "Nhap loai xe: ";
		getline(cin, loaiXe);
		flag++;
	} while (!ds.isIn(loaiXe));
	cout << "Nhap gia tien: ";
	cin >> giaTien;
	cin.ignore();
}

void PhiBocXep::xuat() const
{
	cout << "Xuat theo dinh dang:\n\tLoai xe, gia";
	cout << "\t" << loaiXe << ", " << giaTien << endl;
}

string PhiBocXep::getLoaiXe() const
{
	return loaiXe;
}

int PhiBocXep::getGiaTien() const
{
	return giaTien;
}
