#include "pch.h"
#include "Service.h"
#include "History.h"

void Service ::  AddMoney(int Amount) {
	CString StrBill("N/A"), StrName("Popolnenie scheta");
	Bills.push_back(StrBill);
	OperationIDs.push_back(OperationID);
	NameOfOperations.push_back(StrName);
	AmountOfOperations.push_back(Amount);
	CardMoney += Amount;
	OperationID++;
}
void Service::GetMoney(int Amount) {
	CString StrBill("N/A"), StrName("Sniatie sredstv");
	Bills.push_back(StrBill);
	OperationIDs.push_back(OperationID);
	NameOfOperations.push_back(StrName);
	AmountOfOperations.push_back(Amount);
	CardMoney -= Amount;
	OperationID++;
}
void Service::GetInform(CString Money, int Num, CString Card)
{
	MoneyType = Money;
	CardMoney = Num;
	CardType = Card;
}

bool Service::CheckMoney(int Amount)
{
	if (Amount > CardMoney) {
		return false;
	}
	else {
		return true;
	}
}

void Service::SessionHistory()
{
	History Session;
	Session.GetData(Bills, OperationIDs, NameOfOperations, AmountOfOperations);
	Session.DoModal();
}

void Service::TransferMoney(int Amount, CString bill)
{
	CString StrName("Oplata");
	Bills.push_back(bill);
	OperationIDs.push_back(OperationID);
	NameOfOperations.push_back(StrName);
	AmountOfOperations.push_back(Amount);
	CardMoney -= Amount;
	OperationID++;
}
