#include <iostream>
#include <fstream>
#include <ios>

using namespace std;

class Athlete {
  private:
    string name;
    int age;
    double time;
  public:
    Athlete(string name, int age, double time) {
        this->name = name;
        this->age = age;
        this->time = time;
    }
    void printAthlette () {
      cout << this->name << "-" << this->age << "-" << this->time << endl;
    }
};


int main(){
  fstream newFile;
  newFile.open("athletes.txt", ios::in); //ios::in Open for input operations.

  int *array = new int[3]; 

  string name;
  int age;
  double time;

  while(!newFile.eof()){ // eof = end of file
    newFile >> name >> age >> time;
    Athlete an_athlette = Athlete(name, age, time);
    an_athlette.printAthlette();
  }

  newFile.close();

  return 0;
}