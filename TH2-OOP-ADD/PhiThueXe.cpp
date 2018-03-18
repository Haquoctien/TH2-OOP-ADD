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
	this->giaTien = other.giaTien;
}

void PhiThueXe::nhap()
{
	cout << "Nhap loai xe: ";
	getline(cin, loaiXe);
	cout << "Nhap lan luot gia, tu km, den km";
	cin >> giaTien >> tuKm >> denKm;
	cin.ignore();
}

void PhiThueXe::xuat() const
{
	cout << "Xuat theo dinh dang:\n\tLoai xe, phi thue, tu km, den km" << endl;
	cout << "\t" << loaiXe << ", " << giaTien << ", " << tuKm << ", " << denKm << endl;
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

int PhiThueXe::getGiaTien() const
{
	return giaTien;
}
