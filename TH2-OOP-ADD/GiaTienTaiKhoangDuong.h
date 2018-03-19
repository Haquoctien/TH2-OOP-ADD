#pragma once
#include "include.h"
class GiaTienTaiKhoangDuong
{
private:
	int tuKm, denKm, gia;
public:
	GiaTienTaiKhoangDuong();
	~GiaTienTaiKhoangDuong();
	void setTuKm(int);
	void setDenKm(int);
	void setGia(int);
	void nhap();
	void xuat();
};

