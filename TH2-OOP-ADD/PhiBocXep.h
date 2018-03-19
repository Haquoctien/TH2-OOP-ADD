#include "include.h"
#include "DanhSachLoaiXe.h"
class PhiBocXep
{
private:
	string loaiXe;
	int giaTien;
public:
	PhiBocXep();
	~PhiBocXep();
	PhiBocXep(const PhiBocXep&);
	void nhap();
	void nhap(DanhSachLoaiXe ds);
	void xuat() const;
	string getLoaiXe() const;
	int getGiaTien() const;
};

