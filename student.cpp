#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <iostream>
using namespace std;

char* student::group = nullptr;
char* student::university = nullptr;

student::student()
{
	FIO = new char[4];
	strcpy(FIO, "---");
	birthday = new char[4];
	strcpy(birthday, "---");
	telephone = new char[4];
	strcpy(telephone, "---");
	grade = 0;
}

student::student(const char* _FIO, const char* _birthday, const char* _telephone) :student()
{
	if (FIO != nullptr)
	{
		delete[] FIO;
	}
	FIO = new char[strlen(_FIO) + 1];
	strcpy(FIO, _FIO);
	if (birthday != nullptr)
	{
		delete[] birthday;
	}
	birthday = new char[strlen(_birthday) + 1];
	strcpy(birthday, _birthday);
	if (telephone != nullptr)
	{
		delete[] telephone;
	}
	telephone = new char[strlen(_telephone) + 1];
	strcpy(telephone, _telephone);
}

student::student(const char* _FIO, const char* _birthday, const char* _telephone, float _grade, const char* _group, const char* _university) :student(_FIO, _birthday, _telephone)
{
	if (_grade > 0)
	{
		grade = _grade;
	}
	if (group != nullptr)
	{
		delete[] group;
	}
	group = new char[strlen(_group) + 1];
	strcpy(group, _group);
	if (university != nullptr)
	{
		delete[] university;
	}
	university = new char[strlen(_university) + 1];
	strcpy(university, _university);
}

void student::show()const
{
	cout << "\tДанные про студента:";
	cout << "\nФИО: " << FIO;
	cout << "\nДата рождения: " << birthday;
	cout << "\nКонтактный телефон: " << telephone;
	cout << "\nГруппа: " << group;
	cout << "\nНазвание университета: " << university;
	cout << "\nСредний балл: " << grade;
}

void student::Set_FIO(const char* _FIO)
{
	if (FIO != nullptr)
	{
		delete[] FIO;
	}
	FIO = new char[strlen(_FIO) + 1];
	strcpy(FIO, _FIO);
}

void student::Set_birthday(const char* _birthday)
{
	if (birthday != nullptr)
	{
		delete[] birthday;
	}
	birthday = new char[strlen(_birthday) + 1];
	strcpy(birthday, _birthday);
}

void student::Set_telephone(const char* _telephone)
{
	if (telephone != nullptr)
	{
		delete[] telephone;
	}
	telephone = new char[strlen(_telephone) + 1];
	strcpy(telephone, _telephone);
}

void student::Set_grade(float _grade)
{
	if (_grade > 0)
	{
		grade = _grade;
	}
}

student::student(const student& stud): FIO(nullptr), birthday(nullptr), telephone(nullptr), grade(0)
{
	FIO = new char[strlen(stud.FIO) + 1];
	strcpy(FIO, stud.FIO);
	birthday = new char[strlen(stud.birthday) + 1];
	strcpy(birthday, stud.birthday);
	telephone = new char[strlen(stud.telephone) + 1];
	strcpy(telephone, stud.telephone);
	grade = stud.grade;
}

void student::stud_copy(student stud2)
{
	FIO = new char[strlen(stud2.FIO) + 1];
	strcpy(FIO, stud2.FIO);
	birthday = new char[strlen(stud2.birthday) + 1];
	strcpy(birthday, stud2.birthday);
	telephone = new char[strlen(stud2.telephone) + 1];
	strcpy(telephone, stud2.telephone);
	grade = stud2.grade;
}

student student::Get_stud()
{
	student stud;
	stud.FIO = new char[strlen(FIO) + 1];
	strcpy(stud.FIO, FIO);
	stud.birthday = new char[strlen(birthday) + 1];
	strcpy(stud.birthday, birthday);
	stud.telephone = new char[strlen(telephone) + 1];
	strcpy(stud.telephone, telephone);
	stud.grade = grade;

	/*stud.Set_FIO(FIO);
	stud.Set_birthday(birthday);
	stud.Set_telephone(telephone);
	stud.Set_grade(grade);*/
	return stud;
}

void student::del()
{
	if (group != nullptr)
	{
		delete[] group;
	}
	if (university != nullptr)
	{
		delete[] university;
	}
}

student::~student()
{
	delete[] FIO;
	delete[] birthday;
	delete[] telephone;
}