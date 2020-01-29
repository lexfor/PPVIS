// Pin_Card.cpp : implementation file
//

#include "pch.h"
#include "PPvISLr3.h"
#include "Pin_Card.h"
#include "afxdialogex.h"
#include <iostream>
#include "Menu.h"
#include "PPvISLr3Dlg.h"


// Pin_Card dialog

IMPLEMENT_DYNAMIC(Pin_Card, CDialogEx)

Pin_Card::Pin_Card(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_PIN_CARD, pParent),EnterPin(9999)
{


}

Pin_Card::~Pin_Card()
{
}

void Pin_Card::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_PIN, EnterPin);
	DDV_MinMaxInt(pDX, EnterPin, 0, 9999);
}


BEGIN_MESSAGE_MAP(Pin_Card, CDialogEx)
	ON_COMMAND(IDC_BUTTON_ENTER,&Pin_Card::CheckPin)
END_MESSAGE_MAP()


// Pin_Card message handlers


BOOL Pin_Card::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	Data.ReadPin();
	SetDlgItemText(IDC_STATIC_CARD_NUMBER, Data.GetCardNum());
	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}


void Pin_Card::CheckPin()
{
	UpdateData();
	if (EnterPin < 0 || EnterPin > 9999) {
		return;
	}
	if (Data.CheckPin(EnterPin)) {
		Menu CardMenu;
		EndDialog(0);
		CardMenu.DoModal();
	}
	else {
		AfxMessageBox(_T("Неверный пароль"),MB_OK | MB_ICONSTOP);
	}
	if (!Data.CheckNumOfTry()) {
		AfxMessageBox(_T("Карта заблокирована"), MB_OK | MB_ICONSTOP);
		EndDialog(0);
		CPPvISLr3Dlg MainDlg;
		MainDlg.DoModal();
	}
}
