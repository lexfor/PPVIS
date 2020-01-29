#pragma once
#include"Leadership.h"
class Administration : protected Leadership {
private:
	std::string FIO;
public:
	Administration();
	Administration(std::string, std::string, std::string);
	void PutData();
};