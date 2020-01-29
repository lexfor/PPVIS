#include"Administration.h"
Administration ::Administration() : FIO("N/A"),Leadership()
{}
Administration::Administration(std::string Fio, std::string Position, std::string UniversityName) : FIO(Fio),Leadership(Position),University(UniversityName)
{}
void Administration::PutData() {
	std::cout << "ФИО руководителя : " << FIO << std::endl;
	Leadership::PutData();
}
