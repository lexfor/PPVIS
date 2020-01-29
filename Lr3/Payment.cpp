// Payment.cpp : implementation file
//

#include "pch.h"
#include "PPvISLr3.h"
#include "Payment.h"
#include "afxdialogex.h"


// Payment dialog

IMPLEMENT_DYNAMIC(Payment, CDialogEx)

Payment::Payment(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_PAY, pParent)
	, AmountOfMoney(0)
	, EripNum(_T(""))
{

}

Payment::~Payment()
{
}

void Payment::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_AMOUNT, AmountOfMoney);
	DDV_MinMaxInt(pDX, AmountOfMoney, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT_ERIP, EripNum);
	DDV_MaxChars(pDX, EripNum, 16);
}


BEGIN_MESSAGE_MAP(Payment, CDialogEx)
	ON_COMMAND(IDOK,OnButtonOk)
END_MESSAGE_MAP()


// Payment message handlers


void Payment::OnButtonOk()
{
	UpdateData();
	EndDialog(0);
}


void Payment::RetAmountOfMoney(int &Amount,CString &Bill)
{
	Amount = AmountOfMoney;
	Bill = EripNum;
}
