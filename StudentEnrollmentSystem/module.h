#pragma once
#include <iostream>
#include <string>
using namespace std;

class module
{
public:
	string name;
	string grade_symbol;
	int grade;

	//Costructor
	module(const string name, const int grade)
	{
		this->name = name;
		this->grade = grade;
		grade_symbol = set_grade_symbol(grade);
	}

	void set_grade(const int grade)
	{
		this->grade = grade;
		this->grade_symbol = set_grade_symbol(grade);
	}

	string get_grade_with_symbol()
	{
		return to_string(grade) + grade_symbol;
	}
	static string set_grade_symbol(const int grade)
	{
		if (grade >= 97) return "A+";
		if (grade < 97 && grade >= 93) return "A";
		if (grade < 93 && grade >= 90) return "A-";
		if (grade < 90 && grade >= 87) return "B+";
		if (grade < 87 && grade >= 83) return "B";
		if (grade < 83 && grade >= 80) return "B-";
		if (grade < 80 && grade >= 77) return "C+";
		if (grade < 77 && grade >= 73) return "C";
		if (grade < 73 && grade >= 70) return "C-";
		if (grade < 70 && grade >= 67) return "D+";
		if (grade < 67 && grade >= 63) return "D";
		if (grade < 63 && grade >= 60) return "D-";
		return "F";
	}
};

