#pragma once
#include "PhiBocXep.h"
#include "DanhSachLoaiXe.h"
class BangGiaPhiBocXep
{
private:
	int soLuong;
	PhiBocXep * ds;
public:
	BangGiaPhiBocXep();
	~BangGiaPhiBocXep();
	void nhap();
	void nhap(DanhSachLoaiXe ds);
	void xuat() const;
};

