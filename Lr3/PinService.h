#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "afxdialogex.h"
#include <string>
class PinService
{
private:
	int  Pin;
	CString CardNum;
	int NumOfTry;
public:
	void ReadPin();
	int GetPin();
	bool CheckPin(int);
	bool CheckNumOfTry();
	CString GetCardNum();
};

