#pragma once
#include <iostream>
#include <list>

#include "Module.h"

using namespace std;
class student
{
public:
	long student_number;
	string initials;
	string surname;
	char sex;
	int age;
	list<module> modules;

	student(long student_number, string initials, string surname, char sex, int age)
	{
		this->student_number = student_number;
		this->initials = initials;
		this->surname = surname;
		this->sex = sex;
		this->age = age;
	}

	list<module> initialize_modules()
	{
		list<string> module_names;
		module_names.emplace_back("ELD 211");
		module_names.emplace_back("EPE 221");
		module_names.emplace_back("AEC 201");
		module_names.emplace_back("AGE 213");

		list<module> student_modules;

		for (const auto& module_name : module_names)
		{
			module student_module = module(module_name, 0);

			student_modules.emplace_back(student_module);
		}

		return student_modules;
	}

};

