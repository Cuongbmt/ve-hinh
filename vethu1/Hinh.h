#pragma once
class Hinh
{
public:
	Hinh(void);
	CPoint point1, point2;
	virtual void draw(CClientDC *pdc);
	
	virtual int tronghinh(CPoint p1);
	
	virtual float dientich();
	virtual float chuvi();

	virtual void dichuyenlen();
	virtual void dichuyenxuong();
	virtual void dichuyentrai();
	virtual void dichuyenphai();

	virtual void phongto();
	virtual void thunho();

	virtual void butmoi(CClientDC*pdc);
	virtual void xoahinh(CClientDC*pdc);
	~Hinh(void);
};

