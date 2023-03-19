#include <iostream>

using std::string;
using namespace std;

class AbstractEmployee
{
  virtual void ASkForPromotion() = 0; // pure virual function

};


class Employee:AbstractEmployee
{
private:
  string Name;
  string Company;
  int Age;
public:
  void setName(string name){
    Name = name;
  }
  string getName() {
    return Name;
  }

  void setComapny(string company){
    Company = company;
  }
  string getCompany() {
    return Company;
  }

  void setAge(int age){
    if(age >= 18) 
    Age = age;
  }
  int getAge() {
    return Age;
  }

  void introduceYourSelf() {
    cout << "Name - " << Name << endl;
    cout << "Company - " << Company << endl;
    cout << "Age - " << Age << endl;
  }

  Employee(string name, string company, int age) {
    Name = name;
    Company = company;
    Age = age;
  };


void ASkForPromotion(){
  if(Age>30)
    cout << Name << " got Promoted!" << endl;
  else 
    cout << Name << ", sorry not promoted"<< endl;
};
};

int main() 
{
Employee employee1= Employee("khaled", "Google", 21);
employee1.ASkForPromotion();

Employee employee2 = Employee("John", "Amazon", 31);
employee2.ASkForPromotion();

}



