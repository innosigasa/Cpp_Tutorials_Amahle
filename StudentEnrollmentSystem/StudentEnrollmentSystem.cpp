// StudentEnrollmentSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <fstream>
#include "student.h"
using namespace std;

int main()
{
    list<student> registered_students;

    cout << "Hello World!\n";

    _getch();
}

void write_to_file(list<student> students)
{
    ofstream student_file("student_grades.csv");

    for (auto student : students)
    {
        string student_details = "Hello. My name is {name}. I'm {age}.";
    }




    student_file.close();
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
