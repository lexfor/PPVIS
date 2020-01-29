#pragma once


// GetMoney dialog

class GetMoney : public CDialogEx
{
	DECLARE_DYNAMIC(GetMoney)

public:
	GetMoney(CWnd* pParent = nullptr);   // standard constructor
	virtual ~GetMoney();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_GET_MONEY };
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
