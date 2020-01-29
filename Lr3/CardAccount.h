#pragma once
#include <vector>


// CardAccount dialog

class CardAccount : public CDialogEx
{
	DECLARE_DYNAMIC(CardAccount)

public:
	CardAccount(CWnd* pParent = nullptr);// standard constructor
	virtual ~CardAccount();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_ACCOUNT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
protected:
	CString MoneyType;
	double CardMoney;
	CString CardType;
public:
	virtual BOOL OnInitDialog();
	void ButtonOk();
	virtual void GetInform(CString,int,CString) = 0;
	virtual void AddMoney (int) = 0;
	virtual void GetMoney(int) = 0;
	virtual bool CheckMoney(int) = 0;
	virtual void SessionHistory() = 0;
protected:
	std::vector<CString> Bills;
	int OperationID;
	std::vector<int> OperationIDs;
	std::vector<CString> NameOfOperations;
	std::vector<int> AmountOfOperations;
public:
	virtual void TransferMoney(int , CString ) = 0;
};
