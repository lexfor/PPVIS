
// PPvISLr3Dlg.h : header file
//

#pragma once


// CPPvISLr3Dlg dialog
class CPPvISLr3Dlg : public CDialogEx
{
// Construction
public:
	CPPvISLr3Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PPVISLR3_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	CButton ID_BUTTON_CARD;
public:
	afx_msg void Button_Card();
	afx_msg void Button_Cash();
};
