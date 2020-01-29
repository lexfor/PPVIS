// CardAccount.cpp : implementation file
//

#include "pch.h"
#include "PPvISLr3.h"
#include "CardAccount.h"
#include "afxdialogex.h"
#include "History.h"


// CardAccount dialog

IMPLEMENT_DYNAMIC(CardAccount, CDialogEx)

CardAccount::CardAccount(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_ACCOUNT, pParent)
	, MoneyType(_T(""))
	, CardMoney(0)
	, CardType(_T(""))
	, OperationID(0)
{

}

CardAccount::~CardAccount()
{
}

void CardAccount::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_CURRENCY, MoneyType);
	DDX_Text(pDX, IDC_EDIT_MONEY, CardMoney);
	DDX_Text(pDX, IDC_EDIT_TYPE, CardType);
}


BEGIN_MESSAGE_MAP(CardAccount, CDialogEx)
	ON_COMMAND(IDOK,ButtonOk)
	ON_COMMAND(IDC_BUTTON_SESSION,SessionHistory)
END_MESSAGE_MAP()


// CardAccount message handlers


BOOL CardAccount::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}


void CardAccount::ButtonOk()
{
	EndDialog(0);
}

