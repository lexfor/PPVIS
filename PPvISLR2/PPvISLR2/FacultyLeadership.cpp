#include"FacultyLeadership.h"
FacultyLeadership::FacultyLeadership() : FIO("N/A"), Faculty(),Leadership()
{}
FacultyLeadership::FacultyLeadership(std::string FIO,std::string FacultyName,std::string Position,std::string UniversityName) : FIO(FIO),Faculty(FacultyName),Leadership(Position),University(UniversityName)
{}
void FacultyLeadership::PutData() {
	std::cout << "ФИО руководителя факультета : " << FIO << std::endl;
	Leadership::PutPos();
	Faculty::PutData();
}