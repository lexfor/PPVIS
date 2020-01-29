#pragma once
#include"Group.h"
class Student : public Group {
private:
	std::string FIO;
	std::string StudentMail;
public:
	Student();
	Student(std::string,std::string , int, std::string, std::string, std::string);
	void  PutData();
	void virtual PutMail();
	void GetAllInformation();
};