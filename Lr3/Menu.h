#pragma once
#include"AccountData.h"

// Menu dialog

class Menu : public CDialogEx
{
	DECLARE_DYNAMIC(Menu)

public:
	Menu(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Menu();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_MENU };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	DECLARE_MESSAGE_MAP()
private:
	AccountData Account;
public:
	void GetInformation();
	virtual BOOL OnInitDialog();
	void Exit();
	void MoneyTransaction();
	void AddNumMoney();
	void GetNumMoney();
	void Pay();
};
