// AddMoney.cpp : implementation file
//

#include "pch.h"
#include "PPvISLr3.h"
#include "AddMoney.h"
#include "afxdialogex.h"


// AddMoney dialog

IMPLEMENT_DYNAMIC(AddMoney, CDialogEx)

AddMoney::AddMoney(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_ADD, pParent)
	, AmountOfMoney(0)
{

}

AddMoney::~AddMoney()
{
}

void AddMoney::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_ADD_MONEY, AmountOfMoney);
	DDV_MinMaxInt(pDX, AmountOfMoney, 0, 9999);
}


BEGIN_MESSAGE_MAP(AddMoney, CDialogEx)
	ON_COMMAND(IDOK,OnButtonOK)
END_MESSAGE_MAP()


// AddMoney message handlers


void AddMoney::OnButtonOK()
{
	UpdateData();
	EndDialog(0);
}


int AddMoney::RetAmountOfMoney()
{
	return AmountOfMoney;
}
