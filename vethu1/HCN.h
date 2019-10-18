#pragma once
#include "Hinh.h"
class HCN:public Hinh
{
	private:
	int x1, x2, y1, y2;
public:
	HCN(CPoint p1, CPoint p2);
	HCN(int x1, int y1, int x2, int y2);
	void thietlap(int x1, int y1, int x2, int y2);
	CPoint getA();
	CPoint getC();
	void draw(CClientDC * pdc);
	int tronghinh(CPoint p);

	void dichuyenlen();
	void dichuyenxuong();
	void dichuyentrai();
	void dichuyenphai();
	void phongto();
	void thunho();

	void butmoi(CClientDC*pdc);
	void xoahinh(CClientDC*pdc);
	float dientich();
	float chuvi();
	HCN(void);
	~HCN(void);

	
};

