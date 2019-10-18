#pragma once
#include"hinh.h"
class Hinhvuong:public Hinh
{
private:
	float x1, x2, y1, y2;
public:
	Hinhvuong();
	
	~Hinhvuong();
	Hinhvuong(CPoint p1, CPoint p2);
	int tronghinh(CPoint p);
	
	void draw(CClientDC *pdc);
	void thietlap(int mx1, int my1, int mx2, int my2);
	float dientich();
	float chuvi();

	void dichuyenlen();
	void dichuyenxuong();
	void dichuyentrai();
	void dichuyenphai();
	void phongto();
	void thunho();
	void butmoi(CClientDC*pdc);
	void xoahinh(CClientDC*pdc);
};

