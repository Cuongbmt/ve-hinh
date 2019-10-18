#include "StdAfx.h"
#include "ngoisao.h"


ngoisao::ngoisao()
{
}
ngoisao::ngoisao(CPoint p1, CPoint p2)
{
	x1 = p1.x;
	y1 = p1.y;
	x2 = p2.x;
	y2 = p2.y;
}
void ngoisao::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;

}
void ngoisao::draw(CClientDC *pdc)
{
	x3 = x2 - (x2 - x1) / 8; y3 = y1;
	x4 = x1 + (x2 - x1) / 8; y4 = y2;
	x5 = ((x2 + x1) / 2); y5 = y1 - (y2 - y1) / 50;
	x6 = x2 + (x2 - x1) / 9; y6 = (y2 + y1) / 2.2;
	x7 = x1 - (x2 - x1) / 9; y7 = y6;
	pdc->MoveTo(x5, y5); pdc->LineTo(x2, y2);
	pdc->MoveTo(x2, y2); pdc->LineTo(x7, y7);
	pdc->MoveTo(x7, y7); pdc->LineTo(x6, y6);
	pdc->MoveTo(x6, y6); pdc->LineTo(x4, y4);
	pdc->MoveTo(x4, y4); pdc->LineTo(x5, y5);
}
int ngoisao::tronghinh(CPoint p)
{
	int kq = 0;
	if (p.x > x1 && p.y > y1 && p.x < x2 && p.y < y2)
	{
		kq = 1;
	}
	return kq;
}


void ngoisao::dichuyenlen()
{
	y1 -= 10;
	y2 -= 10;
}
void ngoisao::dichuyenxuong()
{
	y1 += 10;
	y2 += 10;
}
void ngoisao::dichuyentrai()
{
	x1 -= 10;
	x2 -= 10;
}
void ngoisao::dichuyenphai()
{
	x1 += 10;
	x2 += 10;
}
void ngoisao::phongto()
{
	x1 -= 1;
	y1 -= 1;
	x2 += 1;
	x2 += 1;


}
void ngoisao::thunho()
{
	x1 += 1;
	y1 += 1;
	x2 -= 1;
	x2 -= 1;


}
void ngoisao::butmoi(CClientDC*pdc)
{
	CPen*pen = new CPen(PS_SOLID, 1, RGB(0, 0, 0));
	pdc->SelectObject(pen);
	draw(pdc);
}
void ngoisao::xoahinh(CClientDC*pdc)
{
	CPen*penA = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	pdc->SelectObject(penA);
	draw(pdc);
}

ngoisao::~ngoisao()
{
}
