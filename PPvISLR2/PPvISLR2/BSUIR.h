#pragma once
#include"University.h"
using namespace Hierarchy;
class Faculty : public virtual University {
protected:
	std::string FacultyName;
public:
	Faculty();
	Faculty(std::string );
	void PutData();
};