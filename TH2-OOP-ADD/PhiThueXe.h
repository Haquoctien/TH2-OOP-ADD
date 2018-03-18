#pragma once
#include "Date.h"
class PhiThueXe
{
private:
	string loaiXe;
	int tuKm, denKm, giaTien;
public:
	PhiThueXe();
	~PhiThueXe();
	PhiThueXe(const PhiThueXe&);
	void nhap();
	void xuat() const;
	string getLoaiXe() const;
	int getTuKM() const;
	int getDenKm() const;
	int getGiaTien() const;
};

