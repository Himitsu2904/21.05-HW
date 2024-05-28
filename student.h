#pragma once
class student
{
	float grade;
	char* FIO;
	char* birthday;
	char* telephone;
	static char* group;
	static char* university;
public:
	student();
	student(const char* _FIO, const char* _birthday, const char* _telephone);
	student(const char* _FIO, const char* _birthday, const char* _telephone, float _grade, const char* _group, const char* _university);
	void show()const;
	char* Get_FIO()const
	{
		return FIO;
	}
	char* Get_birthday()const
	{
		return birthday;
	}
	char* Get_telephone()const
	{
		return telephone;
	}
	float Get_grade()const
	{
		return grade;
	}
	static char* Get_university()
	{
		return university;
	}
	static char* Get_group()
	{
		return group;
	}
	void Set_FIO(const char* _FIO);
	void Set_birthday(const char* _birthday);
	void Set_telephone(const char* _telephone);
	void Set_grade(float _grade);
	student(const student& stud);
	void stud_copy(student stud2);
	student Get_stud();
	void del();
	~student();
};