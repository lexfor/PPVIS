#include"Speciality.h"
Speciality::Speciality() : SpecialityName("N/A")
{
	Faculty::Faculty();
}
Speciality::Speciality(std::string Str, std::string FacultyName) : SpecialityName(Str), Faculty::Faculty(FacultyName)
{}
void Speciality::PutData() {
	std::cout << "�������� ������������� : " << SpecialityName << std::endl;
	Faculty::PutData();
}