#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

struct student {
  char firstName[81];
  char lastName[81];
  int id;
  float gpa;
};

void addList(vector<student*> studentList);
void printList(vector<student*> studentList);
void deleteList(vector<student*> studentList);

int main() {
  
  vector<student*> studentList;
  char command[81];

  char ADD[] = "ADD";
  char PRINT[] = "PRINT";
  char DELETE[] = "DELETE";
  char QUIT[] = "QUIT";
  
  while (true) {
  
    cout << "Enter a command: ";
    cin >> command;
    
    if (strcmp(command, ADD) == 0) {

    } else if (strcmp(command, PRINT) == 0) {

    } else if (strcmp(command, DELETE) == 0) {

    } else if (strcmp(command, QUIT) == 0) {
      exit(0);
    }
  }
  
  return 0;
  
}
