#include"Student.h"
Student::Student() : FIO("N/A"),StudentMail("N/A")
{
	Group::Group();
}
Student::Student(std::string Fio,std::string StudMail,int GroupNum,std::string SpecialityName,std::string FacultyName,std::string UniversityName) : FIO(Fio),StudentMail(StudMail), Group(GroupNum, SpecialityName, FacultyName),University(UniversityName)
{}
void Student::PutData() {
	std::cout << "ФИО студента : " << FIO << std::endl;
	std::cout << "Почта студента : " << StudentMail << std::endl;
	Group::PutData();
}
void Student::PutMail() {
	std::cout << "Почта студента : " << StudentMail << std::endl;
}
void Student::GetAllInformation() {
	std::cout << "Введите ФИО студента : " << std::endl;
	std::cin >> FIO;
	std::cout << "Введите электронную почту студента : " << std::endl;
	std::cin >> StudentMail;
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