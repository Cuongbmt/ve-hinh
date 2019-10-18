#include "StdAfx.h"
#include "Hinhtron.h"
#include"math.h"

Hinhtron::Hinhtron()
{
}


Hinhtron::Hinhtron(CPoint p1, CPoint p2)
{
	point1.x = p1.x;
	point1.y = p1.y;
	point2.x = p2.x;
	point2.y = p2.y;
	x1 = p1.x;
	x2 = p2.x;
	y1 = p1.y;
	y2 = p2.y;
}
Hinhtron::Hinhtron(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
}

void Hinhtron::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	x2 = mx2;
	y1 = my1;
	y2 = my2;
}

void Hinhtron::draw(CClientDC *pdc)
{
	pdc->Ellipse(x1, y1, x2, y2);
	CString dt, cv,a,s;
	a = "Dientich";
	pdc->TextOutW(800, 20, a);
	dt.Format(_T("%f"), dientich());
	pdc->TextOutW(880, 20, dt);
	s = "Chuvi: ";
	pdc->TextOutW(800, 55, s);
	cv.Format(_T("%f"), chuvi());
	pdc->TextOutW(880, 55, cv);

}

CPoint Hinhtron::getA()
{
	return CPoint(x1, y1);
}

CPoint Hinhtron::getC()
{
	return CPoint(x2, y2);
}

int Hinhtron::tronghinh(CPoint p)
{
	int kq = 0;
	if (p.x >= x1 && p.x <= x2 && p.y >= y1 && p.y <= y2)
		kq = 1;
	return kq;
}
float Hinhtron::dientich()
{
	float kq;
	kq = (sqrt((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)) / 2) *(sqrt((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)) / 2) * 3.14;
	return kq;
}

float Hinhtron::chuvi()
{
	int kq;
	kq = (sqrt((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)) / 2) * 2 * 3.14;
	return kq;
}
void Hinhtron::dichuyenlen()
{
	y1 -= 10;
	y2 -= 10;
}
void Hinhtron::dichuyenxuong()
{
	y1 += 10;
	y2 += 10;
}
void Hinhtron::dichuyentrai()
{
	x1 -= 10;
	x2 -= 10;
}
void Hinhtron::dichuyenphai()
{
	x1 += 10;
	x2 += 10;
}
void Hinhtron::phongto()
{
	x1 -= 1;
	y1 -= 1;
	x2 += 1;
	x2 += 1;


}
void Hinhtron::thunho()
{
	x1 += 1;
	y1 += 1;
	x2 -= 1;
	x2 -= 1;


}
void Hinhtron::butmoi(CClientDC*pdc)
{
	CPen*pen = new CPen(PS_SOLID, 1, RGB(0, 0, 0));
	pdc->SelectObject(pen);
	draw(pdc);
}
void Hinhtron::xoahinh(CClientDC*pdc)
{
	CPen*penA = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	pdc->SelectObject(penA);
	draw(pdc);
}
Hinhtron::~Hinhtron()
{
}
