#include"FacultyName.h"
Faculty::Faculty() : FacultyName("N/A")
{
	University::University();
}
Faculty::Faculty(std::string Str) : FacultyName(Str)
{}
void Faculty::PutData()
{
	std::cout << "Название факультета : " << FacultyName << std::endl;
	University::PutData();
}