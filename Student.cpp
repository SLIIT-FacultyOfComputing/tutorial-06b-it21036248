#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int studentid, char pname[]) {
  studentId = studentid;
  strcpy(Name, pname);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID: " << studentId << endl;
  cout << "Name: " << Name << endl;
}
