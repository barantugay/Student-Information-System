#include "Student.h"

Student::Student(int _ID, string _name, int _avg) {
	ID = _ID;
	name = _name;
	avg = _avg;
}



void Student::stuInfo() {

	cout << "Student ID: " << ID << endl;
	cout << "Student Name: " << name << endl;
	cout << "Average grade: " << avg << endl;

}





void Student::setID(int _ID) {
	ID = _ID;
}
int Student::getID() {
	return ID;
}
void Student::setName(string _name) {
	name = _name;
}
string Student::getName() {
	return name;
}
void Student::setAvg(int _avg) {
	avg = _avg;
}
int Student::getAvg() {
	return avg;
}