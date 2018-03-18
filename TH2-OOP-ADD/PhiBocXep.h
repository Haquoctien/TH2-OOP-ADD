#include "include.h"
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
	void xuat() const;
	string getLoaiXe() const;
	int getGiaTien() const;
};

