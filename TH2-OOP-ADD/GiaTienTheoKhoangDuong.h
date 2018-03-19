#pragma once
#include "include.h"
#include "GiaTienTaiKhoangDuong.h"
class GiaTienTheoKhoangDuong
{
private:
	int soLuong;
	GiaTienTaiKhoangDuong * ds;

public:
	GiaTienTheoKhoangDuong();
	~GiaTienTheoKhoangDuong();
	void nhap();
	void xuat();
};

