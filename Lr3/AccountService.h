#pragma once
#include "AccountData.h"

// AccountService dialog

class AccountService : public CDialogEx
{
	DECLARE_DYNAMIC(AccountService)

public:
	AccountService(CWnd* pParent = nullptr);// standard constructor
	AccountService(AccountData*);
	virtual ~AccountService();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CARD_ACCOUNT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
private:
	AccountData* Data;
	CString MoneyType;
	double Money;
	CString CardType;
public:
	void ButtonOk();
	void SessionHistory();
private:
	CString FIO;
	int NumOfCard;
};
