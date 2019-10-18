
// vethu1View.cpp : implementation of the Cvethu1View class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "vethu1.h"
#endif

#include "vethu1Doc.h"
#include "vethu1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cvethu1View

IMPLEMENT_DYNCREATE(Cvethu1View, CView)

BEGIN_MESSAGE_MAP(Cvethu1View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Cvethu1View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// Cvethu1View construction/destruction

Cvethu1View::Cvethu1View()
{
	// TODO: add construction code here
	
	
	

	n = 0;
	mau = 0;

	
}

Cvethu1View::~Cvethu1View()
{
}

BOOL Cvethu1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// Cvethu1View drawing

void Cvethu1View::OnDraw(CDC* /*pDC*/)
{
	Cvethu1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	pdc = new CClientDC(this);
	khung.thietlap(60, 10, 1100, 120);
	khung.draw(pdc);

	hcn.thietlap(100, 30, 150, 60);
	hcn.draw(pdc);
	pdc->TextOutW(115, 35, CString("HCN"));

	tg.thietlap(160, 30, 250, 60);
	tg.draw(pdc);
	pdc->TextOutW(175, 35, CString("Tamgiac"));

	hv.thietlap(260, 30, 360 ,60);
	hv.draw(pdc);
	pdc->TextOutW(275, 35,CString("Hinhvuong"));

	ht.thietlap(370, 30, 450, 60);
	ht.draw(pdc);
	pdc->TextOutW(385, 35, CString("Hinhtron"));
	
	dx.thietlap(460, 30, 540, 60);
	dx.draw(pdc);
	pdc->TextOutW(475, 35, CString("Dongxu "));


	ns.thietlap(550, 30, 650, 60);
	ns.draw(pdc);
	pdc->TextOutW(560, 35, CString("Ngoisao "));



	xoa.thietlap(120, 70, 160, 100);
	xoa.draw(pdc);
	pdc->TextOutW(125, 75, CString("Xoa "));

	pto.thietlap(170, 70, 240, 100);
	pto.draw(pdc);
	pdc->TextOutW(175, 75, CString("Phong to "));

	tnho.thietlap(250, 70, 320, 100);
	tnho.draw(pdc);
	pdc->TextOutW(260, 75, CString("Thu nho "));

	len.thietlap(330, 70, 390, 100);
	len.draw(pdc);
	pdc->TextOutW(340, 75, CString("dc len "));


	xuong.thietlap(400, 70, 480, 100);
	xuong.draw(pdc);
	pdc->TextOutW(410, 75, CString("dc xuong "));

	trai.thietlap(490, 70, 550, 100);
	trai.draw(pdc);
	pdc->TextOutW(495, 75, CString("dc trai "));

	phai.thietlap(560, 70,620 , 100);
	phai.draw(pdc);
	pdc->TextOutW(565, 75, CString("dc phai "));

	// TODO: add draw code for native data here
}


// Cvethu1View printing


void Cvethu1View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Cvethu1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void Cvethu1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void Cvethu1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void Cvethu1View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void Cvethu1View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// Cvethu1View diagnostics

#ifdef _DEBUG
void Cvethu1View::AssertValid() const
{
	CView::AssertValid();
}

void Cvethu1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cvethu1Doc* Cvethu1View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cvethu1Doc)));
	return (Cvethu1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cvethu1View message handlers


void Cvethu1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
//	if (point.y > 100 && point.x > 100)
	{
		p2.x = point.x;
		p2.y = point.y;
	}

	



	if (hcn.tronghinh(point) == 1)
	{
		control = 1;
		
	}
	else
		if (tg.tronghinh(point) == 1)
		{
			control = 2;
		
		}
		else
			if (hv.tronghinh(point) == 1)
			{
				control = 3;

			}
			else
			
				if (ht.tronghinh(point) == 1)
				{
					control = 4;
				
				}
				else
					if (dx.tronghinh(point) == 1)
					{
						control = 5;
					
					}
					else
						if (ns.tronghinh(point) == 1)
						{
							control = 6;
							
						}
						else
							if (pto.tronghinh(point) == 1)
							{
								control = 7;
							}
							else
								if (tnho.tronghinh(point) == 1)
								{
									control = 8;
								}
								else
									if (len.tronghinh(point) == 1)
									{
										control = 9;
									}
									else
										if (xuong.tronghinh(point) == 1)
										{
											control = 10;
										}
										else
											if (trai.tronghinh(point) == 1)
											{
												control = 11;
											}
											else
												if (phai.tronghinh(point) == 1)
												{
													control = 12;
												}
												else
													if (xoa.tronghinh(point) == 1)
													{
														control=13;
													}
					

		if(control==1)
		{
			ph[n]=new HCN(p1,p2);
			ph[n]->draw(pdc);
			n++;
		}
		else
			if (control == 2)
			{
				ph[n] = new tamgiac(p1, p2);
				ph[n]->draw(pdc);
				n++;
				}
			else
				if (control == 3)
				{
					ph[n] = new Hinhvuong(p1, p2);
					ph[n]->draw(pdc);
					n++;
				}
				else
					if (control == 4)
					{
						ph[n] = new Hinhtron(p1, p2);
						ph[n]->draw(pdc);
						n++;
					}
				else
						if (control == 5)
						{
							if((p1.x > 100 && p1.y > 100 && p2.x > 100 && p2.y > 100))
							{
									ph[n] = new Dongxu(p1, p2);
									ph[n]->draw(pdc);
									n++;
							}
							
						}
						else

						if (control == 6)
						{
							if ((p1.x > 100 && p1.y > 30 && p2.x > 100 && p2.y > 100))
							{
								ph[n] = new ngoisao(p1, p2);
								ph[n]->draw(pdc);
								n++;
							}
						}
						else

					if (control == 7)
						{
							for (int i = 0; i < n; i++)
								if (ph[i]->tronghinh(point) == 1)
								{
									{
										ph[i]->xoahinh(pdc);
										ph[i]->draw(pdc);
										ph[i]->phongto();
										ph[i]->butmoi(pdc);
										ph[i]->draw(pdc);
									}
								}
						}
					else
						if (control == 8)
						{
							for (int i = 0; i < n; i++)
							{
								if (ph[i]->tronghinh(point) == 1)
								{
									ph[i]->xoahinh(pdc);
									ph[i]->draw(pdc);
									ph[i]->thunho();
									ph[i]->butmoi(pdc);
									ph[i]->draw(pdc);
									

								}
							}
						}
					else
				
						if (control == 9)
						{
							for (int i = 0; i < n; i++)
							{
								if (ph[i]->tronghinh(point) == 1)
								{
									ph[i]->xoahinh(pdc);
									ph[i]->dichuyenlen();
									ph[i]->butmoi(pdc);

								}
							}
						}
						else
							if (control == 10)
							{
								for (int i = 0; i < n; i++)
								{
									if (ph[i]->tronghinh(point) == 1)
									{
										ph[i]->xoahinh(pdc);
										ph[i]->dichuyenxuong();
										ph[i]->butmoi(pdc);

									}
								}
							}
							else
								if (control == 11)
								{
									for (int i = 0; i < n; i++)
									{
										if (ph[i]->tronghinh(point) == 1)
										{
											ph[i]->xoahinh(pdc);
											ph[i]->dichuyentrai();
											ph[i]->butmoi(pdc);

										}
									}
								}
								else
									if (control == 12)
									{
										for (int i = 0; i < n; i++)
										{
											if (ph[i]->tronghinh(point) == 1)
											{
												ph[i]->xoahinh(pdc);
												ph[i]->dichuyenphai();
												ph[i]->butmoi(pdc);

											}
										}
									}
									else
										if (control == 13)
										{
											int i;
											CPen*pen;
											CBrush*nen;
											CPen*pen1;
											pen1 = new CPen(PS_SOLID, 2, RGB(255, 255, 255));
											for (int i = 0; i < n; i++)
											{
												if (ph[i]->tronghinh(point) == 1)
												{
													pen = pdc->SelectObject(pen1);
													ph[i]->draw(pdc);
													break;
												}
											}
										}
						
						

	CView::OnLButtonUp(nFlags, point);
}


