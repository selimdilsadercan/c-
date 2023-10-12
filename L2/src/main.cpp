#include <iostream>
#include <fstream>
#include <ios>

using namespace std;

class Athlette {  
  private:
    string name;
    int age;
    double time;
  public:
    Athlette(string n, int a, double t) {
      name = n;
      age = a;
      time = t;
    }
    void printAthlette (Athlette athlette) {
      cout << athlette.name << "-" << athlette.age << "-" << athlette.time << endl;
    }
};


int main(){
  fstream newFile;
  newFile.open("athletes.txt", ios::in); //ios::in Open for input operations.

  Athlette an_athlette = Athlette();

  while(!newFile.eof()){ // eof = end of file
    newFile >> an_athlette.name >> an_athlette.age >> an_athlette.time;
    an_athlette.printAthlette(an_athlette);
  }

  newFile.close();

  return 0;
}