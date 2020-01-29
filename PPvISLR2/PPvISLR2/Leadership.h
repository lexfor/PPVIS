#pragma once
#include"University.h"
using namespace Hierarchy;
class Leadership : public virtual University{
private:
	std::string Position;
public:
	Leadership();
	Leadership(std::string);
	void PutPos();
	void PutData();
};