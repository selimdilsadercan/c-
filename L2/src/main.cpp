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
    void printAthlette() {
      cout << this->name << "-" << this->age << "-" << this->time << endl;
    }
     ~Athlete() {
      cout << "Athlete is deleted" << endl;
    }
};

////

int main(){
  fstream newFile;
  newFile.open("athletes.txt", ios::in); //ios::in Open for input operations.

  string name;
  int age;
  double time;

  while(!newFile.eof()){ // eof = end of file
    newFile >> name >> age >> time;
    Athlete* an_athlette = new Athlete(name, age, time);
    an_athlette->printAthlette();
    delete an_athlette;
  }

  newFile.close();
  
  return 0;
}




/*
  POINTER
  Athlete* an_athlette = new Athlete(name, age, time);
  an_athlette->printAthlette();

  NORMAL INSAN GİBİ
  Athlete an_athlette = Athlete(name, age, time);
  an_athlette.printAthlette();
*/