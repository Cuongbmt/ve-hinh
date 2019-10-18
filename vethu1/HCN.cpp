#include "StdAfx.h"
#include "HCN.h"


HCN::HCN(void)
{
}
HCN::HCN(CPoint p1, CPoint p2)
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
HCN::HCN(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
}
void HCN::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
}
void HCN::draw(CClientDC *pdc)
{
	pdc->Rectangle(x1, y1, x2, y2);
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
CPoint HCN::getA()
{
	return CPoint(x1, y1);
}
CPoint HCN::getC()
{
	return CPoint(x2, y2);
}
int HCN::tronghinh(CPoint p)
{
	int kq = 0;
	if (p.x >= x1 && p.x <= x2 && p.y >= y1 && p.y <= y2)
		kq = 1;
	return kq;
}
void HCN::dichuyenlen()
{
	y1 -= 10;
	y2 -= 10;
}
void HCN::dichuyenxuong()
{
	y1 += 10;
	y2 += 10;
}
void HCN::dichuyentrai()
{
	x1 -= 10;
	x2 -= 10;
}
void HCN::dichuyenphai()
{
	x1 += 10;
	x2 += 10;
}
void HCN::phongto()
{
	x1 -= 1;
	y1 -= 1;
	x2 += 1;
	x2 += 1;


}
void HCN::thunho()
{
	x1 += 1;
	y1 += 1;
	x2 -= 1;
	x2 -= 1;


}
void HCN::butmoi(CClientDC*pdc)
{
	CPen*pen = new CPen(PS_SOLID, 1, RGB(0, 0, 0));
	pdc->SelectObject(pen);
	draw(pdc);
}
void HCN::xoahinh(CClientDC*pdc)
{
	CPen*penA = new CPen(PS_SOLID, 1, RGB(255,255,255));
	pdc->SelectObject(penA);
	draw(pdc);
}
float HCN::dientich()
{
	// TODO: Add your implementation code here.
	float kq = 0;
	kq = (x1 - x2)*(y1 - y2);
	return kq;
}
float HCN::chuvi()
{
	int kq;
	kq = ((x2 - x1) + (y1 - y2)) * 2;
	return kq;
}
HCN::~HCN(void)
{
}
