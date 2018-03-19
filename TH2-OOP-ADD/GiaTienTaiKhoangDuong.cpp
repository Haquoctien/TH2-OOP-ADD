#include "GiaTienTaiKhoangDuong.h"



GiaTienTaiKhoangDuong::GiaTienTaiKhoangDuong()
{
}


GiaTienTaiKhoangDuong::~GiaTienTaiKhoangDuong()
{
}

void GiaTienTaiKhoangDuong::setTuKm(int x)
{
	tuKm = x;
}

void GiaTienTaiKhoangDuong::setDenKm(int x)
{
	denKm = x;
}

void GiaTienTaiKhoangDuong::setGia(int x)
{
	gia = x;
}


void GiaTienTaiKhoangDuong::xuat()
{
	cout << "\t" << tuKm << " -> " << denKm << " : " << gia << endl;
}
