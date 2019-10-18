
// vethu1View.h : interface of the Cvethu1View class
//

#pragma once
#include "Nutbam.h"
#include "Hinh.h"
#include "HCN.h"
#include"tamgiac.h"
#include"Hinhvuong.h"
#include"Hinhtron.h"
#include"Dongxu.h"
#include"ngoisao.h"
class Cvethu1View : public CView
{
protected: // create from serialization only
	Cvethu1View();
	DECLARE_DYNCREATE(Cvethu1View)

// Attributes
public:
	Cvethu1Doc* GetDocument() const;

	
// Operations
public:
	Nutbam hcn, tg, hv, ht, dx, pgto,khung,ns,xoa,len,xuong,trai,phai,pto,tnho;
	
	CClientDC *pdc;
	CPoint p1, p2;
	int control;
	Hinh *ph[100];
	int n;
	int mau;
	
// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~Cvethu1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // debug version in vethu1View.cpp
inline Cvethu1Doc* Cvethu1View::GetDocument() const
   { return reinterpret_cast<Cvethu1Doc*>(m_pDocument); }
#endif

