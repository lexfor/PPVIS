// Transaction.cpp : implementation file
//

#include "pch.h"
#include "PPvISLr3.h"
#include "Transaction.h"
#include "afxdialogex.h"


// Transaction dialog

IMPLEMENT_DYNAMIC(Transaction, CDialogEx)

Transaction::Transaction(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_TRANSACTION, pParent)
	, AmountOfMoney(0)
	, CardNum(_T(""))
{

}

Transaction::~Transaction()
{
}

void Transaction::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_AMOUNT, AmountOfMoney);
	DDX_Text(pDX, IDC_EDIT_CARD_NUMBER, CardNum);
	DDV_MaxChars(pDX, CardNum, 16);
}


BEGIN_MESSAGE_MAP(Transaction, CDialogEx)
END_MESSAGE_MAP()


// Transaction message handlers


void Transaction::OnButtonOk()
{
	UpdateData();
	EndDialog(0);
}


void Transaction::RetAmountOfMoney(int &Amount,CString &Bill)
{
	Amount = AmountOfMoney;
	Bill = CardNum;
}
