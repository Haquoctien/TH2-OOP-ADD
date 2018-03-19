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

void GiaTienTaiKhoangDuong::nhap()
{
	int flag = 0, kmTu, kmDen, gia;
	do {
		if (flag)
			cout << "Gia tri khong hop le, nhap lai: ";
		else
			cout << "Nhap km tu, km den va gia: ";
		cin >> kmTu >> kmDen >> gia;
		cin.ignore();
	} while (kmDen - kmTu <= 0 || gia <= 0);
	setDenKm(kmDen);
	setTuKm(kmTu);
	setGia(gia);
}


void GiaTienTaiKhoangDuong::xuat()
{
	cout << "\t" << tuKm << " -> " << denKm << " : " << gia << endl;
}
