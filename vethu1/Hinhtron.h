#pragma once
#include"Hinh.h"

class Hinhtron:public Hinh
{
private:float x1, y1, x2, y2;

public:
	Hinhtron(CPoint p1, CPoint p2);
	Hinhtron(int mx1, int my1, int mx2, int my2);
	void thietlap(int mx1, int my1, int mx2, int my2);
	CPoint getA();
	CPoint getC();
	void draw(CClientDC*pdc);
	float dientich();
	float chuvi();
	void dichuyenlen();
	void dichuyenxuong();
	void dichuyentrai();
	void dichuyenphai();
	void phongto();
	void thunho();
	int tronghinh(CPoint p);
	void butmoi(CClientDC*pdc);
	void xoahinh(CClientDC*pdc);
	Hinhtron();
	~Hinhtron();
};

