
// PPvISLr3.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CPPvISLr3App:
// See PPvISLr3.cpp for the implementation of this class
//

class CPPvISLr3App : public CWinApp
{
public:
	CPPvISLr3App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CPPvISLr3App theApp;
