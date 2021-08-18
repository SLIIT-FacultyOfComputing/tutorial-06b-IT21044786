//class Student {
  // private section
  //int studentId
  //    name <- 20 charcters
  
  // public section
  //    assignDetails() method declaration
  //    display() method declaration
//};
#pragma once
class Student{
  private:
    int studentId;
    char name[20];

  public:
    void assignDetails(int st_id,char st_name[]);
    void display();
};