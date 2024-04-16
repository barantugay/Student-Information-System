#include <iostream>
#include <list>
#include "Student.h"
using namespace std;



void showMenu() {

	cout << endl << endl;
	cout << "*****************************\n";
	cout << "*                           *\n";
	cout << "*            SIS            *\n";
	cout << "*   (Student Info System)   *\n";
	cout << "*                           *\n";
	cout << "*****************************\n\n";

	cout << "New student register = 1" << endl;
	cout << "Show all students = 2" << endl;
	cout << "Delete student register = 3" << endl;
	cout << "Show any students = 4" << endl;
	cout << "Log out = 5 " << endl;


}

void addStu(list<Student>* stuList) {
	int ID, avg;
	string name, fulname, surname;

	cout << "ID: ";
	cin >> ID;
	cout << "Name-Surname: ";
	cin >> fulname >> surname;
	name = fulname + " " + surname;
	cout << "Average: ";
	cin >> avg;

	Student stu(ID, name, avg);
	stuList->push_back(stu);
}

void showList(list<Student>* stuList) {
	list<Student>::iterator it;

	for (it = stuList->begin(); it != stuList->end(); it++) {
		it->stuInfo();
	}
	cout << endl;
}

void delStu(list<Student>* stuList) {
	int id;
	list<Student>::iterator it;

	cout << "ID: ";
	cin >> id;

	for (it = stuList->begin(); it != stuList->end(); it++) {
		if (id == it->getID())
			break;
	}
	if (it == stuList->end()) {
		cout << "Student has not found!!";
	}
	else
	{
		stuList->erase(it);
	}


}

void findStu(list<Student>* stuList){
	int id;
	list<Student>::iterator it;

	cout << "ID: ";
	cin >> id;

	for (it = stuList->begin(); it != stuList->end(); it++) {
		if (id == it->getID())
			break;
	}
	if (it == stuList->end()) {
		cout << "Student has not found!!";
	}
	else
	{
		it->stuInfo();
	}
	

}


int main() {

	list<Student>* stuList = new list<Student>();

	int choice = 0;
	do {
		showMenu();
		cout << "Your choice: ";
		cin >> choice;
		cout << endl << endl;

		switch (choice)
		{
		case 1:
			addStu(stuList);
			break;
		case 2:
			showList(stuList);
			break;
		case 3:
			delStu(stuList);
			break;
		case 4:
			findStu(stuList);
			break;
		case 5:
			cout << "You logged out..";
			break;

		default:
			cout << "Wrong choice" << endl;
		}

	} while (choice != 5);



	cout << endl;
	return 0;
}