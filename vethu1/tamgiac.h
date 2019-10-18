#pragma once
#include"Hinh.h"
class tamgiac:public Hinh
{
	private:
		float x1, y1, x2, y2;
public:
	
	tamgiac(CPoint p1, CPoint p2);
	tamgiac(int mx1, int my1, int mx2, int my2);
	void thietlap(int mx1, int my1, int mx2, int my2);
	int tronghinh(CPoint p);
	CPoint getA();
	CPoint getB();
	
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


	void draw(CClientDC* pdc);
	tamgiac(void);
	~tamgiac(void);
};

