#ifndef FIGURANT_H
#define FIGURANT_H

#include <iostream>
#include <stdint.h>
#include <fstream>

namespace book
{
	class Figurant
	{	

	private:
		uint32_t id;
		static uint32_t count, vector_count;

	protected:
		char name_file[255] = "File_";
		char* name = nullptr;				
		char* description = nullptr;
		char* vector_picture[50];
	
	public:
		Figurant();
		void Dell_file();
		
		void Dell_picture(uint32_t);
		void Set_file_name();
		void Set_file_description();
		
		void Set_name(char*);
		void Set_description(char*);

		~Figurant();
	

		///void Update_picture();
		///void Update_figurant();
		//void Put_picture(char* );
	};
}

#endif
