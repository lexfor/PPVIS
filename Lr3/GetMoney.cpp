// GetMoney.cpp : implementation file
//

#include "pch.h"
#include "PPvISLr3.h"
#include "GetMoney.h"
#include "afxdialogex.h"


// GetMoney dialog

IMPLEMENT_DYNAMIC(GetMoney, CDialogEx)

GetMoney::GetMoney(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_GET_MONEY, pParent)
	, AmountOfMoney(0)
{

}

GetMoney::~GetMoney()
{
}

void GetMoney::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_GET_MONEY, AmountOfMoney);
	DDV_MinMaxInt(pDX, AmountOfMoney, 0, 9999);
}


BEGIN_MESSAGE_MAP(GetMoney, CDialogEx)
	ON_COMMAND(IDOK, OnButtonOK)
END_MESSAGE_MAP()


// GetMoney message handlers



void GetMoney::OnButtonOK()
{
	UpdateData();
	EndDialog(0);
}


int GetMoney::RetAmountOfMoney()
{
	return AmountOfMoney;
}