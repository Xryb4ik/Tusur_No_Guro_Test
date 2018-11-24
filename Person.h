#ifndef PERSON_H
#define PERSON_H

#include"Figurant.h"

namespace book
{
	class Person : public Figurant
	{
	private:
		uint32_t age;
		char * floor = nullptr;
		char * character = nullptr;

	public:
		Person();
		~Person();

		void Set_age(uint32_t);
		void Set_floor(char *);
		void Set_character(char *);

		void Set_file_age();
		void Set_file_floor();
		void Set_file_character();

		void Set_file();

	};
}

#endif

