#include "include.h"
#include "DanhSachLoaiXe.h"
// TODO: cai dat lai lop nay de chia gia ra thanh tung chang
class PhiThueXe
{
private:
	string loaiXe;
	int tuKm, denKm, giaTien;
public:
	PhiThueXe();
	~PhiThueXe();
	PhiThueXe(const PhiThueXe&);
	void nhap();
	void nhap(DanhSachLoaiXe ds);
	void xuat() const;
	string getLoaiXe() const;
	int getTuKM() const;
	int getDenKm() const;
	int getGiaTien() const;
};

