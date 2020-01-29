// AccountService.cpp : implementation file
//

#include "pch.h"
#include "PPvISLr3.h"
#include "AccountService.h"
#include "afxdialogex.h"
#include "History.h"


// AccountService dialog

IMPLEMENT_DYNAMIC(AccountService, CDialogEx)

AccountService::AccountService(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_CARD_ACCOUNT, pParent)
	, MoneyType(_T(""))
	, Money(0)
	, CardType(_T(""))
	, NumOfCard(0)
	, FIO(_T(""))
{

}

AccountService::AccountService(AccountData* data)
	: CDialogEx(IDD_DIALOG_CARD_ACCOUNT, nullptr)
	, Data(data)
{
	MoneyType = Data->GetMoneyT();
	Money = Data->GetMoney();
	CardType = Data->GetCardT();
	NumOfCard = Data->GetNum();
	FIO = Data->GetFIO();
}

AccountService::~AccountService()
{
}

void AccountService::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_CURRENCY, MoneyType);
	DDX_Text(pDX, IDC_EDIT_MONEY, Money);
	DDX_Text(pDX, IDC_EDIT_TYPE, CardType);
	DDX_Text(pDX, IDC_EDIT_NUM_OF_CARD, NumOfCard);
	DDX_Text(pDX, IDC_EDIT_FIO, FIO);
}


BEGIN_MESSAGE_MAP(AccountService, CDialogEx)
	ON_COMMAND(IDOK, ButtonOk)
	ON_COMMAND(IDC_BUTTON_SESSION, SessionHistory)
END_MESSAGE_MAP()


// AccountService message handlers


BOOL AccountService::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}
void AccountService::ButtonOk()
{
	EndDialog(0);
}

void AccountService::SessionHistory()
{
	History Session(Data);
	Session.DoModal();
	
}