#include"University.h"
using namespace Hierarchy;
University::University() : UniversityName("N/A")
{
}
University::University(std::string Str) : UniversityName(Str)
{
}
void University::PutData() {
	std::cout << "Название университета : " << UniversityName << std::endl;
}