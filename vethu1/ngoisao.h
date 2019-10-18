#pragma once
#include"Hinh.h"
class ngoisao:public Hinh
{
public:
	int x1, x2, y1, y2;
	int x3, y3, x4, y4;
	int x5, y5;
	int x6, y6;
	int x7, y7;
	ngoisao(CPoint p1, CPoint p2);
	void thietlap(int mx1, int my1, int mx2, int my2);
	int tronghinh(CPoint p);
	void draw(CClientDC*pdc);

	void dichuyenlen();
	void dichuyenxuong();
	void dichuyentrai();
	void dichuyenphai();
	void phongto();
	void thunho();
	void butmoi(CClientDC*pdc);
	void xoahinh(CClientDC*pdc);
	ngoisao();
	~ngoisao();
};

