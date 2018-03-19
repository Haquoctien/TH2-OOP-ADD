#pragma once
#include "PhiThueXe.h"
#include "DanhSachLoaiXe.h"
class BangGiaPhiThueXe
{
private:
	int soLuong;
	PhiThueXe * ds;
public:
	BangGiaPhiThueXe();
	~BangGiaPhiThueXe();
	void nhap();
	void nhap(DanhSachLoaiXe ds);
	void xuat() const;
};

