#include "pch.h"
#include "PinService.h"
void PinService::ReadPin() {
	std::ifstream in;
	in.open("D:\\out.txt");
	in >> Pin;
	std::string Str;
	in >> Str;
	for (int i = 0; i < 12; i++) {
		Str[i] = '*';
	}
	CardNum = CA2T(Str.c_str());
}
int PinService::GetPin() {
	return Pin;
}
bool PinService::CheckPin(int EnteredPin) {
	if (EnteredPin == Pin) {
		return true;
	}
	NumOfTry++;
	return false;
}
bool PinService::CheckNumOfTry() {
	if (NumOfTry < 3) {
		return true;
	}
	return false;
}
CString PinService::GetCardNum() {
	return CardNum;
}