#pragma once
#include"FacultyName.h"
class Speciality : public Faculty  {
protected:
	std::string SpecialityName;
public:
	Speciality();
	Speciality(std::string , std::string);
	void  PutData();
};