#pragma once
#include"Hinh.h"
#include"Hinhtron.h"
class Dongxu:public Hinh
{
public:
	Hinhtron dx1, dx2;
	
	float x1, y1, x2, y2;
	Dongxu();
	~Dongxu();
	Dongxu(CPoint p1, CPoint p2);
	void thietlap(int mx1, int my1, int mx2, int my2);
	void draw(CClientDC*pdc);
	int tronghinh(CPoint p);
	float chuvi();
	float dientich();
};

