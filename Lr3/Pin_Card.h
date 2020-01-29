#pragma once
#include<vector>
#include<string>
#include "PinService.h"

// Pin_Card dialog

class Pin_Card : public CDialogEx
{
	DECLARE_DYNAMIC(Pin_Card)

public:
	Pin_Card(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Pin_Card();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_PIN_CARD };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void CheckPin();
private:
	int EnterPin;
	PinService Data;
};
