#pragma once
#include "afxdialogex.h"
#include <string>
#include <vector>
class AccountData
{
private:
	CString MoneyType;
	double CardMoney;
	CString CardType;
	int NumOfCard;
	CString FIO;
	std::vector<CString> Bills;
	int OperationID;
	std::vector<int> OperationIDs;
	std::vector<CString> NameOfOperations;
	std::vector<int> AmountOfOperations;
public:
	AccountData();
	AccountData(CString,double, CString, std::vector<CString>, std::vector<int>, std::vector<CString>, std::vector<int>);
	void SetMoney(double);
	void SetData(double, int, std::vector<CString>, std::vector<int>, std::vector<CString>, std::vector<int>);
	void GetData(double&, int&, std::vector<CString>&, std::vector<int>&, std::vector<CString>&, std::vector<int>&);
	CString GetMoneyT();
	double GetMoney();
	CString GetCardT();
	int GetID();
	std::vector<CString> GetBill();
	std::vector<int> GetIDs();
	std::vector<CString> GetName();
	std::vector<int> GetAmount();
	void AddMoney(int);
	void GetMoney(int);
	void GetInform(CString, int, CString);
	bool CheckMoney(int);
	void TransferMoney(int, CString);
	void Showview();
	void GetBankData();
	int GetNum();
	CString GetFIO();
};

