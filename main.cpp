#include "student.h"
#include "car.h"
#include <iostream>
#include <windows.h>
using namespace std;

student Get_stud2(student stud) { return stud; }

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	student stud1("Игнатенко В. А.", "13.07.2005", "068 342 5136", 87.4, "Компьютерные науки 122", "IT Step School");
	cout << "\t\tStudent 1:" << endl;
	stud1.show();
	student stud2 = stud1;
	cout <<endl <<endl << "\t\tStudent 2:" << endl;
	stud2.show();
	student stud3;
	stud3.stud_copy(stud2);
	cout << endl << endl << "\t\tStudent 3:" << endl;
	stud3.show();
	student stud4;
	//stud4 = stud3.Get_stud();
	//stud4 = Get_stud2(stud3);
	cout << endl << endl << "\t\tStudent 4:" << endl;
	stud4.show();
	cout << endl << "------------------------------------------------------------" << endl;
	car car1("Audi", 20000, 2019, "Automart");
	cout << "\t\t Car 1:" << endl;
	car1.show();
	cout << endl << endl;
	car car2 = car1;
	cout << "\t\t Car 2:" << endl;
	car2.show();
	cout << endl << endl;
	car car3;
	car3.car_copy(car2);
	cout << "\t\t Car 3:" << endl;
	car3.show();
	cout << endl << endl;

	cout << endl;
	stud1.del();
}