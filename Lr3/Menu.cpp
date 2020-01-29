// Menu.cpp : implementation file
//

#include "pch.h"
#include "PPvISLr3.h"
#include "PPvISLr3Dlg.h"
#include "Menu.h"
#include "afxdialogex.h"
#include <iostream>
#include <ctime>
#include "AddMoney.h"
#include "GetMoney.h"
#include "Payment.h"
#include "Transaction.h"


// Menu dialog

IMPLEMENT_DYNAMIC(Menu, CDialogEx)

Menu::Menu(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_MENU, pParent)
{
	Account.GetBankData();
}

Menu::~Menu()
{
}

void Menu::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Menu, CDialogEx)
	ON_COMMAND(IDC_BUTTON_ADD,AddNumMoney)
	ON_COMMAND(IDC_BUTTON_GET,GetNumMoney)
	ON_COMMAND(IDC_BUTTON_PAY,Pay)
	ON_COMMAND(IDC_BUTTON_INFORM,GetInformation)
	ON_COMMAND(IDC_BUTTON_END,Exit)
	ON_COMMAND(IDC_BUTTON_TRANSACTION,MoneyTransaction)
END_MESSAGE_MAP()


// Menu message handlers


void Menu::AddNumMoney()
{
	AddMoney AddAmountOfMoney;
	AddAmountOfMoney.DoModal();
	Account.AddMoney(AddAmountOfMoney.RetAmountOfMoney());
}


void Menu::GetNumMoney()
{
	GetMoney GetAmountOfMoney;
	GetAmountOfMoney.DoModal();
	if (Account.CheckMoney(GetAmountOfMoney.RetAmountOfMoney())) {
		Account.GetMoney(GetAmountOfMoney.RetAmountOfMoney());
	}
	else {
		AfxMessageBox(_T("Недостаточно средств"), MB_OK | MB_ICONSTOP);
	}
}


void Menu::Pay()
{
	int Amount;
	CString Bill;
	Payment Fee;
	Fee.DoModal();
	Fee.RetAmountOfMoney(Amount,Bill);
	if (Account.CheckMoney(Amount)) {
		Account.TransferMoney(Amount,Bill);
	}
	else {
		AfxMessageBox(_T("Недостаточно средств"), MB_OK | MB_ICONSTOP);
	}
}


void Menu::GetInformation()
{
	Account.Showview();
}


BOOL Menu::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}


void Menu::Exit()
{
	EndDialog(0);
	CPPvISLr3Dlg MainDlg;
	MainDlg.DoModal();
}


void Menu::MoneyTransaction()
{
	int Amount;
	CString Bill;
	Transaction Trans;
	Trans.DoModal();
	Trans.RetAmountOfMoney(Amount, Bill);
	if (Account.CheckMoney(Amount)) {
		Account.TransferMoney(Amount,Bill);
	}
	else {
		AfxMessageBox(_T("Недостаточно средств"), MB_OK | MB_ICONSTOP);
	}
}
