#pragma once
#include"Speciality.h"

class Group : public Speciality {
protected:
	int GroupNum;
	std::string GroupMail;
public:
	Group();
	Group(int, std::string, std::string);
	void  PutData();
	void virtual PutMail();
	void GetAllInf();
};