#include "Object.h"

namespace book
{
	Object::Object() : Figurant() {}
	
	Object::~Object() {}
	
	void Object::Set_file()
	{
		this->Set_file_name();
		this->Set_file_description();
	}
}