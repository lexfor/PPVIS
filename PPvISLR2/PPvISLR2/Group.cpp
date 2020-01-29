#include"Group.h"
Group::Group() : GroupNum(0),GroupMail("N/A")
{
	Speciality::Speciality();
}
Group::Group(int Num, std::string SpecialityName, std::string FacultyName) : GroupNum(Num), Speciality(SpecialityName, FacultyName)
{}
void Group::PutData() {
	std::cout << "Номер группы : " << GroupNum << std::endl;
	std::cout << " Почта группы " << GroupMail << std::endl;
	Speciality::PutData();
}
void Group::PutMail() {
	std::cout << " Почта группы " << GroupMail <<std::endl;
}
void Group::GetAllInf() {
	std::cout << "Введите номер группы : " << std::endl;
	std::cin >> GroupNum;
	std::cout << "Введите электронную почту группы : " << std::endl;
	std::cin >> GroupMail;
	std::cout << "Введите название специальности : " << std::endl;
	std::cin >> SpecialityName;
	std::cout << "Введите название факультета : " << std::endl;
	std::cin >> FacultyName;
	std::cout << "Введите название университета : " << std::endl;
	std::cin >> UniversityName;
}