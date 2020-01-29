#include"Student.h"
Student::Student() : FIO("N/A"),StudentMail("N/A")
{
	Group::Group();
}
Student::Student(std::string Fio,std::string StudMail,int GroupNum,std::string SpecialityName,std::string FacultyName,std::string UniversityName) : FIO(Fio),StudentMail(StudMail), Group(GroupNum, SpecialityName, FacultyName),University(UniversityName)
{}
void Student::PutData() {
	std::cout << "��� �������� : " << FIO << std::endl;
	std::cout << "����� �������� : " << StudentMail << std::endl;
	Group::PutData();
}
void Student::PutMail() {
	std::cout << "����� �������� : " << StudentMail << std::endl;
}
void Student::GetAllInformation() {
	std::cout << "������� ��� �������� : " << std::endl;
	std::cin >> FIO;
	std::cout << "������� ����������� ����� �������� : " << std::endl;
	std::cin >> StudentMail;
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