#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int st_id,char st_name[]) {
  studentId=st_id;
  strcpy(name,st_name);

}

// Display StudentId and Name
void Student::display() {
  cout<<"-------------------"<<endl;
  cout<<"Student ID\t:"<<studentId<<endl;
  cout<<"Name\t:"<<name<<endl;
  cout<<"-------------------"<<endl;
}
