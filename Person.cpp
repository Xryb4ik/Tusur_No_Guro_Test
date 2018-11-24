#include "Person.h"

namespace book
{
	Person::Person() : Figurant() {}

	Person::~Person() {}

	void Person::Set_age(uint32_t age)
	{
		this->age = age;
	}

	void Person::Set_floor(char * floor)
	{
		this->floor = floor;
	}

	void Person::Set_character(char * character)
	{
		this->character = character;
	}

	void Person::Set_file_age()
	{
		std::ofstream ofs;
		ofs.open(this->name_file, std::ofstream::app);
		if (!ofs.is_open()) {
			std::cerr << "Can't open first file!" << std::endl;
		}
		ofs <<"Age: "<< this->age << std::endl;
		ofs.close();
	}

	void Person::Set_file_floor()
	{
		std::ofstream ofs;
		ofs.open(this->name_file, std::ofstream::app);
		if (!ofs.is_open()) {
			std::cerr << "Can't open first file!" << std::endl;
		}
		ofs <<"Floor: "<< this->floor << std::endl;
		ofs.close();
	}

	void Person::Set_file_character()
	{
		std::ofstream ofs;
		ofs.open(this->name_file, std::ofstream::app);
		if (!ofs.is_open()) {
			std::cerr << "Can't open first file!" << std::endl;
		}
		ofs <<"Character: " << this->character << std::endl;
		ofs.close();
	}

	void Person::Set_file()
	{
		this->Set_file_name();
		this->Set_file_description();
		this->Set_file_age();
		this->Set_file_floor();
		this->Set_file_character();

	}



}