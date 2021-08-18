#include <iostream>
#include "Box.h"
using namespace std;
int main() {
  int height,length,width;
   // 1. Create a Box type object called box1
  Box box1;
    
  
   // ======= DO NOT CHANGE THE INPUT ===========
  
   cout << "Enter the Height of the Box : ";
   cin >> height;
   cout << "Enter the Length of the Box : ";
   cin >> length;
   cout << "Enter the width of the Box : ";
   cin >> width;
   // ===========================================
  
   // 2. Use setters assign height, length, width throw
    box1.setLength(length);
    box1.getLength();
    box1.setWidth(width);
    box1.getWidth();
    box1.setHeight(height);
    box1.getHeight();
    box1.calcVolume();
  
   // === DO NOT CHANGE THE OUTPUT =============
   cout << "Box Height " << box1.getHeight() << endl;
   cout << "Box Length " << box1.getLength() << endl;
   cout << "Box Width " << box1.getWidth() << endl;
   cout << "Volume of Box is " << box1.calcVolume() << endl;
   // ==========================================
      return 0;
}

