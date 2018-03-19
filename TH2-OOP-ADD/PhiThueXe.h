#include "include.h"
#include "DanhSachLoaiXe.h"
#include "GiaTienTheoKhoangDuong.h"
// TODO: cai dat lai lop nay de chia gia ra thanh tung chang
class PhiThueXe
{
private:
	string loaiXe;
	GiaTienTheoKhoangDuong gia;
public:
	PhiThueXe();
	~PhiThueXe();
	PhiThueXe(const PhiThueXe&);
	void nhap();
	void nhap(DanhSachLoaiXe ds);
	void xuat();
	string getLoaiXe() const;
	GiaTienTheoKhoangDuong getGia() const;
};

