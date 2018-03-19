#pragma once
#include "include.h"
class DanhSachLoaiXe
{
private:
	int soLuong;
	string * ds;
public:
	DanhSachLoaiXe();
	~DanhSachLoaiXe();
	void nhap();
	void xuat();
	bool isIn(string);
};

