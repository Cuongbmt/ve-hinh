#include "StdAfx.h"
#include "Dongxu.h"
#include"math.h"

Dongxu::Dongxu()
{
}
Dongxu::Dongxu(CPoint p1, CPoint p2)
{
	x1 = p1.x;
	y1 = p1.y;
	x2 = p2.x;
	y2 = p2.y;
}
void Dongxu::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
}
void Dongxu::draw(CClientDC*pdc)
{
	dx1.thietlap(x1, y1, x2, y2);
	dx2.thietlap(x1 + 30, y1 + 30, x2 - 30, y2 - 30);
	dx1.draw(pdc);
	dx2.draw(pdc);
}

int Dongxu::tronghinh(CPoint p)
{
	int kq = 0;
	if (p.x > x1 && p.y > y1 && p.x < x2 && p.y < y2)
	{
		kq = 1;
	}
	return kq;
}
float Dongxu::dientich()
{
	float kq, r;
	r = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)) / 2;
	kq = 3.14 * r * r;
	return kq;
}
float Dongxu::chuvi()
{
	float kq = 0, r;
	r = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) / 2);
	kq = 3.14 * r * 2;
	return kq;
}

Dongxu::~Dongxu()
{
}