void Cvethu1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
//	if (point.x<2000 && point.x>100 && point.y<1000 && point.y>100)
	{
	p1.x = point.x;
	p1.y = point.y;
	}



	/*Dongxu1.thietlap(p1.x, p1.y, p2.x, p2.y);
	Dongxu2.thietlap(p1.x + 30, p1.y + 30, p2.x - 30, p2.y - 30);
	Dongxu1.draw(pdc);
	Dongxu2.draw(pdc);
	SPDongxu1.thietlap(p1.x, p1.y, p2.x, p2.y);
	SPDongxu2.thietlap(p1.x + 30, p1.y + 30, p2.x - 30, p2.y - 30);
	S.Format(_T("  Dien tich dong xu la : %f"), SPDongxu1.dientich() - SPDongxu2.dientich());//dien tich dong xu lon tru dong xu be
	P.Format(_T("  Chu vi tam giac la : %f"), SPDongxu1.chuvi() - SPDongxu2.chuvi());//chu vi dong xu lon tru dong xu be
	pdc.TextOutW(50, 20, S);
	pdc.TextOutW(300, 20, P);*/
	CView::OnLButtonDown(nFlags, point);
}


void Cvethu1View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: Add your message handler code here and/or call default

	CClientDC pdc(this);
/*	int key = nChar;
	if (key == 38)
	{
		hcn1.xoahinh(&pdc);
		hcn1.draw(&pdc);
		hcn1.phongto();
		hcn1.butbandau(&pdc);
		hcn1.draw(&pdc);
	}
	*/
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
