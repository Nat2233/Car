#include <string>
#include "Driver.h"
#include "Engine.h"

class Car
{
public:
	std::string color;
	std::string mark;
	Driver surname;
	Engine number;
	bool status;
	void check_status();
	void in_qutopark();
	void on_way();
};

