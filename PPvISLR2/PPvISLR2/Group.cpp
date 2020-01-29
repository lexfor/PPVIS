#include"Group.h"
Group::Group() : GroupNum(0),GroupMail("N/A")
{
	Speciality::Speciality();
}
Group::Group(int Num, std::string SpecialityName, std::string FacultyName) : GroupNum(Num), Speciality(SpecialityName, FacultyName)
{}
void Group::PutData() {
	std::cout << "����� ������ : " << GroupNum << std::endl;
	std::cout << " ����� ������ " << GroupMail << std::endl;
	Speciality::PutData();
}
void Group::PutMail() {
	std::cout << " ����� ������ " << GroupMail <<std::endl;
}
void Group::GetAllInf() {
	std::cout << "������� ����� ������ : " << std::endl;
	std::cin >> GroupNum;
	std::cout << "������� ����������� ����� ������ : " << std::endl;
	std::cin >> GroupMail;
	std::cout << "������� �������� ������������� : " << std::endl;
	std::cin >> SpecialityName;
	std::cout << "������� �������� ���������� : " << std::endl;
	std::cin >> FacultyName;
	std::cout << "������� �������� ������������ : " << std::endl;
	std::cin >> UniversityName;
}