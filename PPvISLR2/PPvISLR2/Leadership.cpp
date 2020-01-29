#include"Leadership.h"
Leadership::Leadership() : Position("N/A"),University("N/A")
{}
Leadership::Leadership(std::string Pos) : Position(Pos)
{}
void Leadership::PutData() {
	std::cout << "Должность : " << Position << std::endl;
	University::PutData();
}
void Leadership::PutPos() {
	std::cout << "Должность : " << Position << std::endl;
}