#include"Speciality.h"
Speciality::Speciality() : SpecialityName("N/A")
{
	Faculty::Faculty();
}
Speciality::Speciality(std::string Str, std::string FacultyName) : SpecialityName(Str), Faculty::Faculty(FacultyName)
{}
void Speciality::PutData() {
	std::cout << "Название специальности : " << SpecialityName << std::endl;
	Faculty::PutData();
}