#include "Figurant.h"
#include "Place.h"
#include "Object.h"
#include "Person.h"
#include "stdio.h"

int main()
{
	setlocale(LC_ALL, "rus");


	/*
	//Счетчик глобальный для удобства???
	//cпособ 1
	int id = 4;
	char file[255] = "File";
	char name[255];

	_itoa_s(id,name,255,10);
	strcat_s(file, name);
	strcat_s(file, ".txt");

	std::cout << file;

	//способ 2
	char buf[BUFSIZ];
	int i = 1;
	sprintf_s(buf, "%s%d%s", "File", i, ".txt");


	std::cout << buf<<std::endl;
	*/
	/*
	book::Figurant A;
	book::Figurant B;

	int i = 1;
	if (i == 1) {
	book::Figurant C;
	std::cout << "Cickle "<<std::endl;
	}
	book::Figurant D;
	*/

	/* Что за вектор ... как правильно расходовать память */





	book::Figurant A;
	A.Set_name("Elizabeth Taylor");
	A.Set_description("She began her career as a child actress in the early 1940s, and was one of the most popular stars of classical Hollywood cinema.");

	A.Set_file_name();
	A.Set_file_name();
	A.Set_file_description();

	book::Figurant B;
	book::Figurant C;

	book::Place A1;
	A1.Set_name("Moscow");
	A1.Set_description("This is the capital and most populous city of Russia.");

	A1.Set_file();

	book::Person Ann;
	Ann.Set_name("Anna");
	Ann.Set_description("This is me");
	Ann.Set_age(21);
	Ann.Set_floor("Woman");
	Ann.Set_character("She went crazy after graduating from university");

	Ann.Set_file();

//	system("pause");
	return 0;
}