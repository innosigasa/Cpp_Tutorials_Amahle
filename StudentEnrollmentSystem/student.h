#pragma once
#include <iostream>
#include <list>
#include <string>
#include "Module.h"

using namespace std;  // NOLINT(clang-diagnostic-header-hygiene)

class student
{
public:
	long student_number;
	string initials;
	string surname;
	string sex;
	int age;
	list<module> modules;
	string formatted_details;

	student(long student_number, string initials, string surname, string sex, int age, list<module> modules, string formatted_details)
	{
		this->student_number = student_number;
		this->initials = initials;
		this->surname = surname;
		this->sex = sex;
		this->age = age;
		this->modules = modules;
		this->formatted_details = formatted_details;
	}
};

