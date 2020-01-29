#include"Student.h"
#include"Administration.h"
#include "FacultyLeadership.h"
int main() {
	setlocale(LC_ALL, "rus");
	Student FirstStud("Kinevich Tsimafei Olegovich","thetim182001@mail.ru", 821703, "AI", "FITiU", "BSUIR");
	FirstStud.PutData();
	std::cout << std::endl;

	Administration Admin("Bogush", "Rector", "BSUIR");
	Admin.PutData();
	std::cout << std::endl;

	FacultyLeadership FITiUDecan("Shilin","FITiU", "Decan", "BSUIR");
	FITiUDecan.PutData();
	std::cout << std::endl;

	Group FirstGroup;
	FirstGroup.PutData();
	FirstGroup.GetAllInf();
	FirstGroup.PutData();
	std::cout << std::endl;

	Student SecondStud;
	SecondStud.PutData();
	SecondStud.GetAllInformation();
	SecondStud.PutData();
	std::cout << std::endl;

	Group* Studptr;
	Studptr = &FirstGroup;
	Studptr->PutMail();
	Studptr = &SecondStud;
	Studptr->PutMail();
	std::cout << std::endl;
	return 0;
}