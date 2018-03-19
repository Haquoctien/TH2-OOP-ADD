#pragma once
#include "PhiBocXep.h"
class BangGiaPhiBocXep
{
private:
	int soLuong;
	PhiBocXep * ds;
public:
	BangGiaPhiBocXep();
	~BangGiaPhiBocXep();
	void nhap();
	void xuat() const;
};

