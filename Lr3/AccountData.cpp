#include "pch.h"
#include "AccountData.h"
#include "AccountService.h"
#include <fstream>

AccountData::AccountData()
	: MoneyType("N/A")
	, CardMoney(0)
	, CardType("N/A")
	,OperationID(0)
{

}
AccountData::AccountData(CString moneyT, double money, CString cardT, std::vector<CString> bills, std::vector<int> operId, std::vector<CString> Name, std::vector<int> Amount)
	: MoneyType(moneyT)
	, CardMoney(money)
	, CardType(cardT)
	, OperationID(0)
	, Bills(bills)
	, OperationIDs(operId)
	, NameOfOperations(Name)
	, AmountOfOperations(Amount)
{

}
void AccountData::SetMoney(double Money) {
	CardMoney = Money;
}
void AccountData::SetData(double Money, int Id, std::vector<CString> Bill, std::vector<int>OperId, std::vector<CString> Name, std::vector<int> Amount) {
	CardMoney = Money;
	OperationID = Id;
	Bills = Bill;
	OperationIDs = OperId;
	NameOfOperations = Name;
	AmountOfOperations = Amount;
}
void AccountData::GetData(double& Money, int& Id, std::vector<CString>& Bill, std::vector<int>& OperId, std::vector<CString>& Name, std::vector<int>& Amount) {
	Money = CardMoney;
	Id  = OperationID;
	Bill = Bills;
	OperId = OperationIDs;
	Name = NameOfOperations;
	Amount = AmountOfOperations;
}
double AccountData::GetMoney() {
	return CardMoney;
}
CString AccountData::GetMoneyT() {
	return MoneyType;
}
CString AccountData::GetCardT() {
	return CardType;
}
int AccountData::GetID() {
	return OperationID;
}
std::vector<CString> AccountData::GetBill() {
	return Bills;
}
std::vector<int> AccountData::GetIDs() {
	return OperationIDs;
}
std::vector<CString> AccountData::GetName() {
	return NameOfOperations;
}
std::vector<int> AccountData::GetAmount() {
	return AmountOfOperations;
}
void AccountData::AddMoney(int Amount) {
	CString StrBill("N/A"), StrName("Popolnenie scheta");
	Bills.push_back(StrBill);
	OperationIDs.push_back(OperationID);
	NameOfOperations.push_back(StrName);
	AmountOfOperations.push_back(Amount);
	CardMoney += Amount;
	OperationID++;
}
void AccountData::GetMoney(int Amount) {
	CString StrBill("N/A"), StrName("Sniatie sredstv");
	Bills.push_back(StrBill);
	OperationIDs.push_back(OperationID);
	NameOfOperations.push_back(StrName);
	AmountOfOperations.push_back(Amount);
	CardMoney -= Amount;
	OperationID++;
}
void AccountData::GetInform(CString Money, int Num, CString Card)
{
	MoneyType = Money;
	CardMoney = Num;
	CardType = Card;
}

bool AccountData::CheckMoney(int Amount)
{
	if (Amount > CardMoney) {
		return false;
	}
	else {
		return true;
	}
}


void AccountData::TransferMoney(int Amount, CString bill)
{
	CString StrName("Oplata");
	Bills.push_back(bill);
	OperationIDs.push_back(OperationID);
	NameOfOperations.push_back(StrName);
	AmountOfOperations.push_back(Amount);
	CardMoney -= Amount;
	OperationID++;
}

void AccountData::Showview() {
	AccountService Serv(this);
	Serv.DoModal();
}

void AccountData::GetBankData() {
	std::ifstream in;
	in.open("D:\\BankData.txt");
	std::string Str;
	in >> Str;
	MoneyType = CA2T(Str.c_str());
	in >> CardMoney;
	in >> Str;
	CardType = CA2T(Str.c_str());
	in >> NumOfCard;
	in >> Str;
	FIO = CA2T(Str.c_str());
}
int AccountData::GetNum() {
	return NumOfCard;
}
CString AccountData::GetFIO() {
	return FIO;
}