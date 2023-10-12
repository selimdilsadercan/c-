#include <iostream>

using namespace std;

void swap(int& x, int& y){
  int temp = y;
  y = x;
  x = temp;
}

class Student {  
  public:
    int age;
    string name;
};


int main(){
  Student student;
  student.age = 40;
  student.name = "John";

  cout << "Student age: " << student.age << endl;

  return 0;
}