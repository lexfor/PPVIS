#pragma once
#include<vector>
#include "AccountData.h"

// History dialog

class History : public CDialogEx
{
	DECLARE_DYNAMIC(History)

public:
	History(CWnd* pParent = nullptr); // standard constructor
	History(AccountData *);
	virtual ~History();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_HISTORY };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
private:
	CListCtrl CardSessionHistory;
	AccountData* Acc;
public:
	virtual BOOL OnInitDialog();
};
