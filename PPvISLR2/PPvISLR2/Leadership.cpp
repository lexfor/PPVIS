#include"Leadership.h"
Leadership::Leadership() : Position("N/A"),University("N/A")
{}
Leadership::Leadership(std::string Pos) : Position(Pos)
{}
void Leadership::PutData() {
	std::cout << "��������� : " << Position << std::endl;
	University::PutData();
}
void Leadership::PutPos() {
	std::cout << "��������� : " << Position << std::endl;
}