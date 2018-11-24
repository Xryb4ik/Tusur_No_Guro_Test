#include "Figurant.h"

namespace book
{
	uint32_t Figurant::count = 0;
	uint32_t Figurant::vector_count = 0;

	Figurant::Figurant()
	{
		this->id = ++count;

		char number[255];

		_itoa_s(this->id, number, 255, 10);
		strcat_s(this->name_file, number);
		strcat_s(this->name_file, ".txt");

		std::ofstream ofs(this->name_file);
		if (!ofs.is_open()) {
			std::cerr << "Can't open first file!" << std::endl;
		}

		ofs << "File " << number << std::endl;
		ofs.close();

	}

	void Figurant::Dell_file()
	{

		if (remove(this->name_file) != 0)
			std::cout << "Ошибка удаления"<<std::endl;
		else
			std::cout << "Файл №" << this->id << " успешно удален"<<std::endl;
		
	}

	/*void Figurant::Put_picture(char * Vector_way)
	{
		this->vector_picture[this->vector_count] = Vector_way;
		++vector_count;
	}
	*/
	
	void Figurant::Dell_picture(uint32_t vector_id)
	{
		if (remove(this->vector_picture[vector_id]) != 0)
			std::cout << "Ошибка удаления" << std::endl;
		else
		{
			std::cout << "Картинка успешна удалена" << std::endl;
		}
	}

	void Figurant::Set_file_name()
	{
		std::ofstream ofs;
		ofs.open(this->name_file, std::ofstream::app);
		if (!ofs.is_open()) {
			std::cerr << "Can't open first file!" << std::endl;
		}
		ofs << this->name << std::endl;
		ofs.close();
	}

	void Figurant::Set_file_description()
	{
		std::ofstream ofs;
		ofs.open(this->name_file, std::ofstream::app);
		if (!ofs.is_open()) {
			std::cerr << "Can't open first file!" << std::endl;
		}
		ofs << this->description << std::endl;
		ofs.close();
	}

	void Figurant::Set_name(char * Tname)
	{
		this->name = Tname;
	}

	void Figurant::Set_description(char * Tdescription)
	{
		this->description = Tdescription;
	}

	Figurant::~Figurant()
	{
		this->Dell_file();
		--count;
	}
}