#pragma once


// AddMoney dialog

class AddMoney : public CDialogEx
{
	DECLARE_DYNAMIC(AddMoney)

public:
	AddMoney(CWnd* pParent = nullptr);   // standard constructor
	virtual ~AddMoney();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_ADD };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
private:
	int AmountOfMoney;
public:
	void OnButtonOK();
	int RetAmountOfMoney();
};
