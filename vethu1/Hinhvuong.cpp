#include "StdAfx.h"
#include "Hinhvuong.h"


Hinhvuong::Hinhvuong()
{
}
Hinhvuong::Hinhvuong(CPoint p1, CPoint p2)
{
	x1 = p1.x;
	y1 = p1.y;
	x2 = p2.x;
	y2 = p2.y;

}
void Hinhvuong::thietlap(int mx1, int my1, int mx2, int my2)
{
	x1 = mx1;
	y1 = my1;
	x2 = mx2;
	y2 = my2;
}
void Hinhvuong::draw(CClientDC *pdc)
{
	int a, b, c, d;
	a = x2 - x1;
	b = y2 - y1;

	c = x1 - x2;
	d = y1 - y2;
	if (y1 < y2 && x1 < x2)
	{
		if (a > b)
		{
			pdc->Rectangle(x1, y1, x1 + b, y2);
		}
		else
		{
			pdc->Rectangle(x1, y1, x2, y1 + a);
		}
	}
	else
	{
		if (y1 < y2 && x1 > x2)
		{
			if (c > b)
			{
				pdc->Rectangle(x1, y1, x1 - b, y2);
			}
			else
			{
				pdc->Rectangle(x1, y1, x2, y1 + c);
			}
		}
		else
		{
			if (y1 > y2 && x1 > x2)
			{
				if (c > d)
				{
					pdc->Rectangle(x2, y2, x2 + d, y1);
				}
				else
				{
					pdc->Rectangle(x2, y2, x1, y2 + c);
				}
			}
			else
			{
				if (a > d)
				{
					pdc->Rectangle(x2, y2, x2 - d, y1);
				}
				else
				{
					pdc->Rectangle(x2, y2, x1, y2 + a);
				}
			}
		}
	}
	CString dt, t, cv, k;
	t = "Dien tich: ";
	pdc->TextOutW(800, 20, t);
	dt.Format(_T("%d"), dientich());

	pdc->TextOutW(880, 20, dt);

	k = "Chu vi: ";
	pdc->TextOutW(800, 55, k);
	cv.Format(_T("%d"), chuvi());

	pdc->TextOutW(880, 55, cv);
}
float Hinhvuong::dientich()
{
	// TODO: Add your implementation code here.
	int kq=0;
	kq = (x2 - x1)*(y2 - y1);
	return kq;
}

float Hinhvuong::chuvi()
{
	// TODO: Add your implementation code here.
	int kq = 0;
	kq = ((x2 - x1) + (y2 - y1)) * 2;
	return kq;
}
int Hinhvuong::tronghinh(CPoint p)
{
	int kq = 0;
	if (p.x > x1 && p.y > y1 && p.x < x2 && p.y < y2)
	{
		kq = 1;
	}
	return kq;
}
void Hinhvuong::dichuyenlen()
{
	y1 -= 10;
	y2 -= 10;
}
void Hinhvuong::dichuyenxuong()
{
	y1 += 10;
	y2 += 10;
}
void Hinhvuong::dichuyentrai()
{
	x1 -= 10;
	x2 -= 10;
}
void Hinhvuong::dichuyenphai()
{
	x1 += 10;
	x2 += 10;
}
void Hinhvuong::phongto()
{
	x1 -= 1;
	y1 -= 1;
	x2 += 1;
	x2 += 1;


}
void Hinhvuong::thunho()
{
	x1 += 1;
	y1 += 1;
	x2 -= 1;
	x2 -= 1;


}
void Hinhvuong::butmoi(CClientDC*pdc)
{
	CPen*pen = new CPen(PS_SOLID, 1, RGB(0, 0, 0));
	pdc->SelectObject(pen);
	draw(pdc);
}
void Hinhvuong::xoahinh(CClientDC*pdc)
{
	CPen*penA = new CPen(PS_SOLID, 1, RGB(255, 255, 255));
	pdc->SelectObject(penA);
	draw(pdc);
}
Hinhvuong::~Hinhvuong()
{
}
