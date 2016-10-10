#pragma once
#include<fstream>
#include "Student2.h"
#include <list>
#include <iostream>
class DAO
{
public:
	bool writeFile(Student2, string);
	string readFile(string);
	list<Student2> readList(string);
	DAO();
	~DAO();
};

