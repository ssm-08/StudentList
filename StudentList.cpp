/*
 *Description: Create vector of student struct, storing name, ID, and GPA.
 *Use commands to manage program and database.
 *Name: Shree Sai Narayan Medisetti
 *Date:9/29/2025
 */

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

// Create student struct
struct student {
  char firstName[81];
  char lastName[81];
  int id;
  float gpa;
};

// Initiate functions
void addStu(vector<student*>& studentList);
void printList(vector<student*>& studentList);
void deleteStu(vector<student*>& studentList);

int main() {

  // Declare variables
  vector<student*> studentList;
  char command[81];

  char ADD[] = "ADD";
  char PRINT[] = "PRINT";
  char DELETE[] = "DELETE";
  char QUIT[] = "QUIT";

  // Prompting loop
  while (true) {
  
    cout << "Enter a command: ";
    cin >> command;
    
    if (strcmp(command, ADD) == 0) {
      addStu(studentList);
    } else if (strcmp(command, PRINT) == 0) {
      printList(studentList);
    } else if (strcmp(command, DELETE) == 0) {
      deleteStu(studentList);
    } else if (strcmp(command, QUIT) == 0) {
      exit(0);
    }
  }
  
  return 0; 
}

// Add student to the list and ask for name, ID, GPA
void addStu(vector<student*>& studentList) {
  student* newStudent = new student();
  char first[81];
  char last[81];
  int id;
  float gpa;

  cout << "Enter first name: ";
  cin >> first;

  cout << "Enter last name: ";
  cin >> last;

  cout << "Enter student ID: ";
  cin >> id;

  cout << "Enter student GPA: ";
  cin >> gpa;

  strcpy(newStudent->firstName, first);
  strcpy(newStudent->lastName, last);
  newStudent->id = id;
  newStudent->gpa = gpa;

  studentList.push_back(newStudent);
}

// Loop through vector and print student details
void printList(vector<student*>& studentList) {
  for (int i = 0; i < studentList.size(); i++) {
    student* stu = studentList.at(i);
    cout << stu->firstName << " ";
    cout << stu->lastName << ", ";
    cout << stu->id << ", ";
    cout << stu->gpa << endl;
  }
}

// Loop through vector and delete student with given ID
void deleteStu(vector<student*>& studentList) {
  int id;
  int index;
  cout << "Confirm student ID: ";
  cin >> id;

  for (int i = 0; i < studentList.size(); i++) {
    student* stu = studentList.at(i);
    if (stu->id == id) {
      delete stu;
      index = i;
      stu = nullptr;
      studentList.shrink_to_fit();
    }
  }
  studentList.erase(studentList.begin() + index);
}
