#pragma once
#include "include.h"
#include "PhiThueXe.h"
class BangGiaPhiThueXe
{
private:
	int soLuong;
	PhiThueXe * ds;
public:
	BangGiaPhiThueXe();
	~BangGiaPhiThueXe();
	void nhap();
	void xuat() const;
};

