// StudentEnrollmentSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>

#include "student.h"
#include "module.h"
using namespace std;


void write_to_file(list<student> students)
{
	ofstream student_file("student_grades.csv");

	student_file << "STUDENT NUMBER, INITIALS, SURNAME, SEX, AGE, ELD 211, EPE 221, AEC 201, AGE 213\n";

	for (auto student : students)
	{
		student_file << student.formatted_details+"\n";
	}

	student_file.close();
}

student enroll_student()
{
	long student_number;
	string initials;
	string surname;
	string sex;
	int age;

	cout << " Enter student number : ";
	cin >> student_number;
	cout << " Enter student initials: ";
	cin >> initials;
	cout << " Enter student surname : ";
	cin >> surname;
	cout << " Enter student sex : ";
	cin >> sex;
	cout << " Enter student age : ";
	cin >> age;

	int eld_marks;
	cout << "Enter student marks for this module ( ELD 211 ) :";
	cin >> eld_marks;
	auto module1 = module("ELD 211", eld_marks);

	int epe_marks;
	cout << "Enter student marks for this module ( EPE 221 ) :";
	cin >> epe_marks;
	auto module2 = module("EPE 221", epe_marks);

	int aec_marks;
	cout << "Enter student marks for this module ( AEC 201 ) :";
	cin >> aec_marks;
	auto module3 = module("AEC 201", aec_marks);

	int age_marks;
	cout << "Enter student marks for this module ( AGE 213 ) :";
	cin >> age_marks;
	auto module4 = module("AGE 213", age_marks);

	list<module> modules = { module1,module2,module3,module4 };

	string formatted_student_details = to_string(student_number) + "," + initials + "," + surname + "," + sex + "," +
		to_string(age) + "," + module1.get_grade_with_symbol() + "," + module2.get_grade_with_symbol() + "," + module3.
		get_grade_with_symbol() + "," + module4.get_grade_with_symbol();

	return student(student_number, initials, surname, sex, age, modules, formatted_student_details);
}


int main()
{
	list<student> registered_students;
	bool stop_app = false;
	do
	{
		system("cls");
		cout << "Please select an option below:"<<endl;
		cout << "1. Enroll a student " << endl;
		cout << "2. Write student data into a file " << endl;
		cout << "0. Exit the program!!!" << endl;
		int option = 0;
		cin >> option;

		if (option == 0) {
			stop_app = true;
			cout << "Exiting the program. Goodbye !!";
		}
		else if (option == 1) {
			student enrolled_student = enroll_student();
			registered_students.push_back(enrolled_student);
		}
		else if (option == 2) {
			write_to_file(registered_students);
		}
		else
		{
			cout << "Wrong option !! try again";
		}
	} while (!stop_app);

	_getch();
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
