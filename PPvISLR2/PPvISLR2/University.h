#pragma once
#include<iostream>
#include<string.h>
namespace Hierarchy {
	class University {
	protected:
		std::string UniversityName;
	public:
		University();
		University(std::string Str);
		void PutData();
	};
}