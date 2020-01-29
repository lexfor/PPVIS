#pragma once
#include"FacultyName.h"
#include"Leadership.h"
class FacultyLeadership : private Faculty, private Leadership {
private:
	std::string FIO;
public:
	FacultyLeadership();
	FacultyLeadership(std::string, std::string, std::string, std::string);
	void PutData();
};