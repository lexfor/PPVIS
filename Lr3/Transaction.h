#pragma once


// Transaction dialog

class Transaction : public CDialogEx
{
	DECLARE_DYNAMIC(Transaction)

public:
	Transaction(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Transaction();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_TRANSACTION };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
	private:
	int AmountOfMoney;
	CString CardNum;
public:
	void OnButtonOk();
	void RetAmountOfMoney(int&,CString&);
};
