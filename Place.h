#ifndef PLACE_H
#define PLACE_H

#include"Figurant.h"

namespace book
{
	class Place : public Figurant
	{
	public:
		Place();
		~Place();

		void Set_file();
	};
}

#endif

