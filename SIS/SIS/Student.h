#pragma once

#include <iostream>
using namespace std;

class Student {

private:
	int ID;
	string name;
	int avg;

public:

	Student(int _ID, string _name, int _avg);
	

	void setID(int _ID);
	int getID();
	void setName(string _name);
	string getName();
	void setAvg(int _avg);
	int getAvg();

	void stuInfo();

};
