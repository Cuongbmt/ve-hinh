#pragma once
#include "HCN.h"
class Nutbam:public HCN
{
public:
	CString chu;
	Nutbam(void);
	~Nutbam(void);
	void draw(CClientDC *pdc);
};

