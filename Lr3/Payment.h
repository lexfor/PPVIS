#pragma once


// Payment dialog

class Payment : public CDialogEx
{
	DECLARE_DYNAMIC(Payment)

public:
	Payment(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Payment();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_PAY };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
private:
	int AmountOfMoney;
	CString EripNum;
public:
	void OnButtonOk();
	void RetAmountOfMoney(int&,CString&);
};
