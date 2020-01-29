// CashMenu.cpp : implementation file
//

#include "pch.h"
#include "PPvISLr3.h"
#include "PPvISLr3Dlg.h"
#include "CashMenu.h"
#include "afxdialogex.h"
#include "Payment.h"
#include "Transaction.h"

// CashMenu dialog

IMPLEMENT_DYNAMIC(CashMenu, CDialogEx)

CashMenu::CashMenu(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_CASH_MENU, pParent)
{

}

CashMenu::~CashMenu()
{
}

void CashMenu::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CashMenu, CDialogEx)
	ON_COMMAND(IDC_BUTTON_MENU_EXIT, Exit)
	ON_COMMAND(IDC_BUTTON_PAY_CASH,PayCash)
	ON_COMMAND(IDC_BUTTON_TRANSACTION_CASH,CashTransaction)
END_MESSAGE_MAP()


// CashMenu message handlers


void CashMenu::Exit()
{
	EndDialog(0);
	CPPvISLr3Dlg MainDlg;
	MainDlg.DoModal();
}


void CashMenu::PayCash()
{
	Payment CashPay;
	CashPay.DoModal();
}


void CashMenu::CashTransaction()
{
	Transaction CashTransaction;
	CashTransaction.DoModal();
}
