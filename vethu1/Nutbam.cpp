#include "StdAfx.h"
#include "Nutbam.h"


Nutbam::Nutbam(void)
{
}

void Nutbam::draw(CClientDC *pdc)
{
	// TODO: Add your implementation code here.
	pdc->Rectangle(getA().x, getA().y, getC().x, getC().y);
	pdc->TextOutW(getA().x +18, getA().y + 18, chu);
}

Nutbam::~Nutbam(void)
{
}
