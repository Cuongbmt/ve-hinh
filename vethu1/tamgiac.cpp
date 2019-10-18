#include "StdAfx.h"
#include "tamgiac.h"
#include"math.h"

tamgiac::tamgiac(void)
{
}
tamgiac::tamgiac(CPoint p1,CPoint p2)
{
	point1.x=p1.x;
	point1.y = p1.y;
	point2.x = p2.x;
	point2.y = p2.y;
	x1 = p1.x;
	x2 = p2.x;
	y1 = p1.y;
	y2 = p2.y;
	
}
tamgiac::tamgiac(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
}
void tamgiac::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	x2 = mx2;
	
	y1 = my1;
	y2 = my2;
	
}
CPoint tamgiac::getA()
{
	return CPoint(x1, y1);
}
CPoint tamgiac::getB()
{
	return CPoint(x2, y2);
}


void tamgiac::dichuyenlen()
{
	y1 -= 10;
	y2 -= 10;
}
void tamgiac::dichuyenxuong()
{
	y1 += 10;
	y2 += 10;
}
void tamgiac::dichuyentrai()
{
	x1 -= 10;
	x2 -= 10;
}
void tamgiac::dichuyenphai()
{
	x1 += 10;
	x2 += 10;
}
void tamgiac::phongto()
{
	x1 -= 1;
	y1 -= 1;
	x2 += 1;
	x2 += 1;


}
void tamgiac::thunho()
{
	x1 += 1;
	y1 += 1;
	x2 -= 1;
	x2 -= 1;


}
void tamgiac::butmoi(CClientDC*pdc)
{
	CPen*pen = new CPen(PS_SOLID, 1, RGB(0, 0, 0));
	pdc->SelectObject(pen);
	draw(pdc);
}
void tamgiac::xoahinh(CClientDC*pdc)
{
	CPen*penA = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	pdc->SelectObject(penA);
	draw(pdc);
}


void tamgiac::draw(CClientDC* pdc)
{
	pdc->MoveTo(x1, y1);
	pdc->LineTo(x2, y2);
	pdc->LineTo(x2 - 2 * (x2 - x1), y2);
	pdc->LineTo(x1, y1);
	
	CString str, cv, a, s;
	a = "Dien tich: ";
	pdc->TextOutW(800, 20, a);
	str.Format(_T("%f"), dientich());
	pdc->TextOutW(880, 20, str);
	a = "Chu vi: ";
	pdc->TextOutW(800, 55, a);
	cv.Format(_T("%f"), chuvi());
	pdc->TextOutW(880, 55, cv);
}
float tamgiac::dientich()
{
	float kq;
	kq = (x2 - x1)*(y2 - y1) + 1987;
	return kq;
}
float tamgiac::chuvi()
{
	int kq;
	kq = (x2 - 2 * (x2 - x1) - x1 + y2 - y1 + 3567) * 4;
	return kq; 
}

int tamgiac::tronghinh(CPoint p)
{
	int kq = 0;
	if (p.x >= x2 - 2 * (x2 - x1) && p.x <= x2 && p.y >= y1 && p.y <= y2)
		kq = 1;
	return kq;
}


tamgiac::~tamgiac(void)
{
}
