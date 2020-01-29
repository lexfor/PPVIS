#pragma once


// CashMenu dialog

class CashMenu : public CDialogEx
{
	DECLARE_DYNAMIC(CashMenu)

public:
	CashMenu(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CashMenu();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CASH_MENU };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	void Exit();
	void PayCash();
	void CashTransaction();
};
