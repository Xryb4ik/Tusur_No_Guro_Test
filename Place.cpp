#include "Place.h"

namespace book
{
	Place::Place() : Figurant() {}

	Place::~Place() {}
	
	void Place::Set_file()
	{
		this->Set_file_name();
		this->Set_file_description();
	}
}