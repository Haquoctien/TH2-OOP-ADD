#include "DanhSachLoaiXe.h"



DanhSachLoaiXe::DanhSachLoaiXe()
{
	soLuong = 0;
	ds = nullptr;
}


DanhSachLoaiXe::~DanhSachLoaiXe()
{
	if (ds != nullptr)
		delete[] ds;
}

void DanhSachLoaiXe::nhap()
{
	cout << "Nhap so loai xe can nhap vao danh sach: ";
	cin >> soLuong;
	cin.ignore();
	ds = new string[soLuong];
	for (int i = 0; i < soLuong; i++)
	{
		cout << "Nhap loai xe thu" << i + 1 << ": ";
		getline(cin, ds[i]);
	}
}

void DanhSachLoaiXe::xuat()
{
	cout << "Danh sach co " << soLuong << " loai xe: " << endl;
	for (int i = 0; i < soLuong; i++)
		cout << ds[i] << endl;
}

bool DanhSachLoaiXe::isIn(string loaiXe)
{
	for (int i = 0; i < soLuong; i++)
		if (ds[i].compare(loaiXe) == 0)
			return true;
	return false;;
}
