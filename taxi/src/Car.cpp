#include "Car.h"

void  Car::in_qutopark() {
	status = 1;
}

void Car::on_way() {
	status = 0;
}

void Car::check_status() {
	if (status == 1) {
		std::cout << "in qutopark" << "\n";
	}
	else
		std::cout << "on way" << "\n";
}

