// History.cpp : implementation file
//

#include "pch.h"
#include "PPvISLr3.h"
#include "History.h"
#include "afxdialogex.h"


// History dialog

IMPLEMENT_DYNAMIC(History, CDialogEx)

History::History(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_HISTORY, pParent)
{

}

History::History(AccountData* acc)
	: CDialogEx(IDD_DIALOG_HISTORY, nullptr)
	, Acc(acc)
{
}

History::~History()
{
}

void History::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST_HIST, CardSessionHistory);
}


BEGIN_MESSAGE_MAP(History, CDialogEx)
END_MESSAGE_MAP()


// History message handlers


BOOL History::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	int Item;
	CString Str;
	CardSessionHistory.InsertColumn(0, L"Operation Name", LVCFMT_LEFT, 200);
	CardSessionHistory.InsertColumn(1, L"Amount", LVCFMT_LEFT, 200);
	CardSessionHistory.InsertColumn(2, L"Bill", LVCFMT_LEFT, 200);
	CardSessionHistory.InsertColumn(3, L"Operation ID", LVCFMT_LEFT, 200);
	for (int i = 0; i < Acc->GetBill().size(); i++) {
		Item = CardSessionHistory.InsertItem(0, Acc->GetName()[i]);
		Str.Format(_T("%d"),Acc->GetAmount()[i]);
		CardSessionHistory.SetItemText(Item, 1, Str);
		CardSessionHistory.SetItemText(Item, 2, Acc->GetBill()[i]);
		Str.Format(_T("%d"), Acc->GetIDs()[i]);
		CardSessionHistory.SetItemText(Item, 3, Str);
	}


	return TRUE;  // return TRUE unless you set the focus to a control
				  // EXCEPTION: OCX Property Pages should return FALSE
}

