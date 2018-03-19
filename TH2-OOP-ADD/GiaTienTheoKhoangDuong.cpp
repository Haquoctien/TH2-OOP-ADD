#include "GiaTienTheoKhoangDuong.h"



GiaTienTheoKhoangDuong::GiaTienTheoKhoangDuong()
{
}


GiaTienTheoKhoangDuong::~GiaTienTheoKhoangDuong()
{
}

void GiaTienTheoKhoangDuong::nhap()
{
	cout << "Nhap so khoang duong can chia: ";
	cin >> soLuong;
	ds = new GiaTienTaiKhoangDuong[soLuong];
	for (int i = 0, kmTu, kmDen, gia; i < soLuong; i++)
	{
		int flag = 0;
		do {
			if (flag)
				cout << "Gia tri khong hop le, nhap lai: ";
			else
				cout << "Nhap km tu, km den va gia cua khoang chia thu " << i + 1 << ": ";
			cin >> kmTu >> kmDen >> gia;
			cin.ignore();
		} while (kmDen - kmTu <= 0 || gia <= 0);
		ds[i].setDenKm(kmDen);
		ds[i].setTuKm(kmTu);
		ds[i].setGia(gia);
	}
}

void GiaTienTheoKhoangDuong::xuat()
{
	for (int i = 0; i < soLuong; i++)
		ds[i].xuat();
}
